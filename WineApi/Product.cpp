#include "stdafx.h"
#include "Product.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IProduct
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Id (long* p_plId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plId = m_lId;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Name
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Name (BSTR* p_pbstrName)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrName = m_sbstrName.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Description
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Description (BSTR* p_pbstrDescription)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrDescription = m_sbstrDescription.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_PriceMin
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceMin (double* p_dblPriceMin)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_dblPriceMin = m_dblPriceMin;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_PriceMax
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceMax (double* p_dblPriceMax)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_dblPriceMax = m_dblPriceMax;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_PriceRetail
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_PriceRetail (double* p_dblPriceRetail)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_dblPriceRetail = m_dblPriceRetail;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Type
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Type (BSTR* p_pbstrType)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrType = m_sbstrType.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Year
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Year (BSTR* p_pbstrYear)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrYear = m_sbstrYear.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_GeoLocation
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_GeoLocation (IGeoLocation** p_ppGeoLocation)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spGeoLocation) {
		*p_ppGeoLocation = m_spGeoLocation;
		(*p_ppGeoLocation)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Appellation
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Appellation (IAppellation** p_ppAppellation)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spAppellation) {
		*p_ppAppellation = m_spAppellation;
		(*p_ppAppellation)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Varietal
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Varietal (IVarietal** p_ppVarietal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spVarietal) {
		*p_ppVarietal = m_spVarietal;
		(*p_ppVarietal)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Vineyard
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Vineyard (IVineyard** p_ppVineyard)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spVineyard) {
		*p_ppVineyard = m_spVineyard;
		(*p_ppVineyard)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Ratings
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Ratings (IRatings** p_ppRatings)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spRatings) {
		*p_ppRatings = m_spRatings;
		(*p_ppRatings)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Retail
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Retail (IRetail** p_ppRetail)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spRetail) {
		*p_ppRetail = m_spRetail;
		(*p_ppRetail)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Vintages
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Vintages (IVintages** p_ppVintages)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spVintages) {
		*p_ppVintages = m_spVintages;
		(*p_ppVintages)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Community
//*   Description: 
//*****************************************************************************
STDMETHODIMP CProduct::get_Community (ICommunity** p_ppCommunity)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (m_spCommunity) {
		*p_ppCommunity = m_spCommunity;
		(*p_ppCommunity)->AddRef ();
	}

	return S_OK;
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
