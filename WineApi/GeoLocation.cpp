#include "stdafx.h"
#include "GeoLocation.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IGeoLocation
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Latitude
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Latitude (long* p_plLatitude)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plLatitude = m_lLatitude;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Longitude
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Longitude (long* p_plLongitude)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plLongitude = m_lLongitude;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}
