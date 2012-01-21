#include "stdafx.h"
#include "resource.h"
#include "InternalUrlInvoker.h"
#include "ComErrorHandling.h"

// for HTTP_STATUS_OK
#include <wininet.h>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//*****************************************************************************
//* Function Name: InvokeUrl
//*   Description: 
//*****************************************************************************
_bstr_t CInternalUrlInvoker::InvokeUrl (
	const _bstr_t& p_sbstrMethod,
	const _bstr_t& p_sbstrUrl)
{
	MSXML2::IServerXMLHTTPRequestPtr l_spXMLHTTPRequest;
	HRESULT l_hr = l_spXMLHTTPRequest.CreateInstance (__uuidof (MSXML2::ServerXMLHTTP));
	if (FAILED (l_hr)) _com_issue_error (l_hr);

	l_spXMLHTTPRequest->open (p_sbstrMethod, p_sbstrUrl, false /* varAsync */);
	l_spXMLHTTPRequest->send ();

	long l_lHttpStatus = l_spXMLHTTPRequest->status;
	_bstr_t l_sbstrHttpStatusText = l_spXMLHTTPRequest->statusText;

	if (l_lHttpStatus != HTTP_STATUS_OK) {
		ThrowComErrorException (
			__FILE__,
			__LINE__,
			E_UNEXPECTED,
			IDS_HTTP_REQUEST_FAILED,
			l_lHttpStatus,
			static_cast<LPCTSTR>(l_sbstrHttpStatusText));
	}

	return l_spXMLHTTPRequest->responseText;
}
