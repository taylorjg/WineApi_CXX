#include "stdafx.h"
#include "Appellation.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CAppellation::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IAppellation);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CAppellation::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plId, m_lId);
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CAppellation::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrName, m_sbstrName);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CAppellation::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}


//*****************************************************************************
//* Function Name: get_Region
//*   Description: 
//*****************************************************************************
STDMETHODIMP CAppellation::get_Region (IRegion** p_ppRegion)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppRegion, m_spRegion);
}
