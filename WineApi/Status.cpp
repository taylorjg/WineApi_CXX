#include "stdafx.h"
#include "Status.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IStatus);
}


//*****************************************************************************
//* Function Name: get_ReturnCode
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::get_ReturnCode (long* p_plReturnCode)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plReturnCode, m_lReturnCode);
}


//*****************************************************************************
//* Function Name: get_Messages
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::get_Messages (IWineApiStringCollection** p_ppWineApiStringCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForStringCollection (m_vMessages, p_ppWineApiStringCollection);
}
