#include "stdafx.h"
#include "Catalog.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_ICatalog
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Status
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_ppStatus) {
		*p_ppStatus = m_spStatus;
		(*p_ppStatus)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Products
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalog::get_Products (IProducts** p_ppProducts)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spProducts) {
		*p_ppProducts = m_spProducts;
		(*p_ppProducts)->AddRef ();
	}

	return S_OK;
}
