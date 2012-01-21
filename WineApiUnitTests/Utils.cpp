#include "stdafx.h"
#include "Utils.h"

#include <cppunit/extensions/HelperMacros.h>

#import <msxml3.dll>

//*****************************************************************************
//* Function Name: HandleComErrorException
//*   Description: Most of the unit tests use a try/catch block where we catch
//*                _com_error exceptions. This helper function contains common
//*                code for handling these exceptions. We essentially just call
//*                CPPUNIT_FAIL. However, we also include details of the
//*                _com_error exception - specifically, the HRESULT plus either
//*                the rich error information via Description() or the
//*                looked-up error message for the HRESULT via ErrorMessage().
//*****************************************************************************
void HandleComErrorException (const _com_error& p_ce)
{
	try {
		CString l_strMessage;

		_bstr_t l_sbstrDescription = p_ce.Description ();
		if (l_sbstrDescription.length () > 0) {
			l_strMessage.Format (
				_T("Caught _com_error exception with HRESULT 0x%08X; Description: %s"),
				p_ce.Error (),
				static_cast<LPCTSTR>(l_sbstrDescription));
		}
		else {
			LPCTSTR l_lpszErrorMessage = p_ce.ErrorMessage ();
			if (l_lpszErrorMessage != NULL) {
				l_strMessage.Format (
					_T("Caught _com_error exception with HRESULT 0x%08X; ErrorMessage: %s"),
					p_ce.Error (),
					l_lpszErrorMessage);
			}
			else {
				l_strMessage.Format (
					_T("Caught _com_error exception with HRESULT 0x%08X"),
					p_ce.Error ());
			}
		}

		CPPUNIT_FAIL (static_cast<LPCTSTR>(l_strMessage));
	}
	catch (const _com_error& l_ce) {
		CString l_strMessage;
		l_strMessage.Format (
			_T("HandleComErrorException - caught _com_error exception (0x%08X) - original HRESULT was 0x%08X"),
			l_ce.Error (),
			p_ce.Error ());
		CPPUNIT_FAIL (static_cast<LPCTSTR>(l_strMessage));
	}
}


//*****************************************************************************
//* Function Name: WrapInSafeArray
//*   Description: Wrap a buffer in a SAFEARRAY. This function sets up a
//*                SAFEARRAY data structure (p_sa) to describe a buffer
//*                (without copying the data). It then sets up a smart variant
//*                (p_svar) to contain the SAFEARRAY. The SAFEARRAY is set up
//*                with flags such that the data is not deallocated when the
//*                smart variant is destructed/cleared.
//*****************************************************************************
static void WrapInSafeArray (
	SAFEARRAY&	p_sa,
	_variant_t&	p_svar,
	LPCVOID		p_lpv,
	int			p_cb)
{
	ZeroMemory (&p_sa, sizeof (p_sa));

	p_sa.cDims					= 1;
	p_sa.fFeatures				= FADF_AUTO | FADF_FIXEDSIZE;
	p_sa.cbElements				= 1;
	p_sa.pvData					= const_cast<LPVOID>(p_lpv);
	p_sa.rgsabound[0].cElements	= p_cb;
	p_sa.rgsabound[0].lLbound	= 0;

	try {
		p_svar.Clear ();
	}
	catch (const _com_error&) {
	}

	V_VT (&p_svar)		= VT_ARRAY | VT_UI1;
	V_ARRAY (&p_svar)	= &p_sa;
}


//*****************************************************************************
//* Function Name: LoadCustomXMLResource
//*   Description: Load a custom resource of type "XMLRESOURCE" and return it
//*                as a Unicode string.
//*****************************************************************************
_bstr_t LoadCustomXMLResource (UINT p_uResourceId)
{
	HMODULE l_hModule = NULL;

	HRSRC l_hResInfo = ::FindResource (
		l_hModule,							// hModule
		MAKEINTRESOURCE (p_uResourceId),	// lpName
		_T("XMLRESOURCE"));					// lpType

	if (l_hResInfo == NULL) {
		_com_issue_error (HRESULT_FROM_WIN32 (GetLastError ()));
	}

	DWORD l_cbResource = ::SizeofResource (
		l_hModule,		// hModule
		l_hResInfo);	// hResInfo

	if (l_cbResource == 0) {
		_com_issue_error (HRESULT_FROM_WIN32 (GetLastError ()));
	}

	HGLOBAL l_hGlobal = ::LoadResource (
		l_hModule,		// hModule
		l_hResInfo);	// hResInfo

	if (l_hGlobal == NULL) {
		_com_issue_error (HRESULT_FROM_WIN32 (GetLastError ()));
	}

	LPCVOID l_lpvResource = ::LockResource (l_hGlobal);
	_ASSERTE (l_lpvResource != NULL);

	// Use the IXMLDOMDocument::load() method passing a SAFEARRAY of VT_UI1.
	// This will honour the encoding declaration in the XML document.

	SAFEARRAY l_sa = {0};
	_variant_t l_svarXML;
	WrapInSafeArray (l_sa, l_svarXML, l_lpvResource, l_cbResource);

	// __uuidof(DOMDocument30) is the CLSID that
	// corresponds to ProgID "MSXML2.DOMDocument.3.0"
	MSXML2::IXMLDOMDocumentPtr l_spXMLDOMDocument;
	HRESULT l_hr = l_spXMLDOMDocument.CreateInstance (__uuidof (MSXML2::DOMDocument30));
	if (FAILED (l_hr)) _com_issue_error (l_hr);
	
	l_spXMLDOMDocument->async = VARIANT_FALSE;

	if (l_spXMLDOMDocument->load (l_svarXML) == VARIANT_FALSE) {
		_com_issue_error (E_UNEXPECTED);
	}

	return l_spXMLDOMDocument->xml;
}


//*****************************************************************************
//* Function Name: SetExternalUrlInvoker
//*   Description: Locate and invoke the "SetExternalUrlInvoker" entry point
//*                in WineApi.dll. This allows us to pass in a stub
//*                implementation of IUrlInvoker which means we can capture
//*                the arguments passed to IUrlInvoker::InvokeUrl. We can also
//*                return canned response XML strings.
//*****************************************************************************
void SetExternalUrlInvoker (IUrlInvoker* p_pExternalUrlInvoker)
{
	typedef void (*SETEXTERNALURLINVOKER_PROC) (IUrlInvoker* p_pExternalUrlInvoker);

	HMODULE l_hWineApiModule = ::GetModuleHandle (_T("WineApi"));

	if (l_hWineApiModule != NULL) {

		SETEXTERNALURLINVOKER_PROC l_pfnSetExternalUrlInvoker = (SETEXTERNALURLINVOKER_PROC)
			::GetProcAddress (l_hWineApiModule, _T("SetExternalUrlInvoker"));

		if (l_pfnSetExternalUrlInvoker != NULL) {
			(*l_pfnSetExternalUrlInvoker) (p_pExternalUrlInvoker);
		}
	}
}


//*****************************************************************************
//* Function Name: GetInternalUrlInvoker
//*   Description: Locate and invoke the "GetInternalUrlInvoker" entry point
//*                in WineApi.dll. This allows us to delegate to the real
//*                implementation of IUrlInvoker from within our stub
//*                implementations.
//*****************************************************************************
IUrlInvoker* GetInternalUrlInvoker (void)
{
	IUrlInvoker* l_pResult = NULL;

	typedef IUrlInvoker* (*GETINTERNALURLINVOKER_PROC) (void);

	HMODULE l_hWineApiModule = ::GetModuleHandle (_T("WineApi"));

	if (l_hWineApiModule != NULL) {

		GETINTERNALURLINVOKER_PROC l_pfnGetInternalUrlInvoker = (GETINTERNALURLINVOKER_PROC)
			::GetProcAddress (l_hWineApiModule, _T("GetInternalUrlInvoker"));

		if (l_pfnGetInternalUrlInvoker != NULL) {
			l_pResult = (*l_pfnGetInternalUrlInvoker) ();
		}
	}

	return l_pResult;
}


//*****************************************************************************
//* Function Name: GetBaseUrl
//*   Description: Locate and invoke the "GetBaseUrl" entry point in WineApi.dll.
//*****************************************************************************
_bstr_t GetBaseUrl (const _bstr_t& l_sbstrResource)
{
	_bstr_t l_sbstrUrl;

	typedef BSTR (*GETBASEURL_PROC) (BSTR p_bstrResource);

	HMODULE l_hWineApiModule = ::GetModuleHandle (_T("WineApi"));

	if (l_hWineApiModule != NULL) {

		GETBASEURL_PROC l_pfnGetBaseUrl = (GETBASEURL_PROC)
			::GetProcAddress (l_hWineApiModule, _T("GetBaseUrl"));

		if (l_pfnGetBaseUrl != NULL) {
			try {
				BSTR l_bstrUrl = (*l_pfnGetBaseUrl) (l_sbstrResource);
				_bstr_t l_sbstrTemp (l_bstrUrl, false /* fCopy */);
				l_sbstrUrl = l_sbstrTemp;
			}
			catch (const _com_error&) {
			}
		}
	}

	return l_sbstrUrl;
}


//*****************************************************************************
//* Function Name: ResetConfig
//*   Description: Locate and invoke the "ResetConfig" entry point in WineApi.dll.
//*****************************************************************************
void ResetConfig (void)
{
	typedef void (*RESETCONFIG_PROC) (void);

	HMODULE l_hWineApiModule = ::GetModuleHandle (_T("WineApi"));

	if (l_hWineApiModule != NULL) {

		RESETCONFIG_PROC l_pfnResetConfig = (RESETCONFIG_PROC)
			::GetProcAddress (l_hWineApiModule, _T("ResetConfig"));

		if (l_pfnResetConfig != NULL) {
			(*l_pfnResetConfig) ();
		}
	}
}
