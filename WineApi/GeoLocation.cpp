#include "stdafx.h"
#include "GeoLocation.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IGeoLocation);
}


//*****************************************************************************
//* Function Name: get_Latitude
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Latitude (long* p_plLatitude)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plLatitude, m_lLatitude);
}


//*****************************************************************************
//* Function Name: get_Longitude
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Longitude (long* p_plLongitude)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_plLongitude, m_lLongitude);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CGeoLocation::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}
