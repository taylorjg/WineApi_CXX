#include "stdafx.h"
#include "apikey.h"
#include "CategoryMapServiceTests.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCategoryMapServiceTests);

void CCategoryMapServiceTests::setUp ()
{
}


void CCategoryMapServiceTests::tearDown ()
{
}


void CCategoryMapServiceTests::Execute_ShowWineTypes_Succeeds ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = VERSION;

		WineApi::ICategoryMapServicePtr l_spCategoryMapService;
		l_hr = l_spCategoryMapService.CreateInstance (__uuidof (WineApi::CategoryMapService));

		WineApi::ICategoryMapPtr l_spCategoryMap = l_spCategoryMapService
			->Show1 (4) // Wine Type
			->Execute ();

		CPPUNIT_ASSERT (l_spCategoryMap->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCategoryMap->Status->Messages->Count == 0);
		CPPUNIT_ASSERT (l_spCategoryMap->Categories->Count == 1);

		WineApi::ICategoryPtr l_spCategory = l_spCategoryMap->Categories->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spCategory));
		CPPUNIT_ASSERT (l_spCategory->Id == 4);
		CPPUNIT_ASSERT (l_spCategory->Name == _bstr_t (L"Wine Type"));

		WineApi::IRefinementPtr l_spRefinement0 = l_spCategory->Refinements->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spRefinement0));
		CPPUNIT_ASSERT (l_spRefinement0->Id == 124);
		CPPUNIT_ASSERT (l_spRefinement0->Name == _bstr_t (L"Red Wine"));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCategoryMapServiceTests::Execute_ShowWineTypesAndVarietals_Succeeds ()
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = VERSION;

		WineApi::ICategoryMapServicePtr l_spCategoryMapService;
		l_hr = l_spCategoryMapService.CreateInstance (__uuidof (WineApi::CategoryMapService));

		WineApi::ICategoryMapPtr l_spCategoryMap = l_spCategoryMapService
			->Show2 (
				4, // Wine Type
				5) // Varietal
			->Execute ();

		CPPUNIT_ASSERT (l_spCategoryMap->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCategoryMap->Status->Messages->Count == 0);
		CPPUNIT_ASSERT (l_spCategoryMap->Categories->Count == 2);

		WineApi::ICategoryPtr l_spWineTypeCategory = l_spCategoryMap->Categories->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spWineTypeCategory));
		CPPUNIT_ASSERT (l_spWineTypeCategory->Id == 4);
		CPPUNIT_ASSERT (l_spWineTypeCategory->Name == _bstr_t (L"Wine Type"));

		WineApi::IRefinementPtr l_spWineTypeRefinement = l_spWineTypeCategory->Refinements->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spWineTypeRefinement));
		CPPUNIT_ASSERT (l_spWineTypeRefinement->Id == 124);
		CPPUNIT_ASSERT (l_spWineTypeRefinement->Name == _bstr_t (L"Red Wine"));

		WineApi::ICategoryPtr l_spVarietalCategory = l_spCategoryMap->Categories->Item[1];
		CPPUNIT_ASSERT (static_cast<bool>(l_spVarietalCategory));
		CPPUNIT_ASSERT (l_spVarietalCategory->Id == 5);
		CPPUNIT_ASSERT (l_spVarietalCategory->Name == _bstr_t (L"Varietal"));

		WineApi::IRefinementPtr l_spVarietalRefinement = l_spVarietalCategory->Refinements->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spVarietalRefinement));
		CPPUNIT_ASSERT (l_spVarietalRefinement->Id == 139);
		CPPUNIT_ASSERT (l_spVarietalRefinement->Name == _bstr_t (L"Cabernet Sauvignon"));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
