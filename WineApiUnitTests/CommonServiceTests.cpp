#include "stdafx.h"
#include "resource.h"
#include "CommonServiceTests.h"
#include "StubUrlInvoker2.h"
#include "StubUrlInvoker3.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCommonServiceTests);

void CCommonServiceTests::setUp ()
{
	SetExternalUrlInvoker (NULL);
}


void CCommonServiceTests::tearDown ()
{
	SetExternalUrlInvoker (NULL);
}


void CCommonServiceTests::Execute_GivenUrlWithBogusHost_ReturnsError ()
{
	try {
		CStubUrlInvoker2 l_StubUrlInvoker2;
		l_StubUrlInvoker2.SetForcedUrl (L"http://bogus.url.com/does/not/exist.svc?apikey=bogus");
		SetExternalUrlInvoker (&l_StubUrlInvoker2);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_UNEXPECTED);
			_bstr_t l_sbstrDescription = l_ce.Description ();
			CPPUNIT_ASSERT (l_sbstrDescription.length () > 0);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_GivenUrlWithBogusProtocol_ReturnsError ()
{
	try {
		CStubUrlInvoker2 l_StubUrlInvoker2;
		l_StubUrlInvoker2.SetForcedUrl (L"http-bogus://bogus.url.com/does/not/exist.svc?apikey=bogus");
		SetExternalUrlInvoker (&l_StubUrlInvoker2);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (FAILED (l_ce.Error ()));
			_bstr_t l_sbstrDescription = l_ce.Description ();
			CPPUNIT_ASSERT (l_sbstrDescription.length () > 0);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_GivenUrlWithBogusMethod_ReturnsError ()
{
	try {
		CStubUrlInvoker2 l_StubUrlInvoker2;
		l_StubUrlInvoker2.SetForcedMethod (L"BOGUS");
		SetExternalUrlInvoker (&l_StubUrlInvoker2);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_UNEXPECTED);
			_bstr_t l_sbstrDescription = l_ce.Description ();
			CPPUNIT_ASSERT (l_sbstrDescription.length () > 0);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_GivenBadXmlResponse_ReturnsError ()
{
	try {
		CStubUrlInvoker3 l_StubUrlInvoker;
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_UNEXPECTED);
			_bstr_t l_sbstrDescription = l_ce.Description ();
			CPPUNIT_ASSERT (l_sbstrDescription.length () > 0);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
