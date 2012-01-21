#include "stdafx.h"
#include "Utils.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//*****************************************************************************
//* Function Name: UtilsInterfaceSupportsErrorInfo
//*   Description: Helper function that provides a common implementation of
//*                the ISupportErrorInfo::InterfaceSupportsErrorInfo method.
//*****************************************************************************
HRESULT UtilsInterfaceSupportsErrorInfo (REFIID p_riid1, REFIID p_riid2)
{
	return (p_riid1 == p_riid2) ? S_OK : S_FALSE;
}


//*****************************************************************************
//* Function Name: UtilsAppendNameValueToQueryString
//*   Description: Helper function to append a name/value pair to a Url's
//*                query string. This overload takes a value of type string.
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
//*   Description: Helper function to append a name/value pair to a Url's
//*                query string. This overload takes a value of type long.
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
//*   Description: Helper function to provide a common implementation of a
//*                property getter method. This overload deals with properties
//*                of type string.
//*****************************************************************************
HRESULT UtilsPropertyGetHelper (
	BSTR*			p_pbstrProperty,
	const _bstr_t&	p_sbstrProperty)
{
	HRESULT l_hr = S_OK;

	if (p_pbstrProperty == NULL) {
		return E_POINTER;
	}

	*p_pbstrProperty = NULL;

	try {
		*p_pbstrProperty = p_sbstrProperty.copy ();
	}
	catch (const _com_error& l_ce) {
		l_hr = l_ce.Error ();
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: UtilsPropertyPutHelper
//*   Description: Helper function to provide a common implementation of a
//*                property setter method. This overload deals with properties
//*                of type string.
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
	catch (const _com_error& l_ce) {
		l_hr = l_ce.Error ();
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: UtilsPropertyGetHelper
//*   Description: Helper function to provide a common implementation of a
//*                property getter method. This overload deals with properties
//*                of type long.
//*****************************************************************************
HRESULT UtilsPropertyGetHelper (
	long*	p_plProperty,
	long	p_lProperty)
{
	if (p_plProperty == NULL) {
		return E_POINTER;
	}

	*p_plProperty = p_lProperty;

	return S_OK;
}


//*****************************************************************************
//* Function Name: UtilsPropertyGetHelper
//*   Description: Helper function to provide a common implementation of a
//*                property getter method. This overload deals with properties
//*                of type double.
//*****************************************************************************
HRESULT UtilsPropertyGetHelper (
	double*			p_pdblProperty,
	double			p_dblProperty)
{
	if (p_pdblProperty == NULL) {
		return E_POINTER;
	}

	*p_pdblProperty = p_dblProperty;

	return S_OK;
}


//*****************************************************************************
//* Function Name: UtilsPropertyGetHelper
//*   Description: Helper function to provide a common implementation of a
//*                property getter method. This overload deals with properties
//*                of type VARIANT_BOOL.
//*****************************************************************************
HRESULT UtilsPropertyGetHelper (
	VARIANT_BOOL*	p_pvbProperty,
	bool			p_bProperty)
{
	if (p_pvbProperty == NULL) {
		return E_POINTER;
	}

	*p_pvbProperty = (p_bProperty == false) ? VARIANT_FALSE : VARIANT_TRUE;

	return S_OK;
}
