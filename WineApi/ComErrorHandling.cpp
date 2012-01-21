#include "stdafx.h"
#include "ComErrorHandling.h"
#include "ActiveMethodGUIDs.h"

//*****************************************************************************
//* Function Name: LookupErrorCode
//*   Description: Call ::FormatMessage() to lookup an error code in each DLL
//*                in the given array of DLL names. ::FormatMessage() looks up
//*                the error code in the MESSAGETABLE resource that is bound
//*                into each DLL.
//*****************************************************************************
static bool LookupErrorCode (
	DWORD	p_dwErrorCode,
	LPCTSTR	p_rglpszDLLs[],
	UINT	p_uNumDLLs,
	LPTSTR	p_lpszBuffer,
	UINT	p_cchBuffer)
{
	_ASSERTE (p_lpszBuffer != NULL);
	_ASSERTE (p_cchBuffer > 0);

	bool l_bResult = false;

	p_lpszBuffer[0] = _T('\0');

	for (UINT l_uIndex = 0; l_uIndex < p_uNumDLLs; ++l_uIndex) {

		bool l_bNeedToUnloadModule = false;

		LPCTSTR l_lpszDLL = p_rglpszDLLs[l_uIndex];
		HMODULE l_hModule = ::GetModuleHandle (l_lpszDLL);

		if (l_hModule == NULL) {
			l_hModule = ::LoadLibraryEx (l_lpszDLL, NULL, LOAD_LIBRARY_AS_DATAFILE);
			if (l_hModule == NULL) {
				continue;
			}
			l_bNeedToUnloadModule = true;
		}

		DWORD l_dwFlags = FORMAT_MESSAGE_FROM_HMODULE |
						  FORMAT_MESSAGE_IGNORE_INSERTS;

		DWORD l_dwLanguageId = MAKELANGID (LANG_NEUTRAL, SUBLANG_DEFAULT);

		int l_cch = ::FormatMessage (	l_dwFlags,		// dwFlags
										l_hModule,		// lpSource
										p_dwErrorCode,	// dwMessageId
										l_dwLanguageId,	// dwLanguageId
										p_lpszBuffer,	// lpBuffer
										p_cchBuffer,	// nSize,
										NULL);			// Arguments

		if (l_cch > 0) {

			// Remove any trailing linebreak (\r\n) that may be present.
			if (l_cch >= 2) {
				if (p_lpszBuffer[l_cch - 2] == _T('\r') &&
					p_lpszBuffer[l_cch - 1] == _T('\n'))
				{
					p_lpszBuffer[l_cch - 2] = _T('\0');
				}
			}

			l_bResult = true;
		}

		if (l_bNeedToUnloadModule) {
			::FreeLibrary (l_hModule);
			l_hModule = NULL;
		}

		if (l_bResult) {
			break;
		}
	}

	return l_bResult;
}


//*****************************************************************************
//* Function Name: HandleFacilityInternetComErrorException
//*   Description: Special handling for errors with a facility of
//*                FACILITY_INTERNET.
//*****************************************************************************
static bool HandleFacilityInternetComErrorException (const _com_error&	p_ce)

{
	bool l_bHandled = false;

	// In nearly all cases that I have observed so far,
	// when the failure HRESULT has a facility of FACILITY_INTERNET,
	// the Description/ErrorMessage is just a generic string
	// containing the error code rather than a meaningful description.
	// However, the corresponding description is often available in the
	// MESSAGETABLE resource of one of the system DLLs associated with
	// internet functionality. Therefore, try to look up the error code
	// in these system DLLs. If the lookup is successful then set new rich
	// error information. In addition, we set the Source and GUID properties
	// of the rich error information according to the active COM method's
	// CLSID and IID.

	try {
		// We are only interested in FACILITY_INTERNET.
		if (HRESULT_FACILITY (p_ce.Error ()) != FACILITY_INTERNET) {
			return false;
		}

		_bstr_t l_sbstrDescription = p_ce.Description ();

		// We are not interested if we already have non-empty rich error
		// information descriptive text.
		if (l_sbstrDescription.length () > 0) {
			return false;
		}

		LPCTSTR l_lpszErrorMessage = p_ce.ErrorMessage();

		// We are not interested unless the system error message begins
		// with "Unknown error".
		if (l_lpszErrorMessage != NULL) {
			static const TCHAR UNKNOWN_ERROR[] = _T("Unknown error");
			if (_tcsnicmp (l_lpszErrorMessage, UNKNOWN_ERROR, _tcslen (UNKNOWN_ERROR)) != 0) {
				return false;
			}
		}

		// If we get to here, then there is no description and no error message.
		// Let's try to lookup the error code in the MESSAGETABLE resources of
		// a few system DLLs in order to try to find a decent error message.

		static LPCTSTR s_rglpszDLLs[] = {
			_T("urlmon.dll"),
			_T("wininet.dll"),
			_T("winhttp.dll"),
			_T("msxml3r.dll")
		};
		static UINT s_uNumDLLs = sizeof (s_rglpszDLLs) / sizeof (*s_rglpszDLLs);

		bool l_bFound = false;
		TCHAR l_szDescription[256] = {0};

		l_bFound =  LookupErrorCode (	p_ce.Error (),
										s_rglpszDLLs,
										s_uNumDLLs,
										l_szDescription,
										256);

		if (!l_bFound) {

			l_bFound =  LookupErrorCode (	HRESULT_CODE (p_ce.Error ()),
											s_rglpszDLLs,
											s_uNumDLLs,
											l_szDescription,
											256);
		}

		if (l_bFound) {

			CLSID	l_clsid = GUID_NULL;
			IID		l_iid   = GUID_NULL;

			CActiveMethodGUIDs::Get (l_clsid, l_iid);

			USES_CONVERSION;
			HRESULT l_hr;

			// Create and populate a standard error object.
			ICreateErrorInfoPtr l_spCreateErrorInfo;
			l_hr = ::CreateErrorInfo (&l_spCreateErrorInfo);
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			// Set the Description property.
			l_hr = l_spCreateErrorInfo->SetDescription (T2OLE (l_szDescription));
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			// Get the ProgID corresponding to rclsid.
			LPOLESTR l_lpoleszProgID = NULL;
			l_hr = ::ProgIDFromCLSID (l_clsid, &l_lpoleszProgID);
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			// Set the Source property.
			l_hr = l_spCreateErrorInfo->SetSource (l_lpoleszProgID);
			::CoTaskMemFree (l_lpoleszProgID);
			l_lpoleszProgID = NULL;
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			// Set the GUID property.
			l_hr = l_spCreateErrorInfo->SetGUID (l_iid);
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			IErrorInfoPtr l_spErrorInfo (l_spCreateErrorInfo);

			// SetErrorInfo() causes the COM run-time to call AddRef()
			// on the error object. This will be the only outstanding
			// reference by the end of this function.
			(void) ::SetErrorInfo (0 /* dwReserved */, l_spErrorInfo);

			l_bHandled = true;
		}
	}
	catch (const _com_error&) {
	}

	return l_bHandled;
}


//*****************************************************************************
//* Function Name: HandleComErrorException
//*   Description: Handle a _com_error exception. This routine is called from
//*                catch blocks for _com_error exceptions.
//*****************************************************************************
HRESULT HandleComErrorException (
	LPCTSTR				p_lpszFile,
	UINT				p_uLine,
	const _com_error&	p_ce)
{
	(void) HandleFacilityInternetComErrorException (p_ce);

	// Preserve the logical thread's error object. This is cleared when
	// _com_issue_error[ex] calls the Automation ::GetErrorInfo() function.

	// Attach the raw interface pointer returned by _com_error::ErrorInfo()
	// to our smart pointer. _com_error::ErrorInfo() AddRef's the raw
	// interface pointer that it returns. We want to encapsulate this
	// raw interface pointer in a smart pointer without performing an
	// additional AddRef.
	IErrorInfoPtr l_spErrorInfo (p_ce.ErrorInfo (), false /* fAddRef */);

	if (l_spErrorInfo) {
		// There is one reference to the error object in p_ce. There is another
		// reference in l_spErrorInfo. Both of these references will be released
		// by the time we leave the caller's catch block. The COM run-time's
		// reference to the error object will have been cleared when
		// _com_issue_error[ex] was called. By calling SetErrorInfo(),
		// we preserve the logical thread's error object.
		(void) ::SetErrorInfo (0 /* dwReserved */, l_spErrorInfo);
	}

	return p_ce.Error ();
}


//*****************************************************************************
//* Function Name: ThrowComErrorException
//*   Description: 
//*****************************************************************************
void ThrowComErrorException (
	LPCTSTR			p_lpszFile,
	UINT			p_uLine,
	HRESULT			p_hr,
	const _bstr_t&	p_sbstrDescription)
{
	USES_CONVERSION;

	CLSID	l_clsid = GUID_NULL;
	IID		l_iid   = GUID_NULL;

	CActiveMethodGUIDs::Get (l_clsid, l_iid);

	// AtlReportError() creates and populates a standard COM error object
	// and calls SetErrorInfo() to pass the COM error object to the COM
	// run-time.

	(void) AtlReportError (	l_clsid,									// rclsid
							p_sbstrDescription.operator LPCOLESTR (),	// lpszDesc
							l_iid,										// riid
							p_hr);										// hRes

	// At this point, the COM run-time has the only reference to the error object.

	IErrorInfoPtr l_spErrorInfo;

	// From MSDN re GetErrorInfo():
	//
	//	"This function returns a pointer to the most recently set IErrorInfo
	//	 pointer in the current logical thread. It transfers ownership of the
	//	 error object to the caller, and clears the error state for the thread."
	if (SUCCEEDED (::GetErrorInfo (0 /* dwReserved */, &l_spErrorInfo))) {

		// At this point, the COM run-time's reference to the error object has
		// been transferred to l_spErrorInfo. Specify true for the last parameter
		// of the _com_error constructor to make sure that it calls AddRef() on
		// the error object. This last parameter is optional and defaults to
		// false. If true is *not* specified then the _com_error constructor
		// won't call AddRef() so the only reference will be the one in
		// l_spErrorInfo which will be released when l_spErrorInfo goes out of
		// scope i.e. when the _com_error exception is thrown. This will result
		// in the error object being prematurely destroyed. By passing true,
		// the only outstanding reference to the error object will be inside
		// the _com_error exception object which is as it should be.

		throw _com_error (p_hr, l_spErrorInfo, true /* fAddRef */);
	}

	// There was no rich error information so just use the HRESULT.
	throw _com_error (p_hr);
}


//*****************************************************************************
//* Function Name: ThrowComErrorException
//*   Description: 
//*****************************************************************************
void ThrowComErrorException (
	LPCTSTR		p_lpszFile,
	UINT		p_uLine,
	HRESULT		p_hr,
	UINT		p_uResourceId,
	...)
{
	TCHAR l_szFormatString[1024] = {0};
	if (::LoadString (_Module.GetResourceInstance (), p_uResourceId, l_szFormatString, 1024) > 0) {

		va_list l_varargs;
		va_start (l_varargs, p_uResourceId);

		TCHAR l_szDescription[1024]  = {0};

#if _MSC_VER >= 1400
		(void) _vsntprintf_s (l_szDescription, 1024, l_szFormatString, l_varargs);
#else
		(void) _vsntprintf (l_szDescription, 1024, l_szFormatString, l_varargs);
#endif

		va_end (l_varargs);

		ThrowComErrorException (p_lpszFile, p_uLine, p_hr, l_szDescription);
	}
	else {
		DWORD l_dwLastError = ::GetLastError ();
		_com_issue_error (HRESULT_FROM_WIN32 (l_dwLastError));
	}
}
