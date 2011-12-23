#include "stdafx.h"
#include "CommunityReviews.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_ICommunityReviews
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_HighestScore
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::get_HighestScore (long* p_plHighestScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plHighestScore = m_lHighestScore;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_List
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::get_List (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vCommunityReviews, p_ppWineApiObjectCollection);
}
