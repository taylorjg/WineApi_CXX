#include "stdafx.h"
#include "ObjectCollection.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CObjectCollection::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IObjectCollection
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
STDMETHODIMP CObjectCollection::get_Count (long* p_lCount)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_lCount = m_lNumItems;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Item
//*   Description: 
//*****************************************************************************
STDMETHODIMP CObjectCollection::get_Item (long p_lIndex, IDispatch** p_ppDispatch)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_ppDispatch = V_DISPATCH (&m_svara[p_lIndex]);
	(*p_ppDispatch)->AddRef ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get__NewEnum
//*   Description: 
//*****************************************************************************
STDMETHODIMP CObjectCollection::get__NewEnum (IUnknown** p_ppEnum)
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
