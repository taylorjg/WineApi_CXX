#include "stdafx.h"
#include "Rating.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRating::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IRating);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRating::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plId, m_lId);
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRating::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrName, m_sbstrName);
}


//*****************************************************************************
//* Function Name: get_Score
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRating::get_Score (long* p_plScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plScore, m_lScore);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRating::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}
