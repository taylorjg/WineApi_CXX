#include "stdafx.h"
#include "Products.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IProducts
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Total
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Total (long* p_plTotal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plTotal = m_lTotal;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Offset
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Offset (long* p_plOffset)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plOffset = m_lOffset;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProducts::get_Url (BSTR* p_pUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pUrl = m_sbstrUrl.copy ();

	return S_OK;
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
