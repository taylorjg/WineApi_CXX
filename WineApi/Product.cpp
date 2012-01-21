#include "stdafx.h"
#include "Product.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IProduct);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plId, m_lId);
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrName, m_sbstrName);
}


//*****************************************************************************
//* Function Name: get_Description
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Description (BSTR* p_pbstrDescription)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrDescription, m_sbstrDescription);
}


//*****************************************************************************
//* Function Name: get_PriceMin
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceMin (double* p_dblPriceMin)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_dblPriceMin, m_dblPriceMin);
}


//*****************************************************************************
//* Function Name: get_PriceMax
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceMax (double* p_dblPriceMax)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_dblPriceMax, m_dblPriceMax);
}


//*****************************************************************************
//* Function Name: get_PriceRetail
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceRetail (double* p_dblPriceRetail)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_dblPriceRetail, m_dblPriceRetail);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}


//*****************************************************************************
//* Function Name: get_Type
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Type (BSTR* p_pbstrType)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrType, m_sbstrType);
}


//*****************************************************************************
//* Function Name: get_Year
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Year (BSTR* p_pbstrYear)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrYear, m_sbstrYear);
}


//*****************************************************************************
//* Function Name: get_GeoLocation
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_GeoLocation (IGeoLocation** p_ppGeoLocation)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppGeoLocation, m_spGeoLocation);
}


//*****************************************************************************
//* Function Name: get_Appellation
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Appellation (IAppellation** p_ppAppellation)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppAppellation, m_spAppellation);
}


//*****************************************************************************
//* Function Name: get_Varietal
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Varietal (IVarietal** p_ppVarietal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppVarietal, m_spVarietal);
}


//*****************************************************************************
//* Function Name: get_Vineyard
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Vineyard (IVineyard** p_ppVineyard)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppVineyard, m_spVineyard);
}


//*****************************************************************************
//* Function Name: get_Ratings
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Ratings (IRatings** p_ppRatings)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppRatings, m_spRatings);
}


//*****************************************************************************
//* Function Name: get_Retail
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Retail (IRetail** p_ppRetail)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppRetail, m_spRetail);
}


//*****************************************************************************
//* Function Name: get_Vintages
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Vintages (IVintages** p_ppVintages)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppVintages, m_spVintages);
}


//*****************************************************************************
//* Function Name: get_Community
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Community (ICommunity** p_ppCommunity)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppCommunity, m_spCommunity);
}


//*****************************************************************************
//* Function Name: get_ProductAttributes
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_ProductAttributes (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vProductAttributes, p_ppWineApiObjectCollection);
}


//*****************************************************************************
//* Function Name: get_Labels
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Labels (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vLabels, p_ppWineApiObjectCollection);
}
