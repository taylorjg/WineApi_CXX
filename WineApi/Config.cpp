#include "stdafx.h"
#include "WineApi.h"
#include "Config.h"

static const wchar_t SERVICE_URL[]			= L"http://services.wine.com/api";
static const wchar_t DEFAULT_API_VERSION[]	= L"beta2";
static const wchar_t SERVICE_NAME[]			= L"service.svc";
static const wchar_t FORMAT_XML[]			= L"xml";

_bstr_t CConfig::m_s_sbstrApiKey;
_bstr_t CConfig::m_s_sbstrVersion (DEFAULT_API_VERSION);

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IConfig
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_ApiKey
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::get_ApiKey (BSTR* p_pbstrApiKey)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	*p_pbstrApiKey = m_s_sbstrApiKey.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: put_ApiKey
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::put_ApiKey (BSTR p_bstrApiKey)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	m_s_sbstrApiKey = _bstr_t (p_bstrApiKey, true /* fCopy */);

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Version
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::get_Version (BSTR* p_pbstrVersion)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	*p_pbstrVersion = m_s_sbstrVersion.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: put_Version
//*   Description: 
//*****************************************************************************
STDMETHODIMP CConfig::put_Version (BSTR p_bstrVersion)
{
	AFX_MANAGE_STATE (AfxGetStaticModuleState())

	m_s_sbstrVersion = _bstr_t (p_bstrVersion, true /* fCopy */);

	return S_OK;
}


//*****************************************************************************
//* Function Name: GetBaseUrl
//*   Description: 
//*****************************************************************************
_bstr_t CConfig::GetBaseUrl (const _bstr_t& p_sbstrResource)
{
	wchar_t l_wszBaseUrl[512] = {0};

	(void) swprintf (
		l_wszBaseUrl,
		L"%s/%s/%s/%s/%s?apikey=%s",
        SERVICE_URL,
        static_cast<LPCWSTR>(GetVersion ()),
        SERVICE_NAME,
        FORMAT_XML,
        static_cast<LPCWSTR>(p_sbstrResource),
        static_cast<LPCWSTR>(GetApiKey ()));

	return l_wszBaseUrl;
}
