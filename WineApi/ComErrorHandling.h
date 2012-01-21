#ifndef _ComErrorHandling_h_
#define _ComErrorHandling_h_

extern HRESULT HandleComErrorException (
	LPCTSTR				p_lpszFile,
	UINT				p_uLine,
	const _com_error&	p_ce);

extern void ThrowComErrorException (
	LPCTSTR				p_lpszFile,
	UINT				p_uLine,
	HRESULT				p_hr,
	const _bstr_t&		p_sbstrDescription);

extern void ThrowComErrorException (
	LPCTSTR				p_lpszFile,
	UINT				p_uLine,
	HRESULT				p_hr,
	UINT				p_uResourceId,
	...);

#endif
