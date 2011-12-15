#include "stdafx.h"
#include "Community.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunity::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_ICommunity
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunity::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Reviews
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunity::get_Reviews (ICommunityReviews** p_ppCommunityReviews)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spCommunityReviews) {
		*p_ppCommunityReviews = m_spCommunityReviews;
		(*p_ppCommunityReviews)->AddRef ();
	}

	return S_OK;
}
