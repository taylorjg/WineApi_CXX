#include "stdafx.h"
#include "WineApiObjectCollection.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiObjectCollection::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IWineApiObjectCollection);
}


//*****************************************************************************
//* Function Name: get_Count
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineApiObjectCollection::get_Count (long* p_plCount)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plCount, m_lNumItems);
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

	*p_ppDispatch = NULL;

	HRESULT l_hr = S_OK;

	try {
		IDispatchPtr l_spDispatch = m_svara[p_lIndex];
		l_hr = UtilsGetInterfacePointerHelper (p_ppDispatch, l_spDispatch);
	}
	catch (const _com_error& l_ce) {
		l_hr = l_ce.Error ();
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

	if (p_ppEnum == NULL) {
		return E_POINTER;
	}

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
