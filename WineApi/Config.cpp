#include "stdafx.h"
#include "WineApi.h"
#include "Config.h"
#include "Utils.h"

static const wchar_t SERVICE_URL[]			= L"http://services.wine.com/api";
static const wchar_t SERVICE_NAME[]			= L"service.svc";
static const wchar_t FORMAT_XML[]			= L"xml";
static const wchar_t DEFAULT_API_VERSION[]	= L"beta2";
static const wchar_t BLANK[]				= L"";

_bstr_t CConfig::m_s_sbstrApiKey (BLANK);
_bstr_t CConfig::m_s_sbstrVersion (DEFAULT_API_VERSION);
_bstr_t CConfig::m_s_sbstrAffiliateId (BLANK);

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IConfig);
}


//*****************************************************************************
//* Function Name: get_ApiKey
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::get_ApiKey (BSTR* p_pbstrApiKey)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyGetHelper (p_pbstrApiKey, m_s_sbstrApiKey);
}


//*****************************************************************************
//* Function Name: put_ApiKey
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::put_ApiKey (BSTR p_bstrApiKey)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyPutHelper (p_bstrApiKey, m_s_sbstrApiKey);
}


//*****************************************************************************
//* Function Name: get_Version
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::get_Version (BSTR* p_pbstrVersion)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyGetHelper (p_pbstrVersion, m_s_sbstrVersion);
}


//*****************************************************************************
//* Function Name: put_Version
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::put_Version (BSTR p_bstrVersion)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyPutHelper (p_bstrVersion, m_s_sbstrVersion);
}


//*****************************************************************************
//* Function Name: get_AffiliateId
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::get_AffiliateId (BSTR* p_pbstrAffiliateId)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyGetHelper (p_pbstrAffiliateId, m_s_sbstrAffiliateId);
}


//*****************************************************************************
//* Function Name: put_AffiliateId
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::put_AffiliateId (BSTR p_bstrAffiliateId)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	return ::UtilsPropertyPutHelper (p_bstrAffiliateId, m_s_sbstrAffiliateId);
}


//*****************************************************************************
//* Function Name: GetBaseUrl
//*   Description: 
//*****************************************************************************
_bstr_t CConfig::GetBaseUrl (const _bstr_t& p_sbstrResource)
{
	wchar_t l_wszBaseUrl[512] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (
#else
	(void) _snwprintf (
#endif
		l_wszBaseUrl,
		512,
		L"%s/%s/%s/%s/%s?apikey=%s",
        SERVICE_URL,
        static_cast<LPCWSTR>(GetVersion ()),
        SERVICE_NAME,
        FORMAT_XML,
        static_cast<LPCWSTR>(p_sbstrResource),
        static_cast<LPCWSTR>(GetApiKey ()));

	_bstr_t l_sbstrBaseUrl (l_wszBaseUrl);

	if (m_s_sbstrAffiliateId.length () > 0) {
		::UtilsAppendNameValueToQueryString (
			l_sbstrBaseUrl,
			L"affiliateId",
			m_s_sbstrAffiliateId);
	}

	return l_sbstrBaseUrl;
}


//*****************************************************************************
//* Function Name: GetBaseUrl
//*   Description: 
//*****************************************************************************
void CConfig::Reset (void)
{
	m_s_sbstrApiKey			= BLANK;
	m_s_sbstrVersion		= DEFAULT_API_VERSION;
	m_s_sbstrAffiliateId	= BLANK;
}
