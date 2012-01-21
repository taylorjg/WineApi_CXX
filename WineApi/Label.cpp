#include "stdafx.h"
#include "Label.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CLabel::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_ILabel);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CLabel::get_Id (BSTR* p_pbstrId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrId, m_sbstrId);
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CLabel::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrName, m_sbstrName);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CLabel::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}
