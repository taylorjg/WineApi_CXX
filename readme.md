# WineApi COM Library

WineApi is a COM library written in Visual C++ / ATL. It wraps the entire wine.com API object model
and can be used to invoke all three of the wine.com RESTful services:

- Catalog
- CategoryMap
- Reference

The following 4 COM objects can be created:

- WineApi.Config
- WineApi.CatalogService
- WineApi.CategoryMapService
- WineApi.ReferenceService

WineApi.Config is a singleton object that should be instantiated and configured before
making calls to any of the services. It has the following properties:

- ApiKey
- Version (defaults to "beta2")
- AffiliateId

Each of the service objects has an Execute() method that returns an appropriate object.
For example, CatalogService.Execute() returns a Catalog object which in turn contains
Status and Products objects.

## Release 1.0.3.0

Pre-built DLLs for version 1.0.3.0 are available in the following zip file:

http://github.com/taylorjg/WineApi_CXX/raw/master/Releases/1.0.3.0.zip

The zip file contains Debug and Release builds from both Visual Studio 6 and Visual Studio 2010.

## Unit Tests and Integration Tests

There are separate projects containing unit tests and integration tests. The unit tests read
canned XML responses from custom resources. Some of the tests are only included in Visual Studio
2010 because they use lambda functions. The integration tests invoke the real wine.com services.
Both the unit tests and the integration tests use CppUnit.

## References

- http://api.wine.com
- http://api.wine.com/wiki
- http://sourceforge.net/projects/cppunit/
- http://cppunit.sourceforge.net/doc/1.8.0/
- [Lambda Expressions in C++](http://msdn.microsoft.com/en-us/library/dd293608.aspx)
- [C++11#Lambda functions and expressions](http://en.wikipedia.org/wiki/C%2B%2B11#Lambda_functions_and_expressions)
- [Anonymous function#C++](http://en.wikipedia.org/wiki/Anonymous_function#C.2B.2B)

## TODO

- Separate out some of the utility stuff (e.g. ComErrorHandling, SafeArrayHelpers, etc.)
- Separate out the metadata stuff (e.g. IEntityMetadata, CEntityDecoder, etc.)
- Maybe create a CWineApiUrl class and refactor the code

Separating out some of the stuff into separate libraries would allow for re-use and
better unit testing.

## Simple Visual C++ Client Example

```C++
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
```

## Simple VBScript Client Example

```VBScript
Const ReturnCodeSuccess = 0
Const SortOptionRating = 1
Const SortDirectionDescending = 1

Set oConfig = CreateObject("WineApi.Config")
oConfig.ApiKey = "<your api key here>"

Set oCatalogService = CreateObject("WineApi.CatalogService")

Set oCatalog = oCatalogService _
    .State ("CA") _
    .InStock (True) _
    .Search ("Merlot") _
    .RatingFromToFilter (90, 96) _
    .SortBy (SortOptionRating, SortDirectionDescending) _
    .Execute ()

If oCatalog.Status.ReturnCode = ReturnCodeSuccess Then
    MsgBox "Number of products found: " & oCatalog.Products.Total, vbOKOnly, "CatalogService Success"
Else
    strFirstMessage = oCatalog.Status.Messages(0)
    MsgBox strFirstMessage, vbOKOnly, "CatalogService Failure"
End If
```
