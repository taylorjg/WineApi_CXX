#include "stdafx.h"
#include "WineType.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineType::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IWineType);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineType::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plId, m_lId);
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineType::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrName, m_sbstrName);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CWineType::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}
