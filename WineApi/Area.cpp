#include "stdafx.h"
#include "Area.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArea::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IArea
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArea::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plId = m_lId;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArea::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrName = m_sbstrName.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArea::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Parent
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArea::get_Parent (IArea** p_ppParent)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spParent) {
		*p_ppParent = m_spParent;
		(*p_ppParent)->AddRef ();
	}

	return S_OK;
}
