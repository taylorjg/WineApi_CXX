#include "stdafx.h"
#include "Ratings.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRatings::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IRatings
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
STDMETHODIMP CRatings::get_HighestScore (long* p_plHighestScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plHighestScore = m_lHighestScore;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_List
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRatings::get_List (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vRatings, p_ppWineApiObjectCollection);
}
