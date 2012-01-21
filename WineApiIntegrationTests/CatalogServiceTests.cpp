#include "stdafx.h"
#include "apikey.h"
#include "CatalogServiceTests.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCatalogServiceTests);

void CCatalogServiceTests::setUp ()
{
}


void CCatalogServiceTests::tearDown ()
{
}


void CCatalogServiceTests::Execute_WithCategoryFilter3_Succeeds ()
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
			->CategoryFilter3 (
				490, // Shop/wine only
				124, // Wine Type/Red Wine
				108) // Region/Australia
			->Size (10)
			->Offset (20)
			->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 0);
		CPPUNIT_ASSERT (l_spCatalog->Products->List->Count == 10);
		CPPUNIT_ASSERT (l_spCatalog->Products->Offset == 20);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::Execute_WithProductFilter1_Succeeds ()
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
			->State (L"CA")
			->ProductFilter1 (74509) // Craneford Merlot 2002
			->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 0);
		CPPUNIT_ASSERT (l_spCatalog->Products->List->Count == 1);
		CPPUNIT_ASSERT (l_spCatalog->Products->Offset == 0);

		WineApi::IProductPtr l_spProduct = l_spCatalog->Products->List->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spProduct));
		CPPUNIT_ASSERT (l_spProduct->Id == 74509);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
