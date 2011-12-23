#include "stdafx.h"
#include "WineApiStringCollection.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiStringCollection::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IWineApiStringCollection
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Count
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiStringCollection::get_Count (long* p_lCount)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_lCount = m_lNumItems;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Item
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiStringCollection::get_Item (long p_lIndex, BSTR* p_pbstrItem)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_lIndex < 0 || p_lIndex >= m_lNumItems) {
		return E_INVALIDARG;
	}

	if (p_pbstrItem == NULL) {
		return E_POINTER;
	}

	HRESULT l_hr = S_OK;

	try {
		_bstr_t l_sbstrItem (m_svara[p_lIndex]);
		*p_pbstrItem = l_sbstrItem.copy ();
	}
	catch (const _com_error& _ce) {
		l_hr = _ce.Error ();
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: get__NewEnum
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiStringCollection::get__NewEnum (IUnknown** p_ppEnum)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_ppEnum = NULL;

	typedef CComEnum<
		IEnumVARIANT,
		&__uuidof(IEnumVARIANT),
		VARIANT,
		_Copy<VARIANT> >
	CComEnumVariant;

	CComObject<CComEnumVariant>* l_pEnum = NULL;
	HRESULT l_hr = CComObject<CComEnumVariant>::CreateInstance (&l_pEnum);

	if (SUCCEEDED (l_hr)) {

		l_pEnum->AddRef ();

		l_hr = l_pEnum->Init (
			&m_svara[0],
			&m_svara[m_lNumItems],
			this->GetUnknown (),
			AtlFlagNoCopy);

		if (SUCCEEDED (l_hr)) {
			l_hr = l_pEnum->QueryInterface (p_ppEnum);
		}

		l_pEnum->Release ();
	}

	return l_hr;
}
