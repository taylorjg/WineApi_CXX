#include "stdafx.h"
#include "Retail.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IRetail);
}


//*****************************************************************************
//* Function Name: get_Sku
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Sku (BSTR* p_pbstrSku)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrSku, m_sbstrSku);
}


//*****************************************************************************
//* Function Name: get_InStock
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_InStock (VARIANT_BOOL* p_pvbInStock)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pvbInStock, m_bInStock);
}


//*****************************************************************************
//* Function Name: get_Price
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Price (double* p_pdblPrice)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pdblPrice, m_dblPrice);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}


//*****************************************************************************
//* Function Name: get_State
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_State (BSTR* p_pbstrState)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrState, m_sbstrState);
}
