#include "stdafx.h"
#include "Catalog.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_ICatalog);
}


//*****************************************************************************
//* Function Name: get_Status
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppStatus, m_spStatus);
}


//*****************************************************************************
//* Function Name: get_Products
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::get_Products (IProducts** p_ppProducts)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppProducts, m_spProducts);
}
