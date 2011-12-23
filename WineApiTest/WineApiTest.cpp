#include "stdafx.h"
#include "CatalogServiceTests.h"
#include "CategoryMapServiceTests.h"
#include "ReferenceServiceTests.h"

//*****************************************************************************
//* Function Name: CatalogServiceTests
//*   Description: 
//*****************************************************************************
static void CatalogServiceTests (void)
{
//	CatalogService_Execute_WithCategoryFilter1 ();
//	CatalogService_Execute_WithCategoryFilter2 ();
//	CatalogService_Execute_WithCategoryFilter3 ();
//	CatalogService_Execute_WithCategoryFilter4 ();
//	CatalogService_Execute_WithCategoryFilter4SortByPriceAscending ();
//	CatalogService_Execute_WithCategoryFilter4SortByPriceDescending ();
//	CatalogService_Execute_WithRatingFromFilter ();
//	CatalogService_Execute_WithRatingFromToFilter ();
	CatalogService_Execute_WithProductFilter1 ();
//	CatalogService_Execute_WithBadVersion ();
}


//*****************************************************************************
//* Function Name: CategoryMapServiceTests
//*   Description: 
//*****************************************************************************
static void CategoryMapServiceTests (void)
{
	CategoryMapService_Execute_ShowWineTypes ();
	CategoryMapService_Execute_ShowVarietals ();
	CategoryMapService_Execute_ShowRegions ();
	CategoryMapService_Execute_ShowAppellations ();
}


//*****************************************************************************
//* Function Name: ReferenceServiceTests
//*   Description: 
//*****************************************************************************
static void ReferenceServiceTests (void)
{
//	ReferenceService_Execute_WithCategoryFilter1 ();
}


//*****************************************************************************
//* Function Name: main
//*   Description: 
//*****************************************************************************
int main ()
{
	HRESULT l_hr = CoInitializeEx (NULL, COINIT_APARTMENTTHREADED);

	if (FAILED (l_hr)) {
		(void) _ftprintf (stderr, _T("CoInitializeEx() failed - HRESULT is 0x%08X\n"), l_hr);
		return EXIT_FAILURE;
	}

	int l_iResult = EXIT_SUCCESS;

	try {
		CatalogServiceTests ();
		//CategoryMapServiceTests ();
		//ReferenceServiceTests ();
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("_com_error exception caught - HRESULT is 0x%08X\n"), _ce.Error ());
		try {
			// Try to get rich error information first.
			_bstr_t l_sbstrDescription = _ce.Description ();
			if (l_sbstrDescription.length () > 0) {
				(void) _ftprintf (stderr, _T("Description: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrDescription));
			}
			else {
				// Failing that, fall back on a lookup of the error code.
				LPCTSTR l_lpszErrorMessage = _ce.ErrorMessage ();
				if (l_lpszErrorMessage != NULL) {
					(void) _ftprintf (stderr, _T("ErrorMessage: \"%s\"\n"), l_lpszErrorMessage);
				}
			}
		}
		catch (const _com_error&) {
		}

		l_iResult = EXIT_FAILURE;
	}

	CoUninitialize ();

	return l_iResult;
}
