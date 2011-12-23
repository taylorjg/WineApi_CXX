#include "stdafx.h"
#include "Utils.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//*****************************************************************************
//* Function Name: UtilsAppendNameValueToQueryString
//*   Description: 
//*****************************************************************************
void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	const _bstr_t&	p_sbstrValue)
{
	p_sbstrUrl += L"&";
	p_sbstrUrl += p_sbstrName;
	p_sbstrUrl += L"=";
	p_sbstrUrl += p_sbstrValue;
}


//*****************************************************************************
//* Function Name: UtilsAppendNameValueToQueryString
//*   Description: 
//*****************************************************************************
void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	long			p_lValue)
{
	wchar_t l_wszValue[20] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszValue, 20, L"%ld", p_lValue);
#else
	(void) _snwprintf (l_wszValue, 20, L"%ld", p_lValue);
#endif

	::UtilsAppendNameValueToQueryString (p_sbstrUrl, p_sbstrName, l_wszValue);
}


//*****************************************************************************
//* Function Name: UtilsPropertyGetHelper
//*   Description: 
//*****************************************************************************
HRESULT UtilsPropertyGetHelper (
	BSTR*			p_pbstrProperty,
	const _bstr_t&	p_sbstrProperty)
{
	HRESULT l_hr = S_OK;

	if (p_pbstrProperty == NULL) {
		return E_POINTER;
	}

	try {
		*p_pbstrProperty = p_sbstrProperty.copy ();
	}
	catch (const _com_error& _ce) {
		l_hr = _ce.Error ();
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: UtilsPropertyPutHelper
//*   Description: 
//*****************************************************************************
HRESULT UtilsPropertyPutHelper (
	BSTR		p_bstrProperty,
	_bstr_t&	p_sbstrProperty)
{
	HRESULT l_hr = S_OK;

	if (p_bstrProperty == NULL) {
		return E_POINTER;
	}

	try {
		p_sbstrProperty = _bstr_t (p_bstrProperty, true /* fCopy */);
	}
	catch (const _com_error& _ce) {
		l_hr = _ce.Error ();
	}

	return l_hr;
}
