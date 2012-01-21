#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <tchar.h>

#import "WineApi.dll"

//*****************************************************************************
//* Function Name: main
//*   Description: Entry point.
//*****************************************************************************
int main ()
{
	int l_iResult = EXIT_FAILURE;

	// Initialise COM run-time on this thread.
	if (SUCCEEDED (CoInitialize (NULL))) {

		// Assume success.
		l_iResult = EXIT_SUCCESS;

		try {
			HRESULT l_hr;

			WineApi::IConfigPtr l_spConfig;
			l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			l_spConfig->ApiKey = L"<your api key here>";

			WineApi::ICatalogServicePtr l_spCatalogService;
			l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
				->State (L"CA")
				->InStock (true)
				->Search1 (L"merlot")
				->RatingFromToFilter (90, 96)
				->SortBy (WineApi::SortOptionRating, WineApi::SortDirectionDescending)
				->Execute ();

			if (l_spCatalog->Status->ReturnCode == WineApi::ReturnCodeSuccess) {

				_tprintf (_T("Number of products found: %ld\n"), l_spCatalog->Products->Total);

				long l_lNumProducts = l_spCatalog->Products->List->Count;
				for (long l_lIndex = 0; l_lIndex < l_lNumProducts; l_lIndex++) {

					WineApi::IProductPtr l_spProduct = l_spCatalog->Products->List->Item[l_lIndex];

					long l_lHighestScore = l_spProduct->Ratings->HighestScore;
					_bstr_t l_sbstrName = l_spProduct->Name;

					_tprintf (
						_T("Rating: %ld; Name: \"%s\".\n"),
						l_lHighestScore,
						static_cast<LPCTSTR>(l_sbstrName));
				}
			}
			else {
				_bstr_t l_sbstrFirstMessage = l_spCatalog->Status->Messages->Item[0];
				_tprintf (_T("%s\n"), static_cast<LPCTSTR>(l_sbstrFirstMessage));
			}
		}
		catch (const _com_error& _ce) {
			_ftprintf (stderr, _T("HRESULT = 0x%08X\n"), _ce.Error ());
			l_iResult = EXIT_FAILURE;
		}

		CoUninitialize ();
	}

	return l_iResult;
}
