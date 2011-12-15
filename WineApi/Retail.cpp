#include "stdafx.h"
#include "Retail.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IRetail
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Sku
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Sku (BSTR* p_pbstrSku)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrSku = m_sbstrSku.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_InStock
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_InStock (VARIANT_BOOL* p_pvbInStock)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pvbInStock = (m_bInStock == false) ? VARIANT_FALSE : VARIANT_TRUE;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Price
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Price (double* p_pdblPrice)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pdblPrice = m_dblPrice;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CRetail::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}
