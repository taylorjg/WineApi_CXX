#include "stdafx.h"
#include "WineApiObjectCollection.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiObjectCollection::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IWineApiObjectCollection
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
STDMETHODIMP CWineApiObjectCollection::get_Count (long* p_lCount)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_lCount == NULL) {
		return E_POINTER;
	}

	*p_lCount = m_lNumItems;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Item
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiObjectCollection::get_Item (long p_lIndex, IDispatch** p_ppDispatch)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_lIndex < 0 || p_lIndex >= m_lNumItems) {
		return E_INVALIDARG;
	}

	if (p_ppDispatch == NULL) {
		return E_POINTER;
	}

	HRESULT l_hr = S_OK;

	try {
		*p_ppDispatch = V_DISPATCH (&m_svara[p_lIndex]);
		(*p_ppDispatch)->AddRef ();
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
STDMETHODIMP CWineApiObjectCollection::get__NewEnum (IUnknown** p_ppEnum)
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
