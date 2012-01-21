#include "stdafx.h"
#include "resource.h"
#include "ConfigTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CConfigTests);

void CConfigTests::setUp ()
{
	ResetConfig ();
}


void CConfigTests::tearDown ()
{
}


void CConfigTests::ApiKey_WhenSetToAValidValue_UrlContainsCorrectValue ()
{
	try {
		WineApi::IConfigPtr l_spConfig;
		HRESULT l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = L"BogusApiKey";

		_bstr_t l_sbstrUrl = GetBaseUrl (L"BogusResource");
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"?apikey=BogusApiKey") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CConfigTests::Version_WhenSetToAValidValue_UrlContainsCorrectValue ()
{
	try {
		WineApi::IConfigPtr l_spConfig;
		HRESULT l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->Version = L"BogusVersion";

		_bstr_t l_sbstrUrl = GetBaseUrl (L"BogusResource");
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"/api/BogusVersion/") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CConfigTests::AffiliateId_WhenSetToAValidValue_UrlContainsCorrectValue ()
{
	try {
		WineApi::IConfigPtr l_spConfig;
		HRESULT l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->AffiliateId = L"BogusAffiliateId";

		_bstr_t l_sbstrUrl = GetBaseUrl (L"BogusResource");
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&affiliateId=BogusAffiliateId") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
