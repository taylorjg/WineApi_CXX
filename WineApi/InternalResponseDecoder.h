#ifndef _CInternalResponseDecoder_h_
#define _CInternalResponseDecoder_h_

#include "IResponseDecoder.h"
#include "IEntityMetadata.h"
#include "EntityDecoder.h"

template<typename U, typename V>
class CInternalResponseDecoder : public IResponseDecoder<U, V>
{
public:
	virtual void DecodeResponse (const _bstr_t&	p_sbstrResponse, V& p_pResult);
};

//*****************************************************************************
//* Function Name: DecodeResponse
//*   Description: 
//*****************************************************************************
template<typename U, typename V>
void CInternalResponseDecoder<U, V>::DecodeResponse (
	const _bstr_t&	p_sbstrResponse,
	V&				p_pResult)
{
	CComObject<U>* l_pCXXEntity = NULL;
	HRESULT l_hr = CComObject<U>::CreateInstance (&l_pCXXEntity);

	IEntityMetadata* l_pEntityMetadata = static_cast<IEntityMetadata*>(l_pCXXEntity);

	std::vector<CPropertyDescriptor> l_vPropertyDescriptorTable;
	std::vector<CPropertyArrayDescriptor> l_vPropertyArrayDescriptorTable;
	std::vector<CChildEntityDescriptor>	l_vChildEntityDescriptorTable;
	std::vector<CChildEntityArrayDescriptor> l_vChildEntityArrayDescriptorTable;

	l_pEntityMetadata->GetPropertyDescriptorTable (l_vPropertyDescriptorTable);
	l_pEntityMetadata->GetPropertyArrayDescriptorTable (l_vPropertyArrayDescriptorTable);
	l_pEntityMetadata->GetChildEntityDescriptorTable (l_vChildEntityDescriptorTable);
	l_pEntityMetadata->GetChildEntityArrayDescriptorTable (l_vChildEntityArrayDescriptorTable);

	CEntityDecoder::DecodeEntity (
		p_sbstrResponse, 
		l_vPropertyDescriptorTable,
		l_vPropertyArrayDescriptorTable,
		l_vChildEntityDescriptorTable,
		l_vChildEntityArrayDescriptorTable);

	V l_spEntity;
	l_hr = l_pCXXEntity->QueryInterface (&l_spEntity);

	if (SUCCEEDED (l_hr)) {
		p_pResult = l_spEntity;
	}
}

#endif
