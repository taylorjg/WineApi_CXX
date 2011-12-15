#include "stdafx.h"
#include "EntityDecoder.h"
#include "IEntityMetadata.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//*****************************************************************************
//* Function Name: DecodeEntity
//*   Description: 
//*****************************************************************************
void CEntityDecoder::DecodeEntity (
	const _bstr_t&									p_sbstrXML,
	const std::vector<CPropertyDescriptor>&			p_vPropertyDescriptorTable,
	const std::vector<CPropertyArrayDescriptor>&	p_vPropertyArrayDescriptorTable,
	const std::vector<CChildEntityDescriptor>&		p_vChildEntityDescriptorTable,
	const std::vector<CChildEntityArrayDescriptor>&	p_vChildEntityArrayDescriptorTable)
{
	try {
		MSXML2::IXMLDOMDocumentPtr l_spDocument;
		HRESULT l_hr = l_spDocument.CreateInstance (__uuidof (MSXML2::DOMDocument));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		VARIANT_BOOL l_vbLoadXML = l_spDocument->loadXML (p_sbstrXML);

		MSXML2::IXMLDOMElementPtr l_spDocumentElement = l_spDocument->documentElement;

		std::vector<CPropertyDescriptor>::const_iterator it1;

		for (	it1  = p_vPropertyDescriptorTable.begin ();
				it1 != p_vPropertyDescriptorTable.end ();
				++it1)
		{
			const CPropertyDescriptor& l_PropertyDescriptor = (*it1);
			const type_info& l_tiPropertyType = l_PropertyDescriptor.GetPropertyType ();

			MSXML2::IXMLDOMElementPtr l_spElement =
				l_spDocumentElement->selectSingleNode (l_PropertyDescriptor.GetXPath ());

			if (l_spElement) {

				_variant_t l_svarValue (l_spElement->text);

				if (l_tiPropertyType == typeid (_bstr_t)) {
					_bstr_t l_sbstrValue = l_svarValue;
					l_PropertyDescriptor.SetPropertyValue (l_sbstrValue);
				}
				else if (l_tiPropertyType == typeid (double)) {
					double l_dblValue = l_svarValue;
					l_PropertyDescriptor.SetPropertyValue (l_dblValue);
				}
				else if (l_tiPropertyType == typeid (long)) {
					long l_lValue = l_svarValue;
					l_PropertyDescriptor.SetPropertyValue (l_lValue);
				}
				else if (l_tiPropertyType == typeid (bool)) {
					bool l_bValue = l_svarValue;
					l_PropertyDescriptor.SetPropertyValue (l_bValue);
				}
				else {
					// Unsupported data type.
					_ASSERTE (FALSE);
				}
			}
		}

		std::vector<CPropertyArrayDescriptor>::const_iterator it2;

		for (	it2  = p_vPropertyArrayDescriptorTable.begin ();
				it2 != p_vPropertyArrayDescriptorTable.end ();
				++it2)
		{
			const CPropertyArrayDescriptor& l_PropertyArrayDescriptor = (*it2);
			const type_info& l_tiPropertyType = l_PropertyArrayDescriptor.GetPropertyType ();

			MSXML2::IXMLDOMNodeListPtr l_spNodeList =
				l_spDocumentElement->selectNodes (l_PropertyArrayDescriptor.GetXPath ());

			for (INT l_iNodeIndex = 0; l_iNodeIndex < l_spNodeList->length; l_iNodeIndex++) {
				MSXML2::IXMLDOMElementPtr l_spElement = l_spNodeList->item[l_iNodeIndex];
				if (l_spElement) {

					_variant_t l_svarValue (l_spElement->text);

					if (l_tiPropertyType == typeid (_bstr_t)) {
						_bstr_t l_sbstrValue = l_svarValue;
						l_PropertyArrayDescriptor.AddPropertyValue (l_sbstrValue);
					}
					else if (l_tiPropertyType == typeid (double)) {
						double l_dblValue = l_svarValue;
						l_PropertyArrayDescriptor.AddPropertyValue (l_dblValue);
					}
					else if (l_tiPropertyType == typeid (long)) {
						long l_lValue = l_svarValue;
						l_PropertyArrayDescriptor.AddPropertyValue (l_lValue);
					}
					else if (l_tiPropertyType == typeid (bool)) {
						bool l_bValue = l_svarValue;
						l_PropertyArrayDescriptor.AddPropertyValue (l_bValue);
					}
					else {
						// Unsupported data type.
						_ASSERTE (FALSE);
					}
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

				IEntityMetadata* l_pChildEntity = l_ChildEntityDescriptor.CreateInstance ();

				if (l_pChildEntity) {

					std::vector<CPropertyDescriptor> l_vPropertyDescriptorTable;
					std::vector<CPropertyArrayDescriptor> l_vPropertyArrayDescriptorTable;
					std::vector<CChildEntityDescriptor>	l_vChildEntityDescriptorTable;
					std::vector<CChildEntityArrayDescriptor> l_vChildEntityArrayDescriptorTable;

					l_pChildEntity->GetPropertyDescriptorTable (l_vPropertyDescriptorTable);
					l_pChildEntity->GetPropertyArrayDescriptorTable (l_vPropertyArrayDescriptorTable);
					l_pChildEntity->GetChildEntityDescriptorTable (l_vChildEntityDescriptorTable);
					l_pChildEntity->GetChildEntityArrayDescriptorTable (l_vChildEntityArrayDescriptorTable);

					DecodeEntity (
						l_spElement->xml, 
						l_vPropertyDescriptorTable,
						l_vPropertyArrayDescriptorTable,
						l_vChildEntityDescriptorTable,
						l_vChildEntityArrayDescriptorTable);
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

					if (l_pChildEntity) {

						std::vector<CPropertyDescriptor> l_vPropertyDescriptorTable;
						std::vector<CPropertyArrayDescriptor> l_vPropertyArrayDescriptorTable;
						std::vector<CChildEntityDescriptor>	l_vChildEntityDescriptorTable;
						std::vector<CChildEntityArrayDescriptor> l_vChildEntityArrayDescriptorTable;

						l_pChildEntity->GetPropertyDescriptorTable (l_vPropertyDescriptorTable);
						l_pChildEntity->GetPropertyArrayDescriptorTable (l_vPropertyArrayDescriptorTable);
						l_pChildEntity->GetChildEntityDescriptorTable (l_vChildEntityDescriptorTable);
						l_pChildEntity->GetChildEntityArrayDescriptorTable (l_vChildEntityArrayDescriptorTable);

						DecodeEntity (
							l_spElement->xml, 
							l_vPropertyDescriptorTable,
							l_vPropertyArrayDescriptorTable,
							l_vChildEntityDescriptorTable,
							l_vChildEntityArrayDescriptorTable);
					}
				}
			}

		}
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("HRESULT: 0x%08X\n"), _ce.Error ());
	}
}
