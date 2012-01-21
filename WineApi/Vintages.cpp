#include "stdafx.h"
#include "Vintages.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CVintages::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IVintages);
}


//*****************************************************************************
//* Function Name: get_List
//*   Description: 
//*****************************************************************************
STDMETHODIMP CVintages::get_List (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vVintages, p_ppWineApiObjectCollection);
}
