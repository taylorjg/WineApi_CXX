#include "stdafx.h"
#include "apikey.h"
#include "ReferenceServiceTests.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CReferenceServiceTests);

void CReferenceServiceTests::setUp ()
{
}


void CReferenceServiceTests::tearDown ()
{
}


void CReferenceServiceTests::Execute_WithCategoryFilter1_Succeeds ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = VERSION;

		WineApi::IReferenceServicePtr l_spReferenceService;
		l_hr = l_spReferenceService.CreateInstance (__uuidof (WineApi::ReferenceService));

		WineApi::IReferencePtr l_spReference = l_spReferenceService
			->CategoryFilter1 (2288) // Appellation/Sierra Foothills
			->Execute ();

		CPPUNIT_ASSERT (l_spReference->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spReference->Status->Messages->Count == 0);
		CPPUNIT_ASSERT (l_spReference->Books->Count == 1);

		WineApi::IBookPtr l_spBook = l_spReference->Books->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spBook));
		CPPUNIT_ASSERT (l_spBook->Id == _bstr_t (L"6"));
		CPPUNIT_ASSERT (l_spBook->Title == _bstr_t (L"Appellation"));
		CPPUNIT_ASSERT (l_spBook->Articles->Count == 1);

		WineApi::IArticlePtr l_spArticle = l_spBook->Articles->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spArticle));
		CPPUNIT_ASSERT (l_spArticle->Id == _bstr_t (L"2288"));
		CPPUNIT_ASSERT (l_spArticle->Title == _bstr_t (L"Sierra Foothills"));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
