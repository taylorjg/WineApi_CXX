#include "stdafx.h"
#include "apikey.h"
#include "CategoryMapServiceTests.h"
#include "PrintObjects.h"

//*****************************************************************************
//* Function Name: CategoryMapService_Execute_ShowWineTypes
//*   Description: 
//*****************************************************************************
void CategoryMapService_Execute_ShowWineTypes ()
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
			->Show (4)
			->Execute ();

		PrintCategoryMap (l_spCategoryMap);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CategoryMapService_Execute_ShowWineTypes _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CategoryMapService_Execute_ShowVarietals
//*   Description: 
//*****************************************************************************
void CategoryMapService_Execute_ShowVarietals ()
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
			->Show (5)
			->Execute ();

		PrintCategoryMap (l_spCategoryMap);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CategoryMapService_Execute_ShowVarietals _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CategoryMapService_Execute_ShowRegions
//*   Description: 
//*****************************************************************************
void CategoryMapService_Execute_ShowRegions ()
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
			->Show (1)
			->Execute ();

		PrintCategoryMap (l_spCategoryMap);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CategoryMapService_Execute_ShowRegions _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CategoryMapService_Execute_ShowAppellations
//*   Description: 
//*****************************************************************************
void CategoryMapService_Execute_ShowAppellations ()
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
			->Show (6)
			->Execute ();

		PrintCategoryMap (l_spCategoryMap);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CategoryMapService_Execute_ShowAppellations _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}
