#include "stdafx.h"
#include "CommunityReview.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReview::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_ICommunityReview
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
STDMETHODIMP CCommunityReview::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plId = m_lId;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReview::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrName = m_sbstrName.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Score
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReview::get_Score (long* p_plScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plScore = m_lScore;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Description
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReview::get_Description (BSTR* p_pbstrDescription)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrDescription = m_sbstrDescription.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCommunityReview::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}
