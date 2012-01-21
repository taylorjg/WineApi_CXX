#include "stdafx.h"
#include "CommunityReviews.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_ICommunityReviews);
}


//*****************************************************************************
//* Function Name: get_HighestScore
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::get_HighestScore (long* p_plHighestScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plHighestScore, m_lHighestScore);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReviews::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
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
