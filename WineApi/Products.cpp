#include "stdafx.h"
#include "Products.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IProducts);
}


//*****************************************************************************
//* Function Name: get_Total
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Total (long* p_plTotal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plTotal, m_lTotal);
}


//*****************************************************************************
//* Function Name: get_Offset
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Offset (long* p_plOffset)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plOffset, m_lOffset);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}


//*****************************************************************************
//* Function Name: get_List
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_List (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vProducts, p_ppWineApiObjectCollection);
}
