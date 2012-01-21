#include "stdafx.h"
#include "apikey.h"
#include "CommonServiceTests.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCommonServiceTests);

void CCommonServiceTests::setUp ()
{
}


void CCommonServiceTests::tearDown ()
{
}


void CCommonServiceTests::Execute_WithNoApiKey_ReturnsError ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = L"";
		l_spConfig->Version = VERSION;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == WineApi::ReturnCodeUnableToAuthorize);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 1);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_WithBadApiKey_ReturnsError ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = L"BogusApiKey";
		l_spConfig->Version = VERSION;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == WineApi::ReturnCodeNoAccess);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 1);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_WithBadVersion_ReturnsError ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = L"BogusVersion";

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_UNEXPECTED);
			CPPUNIT_ASSERT (l_ce.Description ().length () > 0);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCommonServiceTests::Execute_WithBadQueryString_ReturnsError ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = VERSION;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->Search1 (L"merlot")
			->State (L"Bogus")
			->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == WineApi::ReturnCodeCriticalError);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 1);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
