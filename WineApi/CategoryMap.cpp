#include "stdafx.h"
#include "CategoryMap.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMap::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_ICategoryMap);
}


//*****************************************************************************
//* Function Name: get_Status
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMap::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppStatus, m_spStatus);
}


//*****************************************************************************
//* Function Name: get_Categories
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMap::get_Categories (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vCategories, p_ppWineApiObjectCollection);
}
