#include "stdafx.h"
#include "Ratings.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRatings::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IRatings);
}


//*****************************************************************************
//* Function Name: get_HighestScore
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRatings::get_HighestScore (long* p_plHighestScore)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plHighestScore, m_lHighestScore);
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
