#ifndef _Utils_h_
#define _Utils_h_

extern void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	const _bstr_t&	p_sbstrValue);

extern void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	long			p_lValue);

extern HRESULT UtilsPropertyGetHelper (
	BSTR*			p_pbstrProperty,
	const _bstr_t&	p_sbstrProperty);

extern HRESULT UtilsPropertyPutHelper (
	BSTR			p_bstrProperty,
	_bstr_t&		p_sbstrProperty);

#endif
