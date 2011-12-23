#include "stdafx.h"
#include "apikey.h"
#include "CatalogServiceTests.h"
#include "PrintObjects.h"

//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter1
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter1 ()
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
			->CategoryFilter1 (490) // Shop/wine only
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter1 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter2
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter2 ()
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
			->CategoryFilter2 (490, 124) // Shop/wine only, Wine Type/Red Wine
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter2 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter3
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter3 ()
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
			->CategoryFilter3 (490, 124, 108) // Shop/wine only, Wine Type/Red Wine, Region/Australia
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter3 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter4
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter4 ()
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
			->CategoryFilter4 (490, 124, 108, 138) // Shop/wine only, Wine Type/Red Wine, Region/Australia, Varietal/Merlot
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter4 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter4SortByPriceAscending
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter4SortByPriceAscending ()
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
			->CategoryFilter4 (490, 124, 108, 138) // Shop/wine only, Wine Type/Red Wine, Region/Australia, Varietal/Merlot
			->State (L"CA")
			->SortBy (WineApi::SortOptionPrice, WineApi::SortDirectionAscending)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter4SortByPriceAscending _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithCategoryFilter4SortByPriceDescending
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithCategoryFilter4SortByPriceDescending ()
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
			->CategoryFilter4 (490, 124, 108, 138) // Shop/wine only, Wine Type/Red Wine, Region/Australia, Varietal/Merlot
			->State (L"CA")
			->SortBy (WineApi::SortOptionPrice, WineApi::SortDirectionDescending)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithCategoryFilter4SortByPriceDescending _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithRatingFromFilter
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithRatingFromFilter ()
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
			->CategoryFilter4 (490, 124, 108, 138) // Shop/wine only, Wine Type/Red Wine, Region/Australia, Varietal/Merlot
			->RatingFromFilter (95)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithRatingFromFilter _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithRatingFromToFilter
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithRatingFromToFilter ()
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
			->CategoryFilter4 (490, 124, 108, 138) // Shop/wine only, Wine Type/Red Wine, Region/Australia, Varietal/Merlot
			->RatingFromToFilter (96, 97)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithRatingFromToFilter _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithProductFilter1
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithProductFilter1 ()
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
			->ProductFilter1 (74509)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithProductFilter1 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}


//*****************************************************************************
//* Function Name: CatalogService_Execute_WithBadVersion
//*   Description: 
//*****************************************************************************
void CatalogService_Execute_WithBadVersion ()
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

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->ProductFilter1 (74509)
			->Execute ();

		PrintCatalog (l_spCatalog);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("CatalogService_Execute_WithBadVersion _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}
