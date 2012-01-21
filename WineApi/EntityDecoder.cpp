#include "stdafx.h"
#include "resource.h"
#include "EntityDecoder.h"
#include "IEntityMetadata.h"
#include "ComErrorHandling.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//*****************************************************************************
//* Function Name: DecodeEntity
//*   Description: Decode an entity's XML element based on various tables of
//*                metadata. We support 4 different tables of metadata:
//*
//*                    1) Single properties of simple data types
//*                           (e.g. a string, a long, etc.)
//*
//*                    2) Arrays of properties of simple data types
//*                           (e.g. an array of strings, an array of longs, etc.)
//*
//*                    3) Single child entities
//*                           (e.g. a child entity of type CStatus)
//*
//*                    4) Arrays of child entities
//*                           (e.g. an array child entities of type CProduct)
//*****************************************************************************
void CEntityDecoder::DecodeEntity (
	const _bstr_t&									p_sbstrXML,
	const std::vector<CPropertyDescriptor>&			p_vPropertyDescriptorTable,
	const std::vector<CPropertyArrayDescriptor>&	p_vPropertyArrayDescriptorTable,
	const std::vector<CChildEntityDescriptor>&		p_vChildEntityDescriptorTable,
	const std::vector<CChildEntityArrayDescriptor>&	p_vChildEntityArrayDescriptorTable)
{
	MSXML2::IXMLDOMDocumentPtr l_spDocument;
	HRESULT l_hr = l_spDocument.CreateInstance (__uuidof (MSXML2::DOMDocument));
	if (FAILED (l_hr)) _com_issue_error (l_hr);

	VARIANT_BOOL l_vbLoadXML = l_spDocument->loadXML (p_sbstrXML);

	if (l_vbLoadXML == VARIANT_FALSE) {
		_bstr_t l_sbstrReason = l_spDocument->parseError->reason;
		ThrowComErrorException (
			__FILE__,
			__LINE__,
			E_UNEXPECTED,
			IDS_LOADXML_FAILED,
			static_cast<LPCTSTR>(l_sbstrReason));
	}

	MSXML2::IXMLDOMElementPtr l_spDocumentElement = l_spDocument->documentElement;

	std::vector<CPropertyDescriptor>::const_iterator it1;

	for (	it1  = p_vPropertyDescriptorTable.begin ();
			it1 != p_vPropertyDescriptorTable.end ();
			++it1)
	{
		const CPropertyDescriptor& l_PropertyDescriptor = (*it1);

		MSXML2::IXMLDOMElementPtr l_spElement =
			l_spDocumentElement->selectSingleNode (l_PropertyDescriptor.GetXPath ());

		if (l_spElement) {
			DecodeProperty (l_spElement->text, false, &l_PropertyDescriptor, NULL);
		}
	}

	std::vector<CPropertyArrayDescriptor>::const_iterator it2;

	for (	it2  = p_vPropertyArrayDescriptorTable.begin ();
			it2 != p_vPropertyArrayDescriptorTable.end ();
			++it2)
	{
		const CPropertyArrayDescriptor& l_PropertyArrayDescriptor = (*it2);

		MSXML2::IXMLDOMNodeListPtr l_spNodeList =
			l_spDocumentElement->selectNodes (l_PropertyArrayDescriptor.GetXPath ());

		for (INT l_iNodeIndex = 0; l_iNodeIndex < l_spNodeList->length; l_iNodeIndex++) {
			MSXML2::IXMLDOMElementPtr l_spElement = l_spNodeList->item[l_iNodeIndex];
			if (l_spElement) {
				DecodeProperty (l_spElement->text, true, NULL, &l_PropertyArrayDescriptor);
			}
		}
	}

	std::vector<CChildEntityDescriptor>::const_iterator it3;

	for (	it3  = p_vChildEntityDescriptorTable.begin ();
			it3 != p_vChildEntityDescriptorTable.end ();
			++it3)
	{
		const CChildEntityDescriptor& l_ChildEntityDescriptor = (*it3);

		MSXML2::IXMLDOMElementPtr l_spElement =
			l_spDocumentElement->selectSingleNode (l_ChildEntityDescriptor.GetXPath ());

		if (l_spElement) {

			// If the element has the i:nil attribute and the value of the
			// attribute is "true" then we don't want to create an instance
			// of the child entity.

			bool l_bNil = false;

			MSXML2::IXMLDOMAttributePtr l_spNilAttribute = l_spElement->selectSingleNode (L"@i:nil");
			if (l_spNilAttribute) {
				_variant_t l_svarValue = l_spNilAttribute->value;
				_bstr_t l_sbstrValue = l_svarValue;
				if (l_sbstrValue == _bstr_t (L"true")) {
					l_bNil = true;
				}
			}

			if (!l_bNil) {
				IEntityMetadata* l_pChildEntity = l_ChildEntityDescriptor.CreateInstance ();
				DecodeChildEntity (l_spElement->xml, l_pChildEntity);
			}
		}
	}

	std::vector<CChildEntityArrayDescriptor>::const_iterator it4;

	for (	it4  = p_vChildEntityArrayDescriptorTable.begin ();
			it4 != p_vChildEntityArrayDescriptorTable.end ();
			++it4)
	{
		const CChildEntityArrayDescriptor& l_ChildEntityArrayDescriptor = (*it4);

		MSXML2::IXMLDOMNodeListPtr l_spNodeList =
			l_spDocumentElement->selectNodes (l_ChildEntityArrayDescriptor.GetXPath ());

		for (INT l_iNodeIndex = 0; l_iNodeIndex < l_spNodeList->length; l_iNodeIndex++) {
			MSXML2::IXMLDOMElementPtr l_spElement = l_spNodeList->item[l_iNodeIndex];
			if (l_spElement) {
				IEntityMetadata* l_pChildEntity = l_ChildEntityArrayDescriptor.CreateInstance ();
				DecodeChildEntity (l_spElement->xml, l_pChildEntity);
			}
		}
	}
}


//*****************************************************************************
//* Function Name: DecodeProperty
//*   Description: Decode a single property value. We support a small number
//*                of simple data types. Having converted the string value
//*                to a particular data type, hand it off to one of two
//*                property descriptors - either p_pPropertyDescriptor which
//*                holds a single value or p_pPropertyArrayDescriptor which
//*                holds a vector of values (of the same type).
//*****************************************************************************
void CEntityDecoder::DecodeProperty (
	const _bstr_t&					p_sbstrValue,
	bool							p_bPropertyArray,
	const CPropertyDescriptor*		p_pPropertyDescriptor,
	const CPropertyArrayDescriptor*	p_pPropertyArrayDescriptor)
{
	_variant_t l_svarValue (p_sbstrValue);

	_ASSERTE (
		(p_bPropertyArray == true  && p_pPropertyDescriptor == NULL && p_pPropertyArrayDescriptor != NULL) ||
		(p_bPropertyArray == false && p_pPropertyDescriptor != NULL && p_pPropertyArrayDescriptor == NULL));

	const type_info& l_tiPropertyType =
		(p_bPropertyArray)
			? p_pPropertyArrayDescriptor->GetPropertyType ()
			: p_pPropertyDescriptor->GetPropertyType ();

	if (l_tiPropertyType == typeid (_bstr_t)) {
		_bstr_t l_sbstrValue = l_svarValue;
		if (p_bPropertyArray)
			p_pPropertyArrayDescriptor->AddPropertyValue (l_sbstrValue);
		else
			p_pPropertyDescriptor->SetPropertyValue (l_sbstrValue);
	}
	else if (l_tiPropertyType == typeid (double)) {
		double l_dblValue = l_svarValue;
		if (p_bPropertyArray)
			p_pPropertyArrayDescriptor->AddPropertyValue (l_dblValue);
		else
			p_pPropertyDescriptor->SetPropertyValue (l_dblValue);
	}
	else if (l_tiPropertyType == typeid (long)) {
		long l_lValue = l_svarValue;
		if (p_bPropertyArray)
			p_pPropertyArrayDescriptor->AddPropertyValue (l_lValue);
		else
			p_pPropertyDescriptor->SetPropertyValue (l_lValue);
	}
	else if (l_tiPropertyType == typeid (bool)) {
		bool l_bValue = l_svarValue;
		if (p_bPropertyArray)
			p_pPropertyArrayDescriptor->AddPropertyValue (l_bValue);
		else
			p_pPropertyDescriptor->SetPropertyValue (l_bValue);
	}
	else {
		USES_CONVERSION;
		LPCTSTR l_lpszPropertyTypeName = A2CT (l_tiPropertyType.name ());
		ThrowComErrorException (
			__FILE__,
			__LINE__,
			E_UNEXPECTED,
			IDS_UNSUPPORTED_PROPERTY_DATA_TYPE,
			l_lpszPropertyTypeName);
	}
}


//*****************************************************************************
//* Function Name: DecodeChildEntity
//*   Description: Decode a child entity object. Obtain the child entity's
//*                metadata and then make a recursive call to DecodeEntity().
//*****************************************************************************
void CEntityDecoder::DecodeChildEntity (
	const _bstr_t&		p_sbstrXML,
	IEntityMetadata*	p_pChildEntity)
{
	if (p_pChildEntity) {

		std::vector<CPropertyDescriptor>			l_vPropertyDescriptorTable;
		std::vector<CPropertyArrayDescriptor>		l_vPropertyArrayDescriptorTable;
		std::vector<CChildEntityDescriptor>			l_vChildEntityDescriptorTable;
		std::vector<CChildEntityArrayDescriptor>	l_vChildEntityArrayDescriptorTable;

		p_pChildEntity->GetPropertyDescriptorTable			(l_vPropertyDescriptorTable);
		p_pChildEntity->GetPropertyArrayDescriptorTable		(l_vPropertyArrayDescriptorTable);
		p_pChildEntity->GetChildEntityDescriptorTable		(l_vChildEntityDescriptorTable);
		p_pChildEntity->GetChildEntityArrayDescriptorTable	(l_vChildEntityArrayDescriptorTable);

		DecodeEntity (
			p_sbstrXML, 
			l_vPropertyDescriptorTable,
			l_vPropertyArrayDescriptorTable,
			l_vChildEntityDescriptorTable,
			l_vChildEntityArrayDescriptorTable);
	}
}
