# WineApi COM Library

WineApi is a COM library written in Visual C++ / ATL. It implements the entire wine.com API object model.
The following 4 COM objects can be created:

- WineApi.Config
- WineApi.CatalogService
- WineApi.CategoryMapService
- WineApi.ReferenceService

WineApi.Config is a singleton object that should be instantiated and configured before
making calls to any of the services. It has the following properties:

- ApiKey
- Version (defaults to "beta2")

Each of the service objects has an Execute() method that returns an appropriate object.
For example, CatalogService.Execute() returns a Catalog object which in turn contains
Status and Products objects.

## References

- http://api.wine.com
- http://api.wine.com/wiki

## Simple Visual C++ Client Example

```C++
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#import "WineApi.dll"

int main ()
{
    if (SUCCEEDED (CoInitialize (NULL))) {
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
                ->InStock (VARIANT_TRUE)
                ->Search1 (L"Merlot")
                ->RatingFromToFilter (90, 96)
                ->SortBy (WineApi::SortOptionRating, WineApi::SortDirectionDescending)
                ->Execute ();

            if (l_spCatalog->Status->ReturnCode == WineApi::ReturnCodeSuccess) {
                _tprintf (_T("Number of products found: %ld\n"), l_spCatalog->Products->Total);
            }
            else {
                _bstr_t l_sbstrFirstMessage = l_spCatalog->Status->Messages->Item[0];
                _tprintf (_T("%s\n"), static_cast<LPCTSTR>(l_sbstrFirstMessage));
            }
        }
        catch (const _com_error& _ce) {
            _ftprintf (stderr, _T("HRESULT = 0x%08X\n"), _ce.Error ());
        }

        CoUninitialize ();
    }

    return 0;
}
```

## Simple VBScript Client Example

```VBScript
```
