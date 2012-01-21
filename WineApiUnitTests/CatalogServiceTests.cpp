#include "stdafx.h"
#include "resource.h"
#include "CatalogServiceTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCatalogServiceTests);

void CCatalogServiceTests::setUp ()
{
	SetExternalUrlInvoker (NULL);
}


void CCatalogServiceTests::tearDown ()
{
	SetExternalUrlInvoker (NULL);
}


void CCatalogServiceTests::CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter1 (111)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter2 (111, 222)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter3 (111, 222, 333)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222+333)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter4 (111, 222, 333, 444)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222+333+444)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter5 (111, 222, 333, 444, 555)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222+333+444+555)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ()
{
	SAFEARRAY* l_psa = NULL;

	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		std::vector<long> l_vIds;
		l_vIds.push_back (111);

		l_hr = VectorToSafeArray (l_vIds, &l_psa);
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter (l_psa)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psa != NULL) {
		(void) SafeArrayDestroy (l_psa);
		l_psa = NULL;
	}
}


void CCatalogServiceTests::CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ()
{
	SAFEARRAY* l_psa = NULL;

	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		std::vector<long> l_vIds;
		l_vIds.push_back (111);
		l_vIds.push_back (222);

		l_hr = VectorToSafeArray (l_vIds, &l_psa);
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter (l_psa)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psa != NULL) {
		(void) SafeArrayDestroy (l_psa);
		l_psa = NULL;
	}
}


void CCatalogServiceTests::CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ()
{
	SAFEARRAY* l_psa = NULL;

	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		std::vector<long> l_vIds;
		l_vIds.push_back (111);
		l_vIds.push_back (222);
		l_vIds.push_back (333);
		l_vIds.push_back (444);
		l_vIds.push_back (555);
		l_vIds.push_back (666);

		l_hr = VectorToSafeArray (l_vIds, &l_psa);
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->CategoryFilter (l_psa)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=categories(111+222+333+444+555+666)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psa != NULL) {
		(void) SafeArrayDestroy (l_psa);
		l_psa = NULL;
	}
}


void CCatalogServiceTests::CategoryFilter_SafeArrayWith0Categories_ReturnsError ()
{
	SAFEARRAY* l_psa = NULL;

	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		std::vector<long> l_vIds;
		// We deliberately have an empty vector here.

		l_hr = VectorToSafeArray (l_vIds, &l_psa);
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		try {
			(void) l_spCatalogService->CategoryFilter (l_psa);
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_INVALIDARG);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psa != NULL) {
		(void) SafeArrayDestroy (l_psa);
		l_psa = NULL;
	}
}


void CCatalogServiceTests::Offset_OffsetValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->Offset (123)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&offset=123") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::Size_SizeValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->Size (456)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&size=456") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::State_StateValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->State (L"CA")
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&state=CA") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::RatingFromFilter_FromValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->RatingFromFilter (96)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=rating(96)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::RatingFromToFilter_FromValueToValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->RatingFromToFilter (96, 98)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=rating(96|98)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::PriceFromFilter_FromValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->PriceFromFilter (10.1234f)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=price(10.1234)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::PriceFromToFilter_FromValueToValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->PriceFromToFilter (10.1234f, 20.5678f)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&filter=price(10.1234|20.5678)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::SortBy_PriceAscending_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->SortBy (WineApi::SortOptionPrice, WineApi::SortDirectionAscending)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&sort=price|ascending") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::SortBy_RatingDescending_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->SortBy (WineApi::SortOptionRating, WineApi::SortDirectionDescending)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&sort=rating|descending") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::SortBy_InvalidSortOption_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::SortOptions l_eSortOption = static_cast<WineApi::SortOptions>(42);
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->SortBy (l_eSortOption, WineApi::SortDirectionAscending);
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_INVALIDARG);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::SortBy_InvalidSortDirection_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		try {
			WineApi::SortDirection l_eSortDirection = static_cast<WineApi::SortDirection>(42);
			WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->SortBy (WineApi::SortOptionPrice, l_eSortDirection);
			CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
		}
		catch (const _com_error& l_ce) {
			CPPUNIT_ASSERT (l_ce.Error () == E_INVALIDARG);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::InStock_AutomationTrue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->InStock (VARIANT_TRUE)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&instock=true") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::InStock_AutomationFalse_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->InStock (VARIANT_FALSE)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&instock=false") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::InStock_CxxTrue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->InStock (true)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&instock=true") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::InStock_CxxFalse_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService
			->InStock (false)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&instock=false") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCatalogServiceTests::AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ()
{
	SAFEARRAY* l_psaCategoryFilter = NULL;
	SAFEARRAY* l_psaProductFilter = NULL;
	SAFEARRAY* l_psaSearch = NULL;

	try {
		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		l_hr = l_spCatalogService->raw_CategoryFilter1 (111, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_CategoryFilter2 (111, 222, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_CategoryFilter3 (111, 222, 333, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_CategoryFilter4 (111, 222, 333, 444, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_CategoryFilter5 (111, 222, 333, 444, 555, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<long> l_vIds;
			l_vIds.push_back (111);
			l_hr = VectorToSafeArray (l_vIds, &l_psaCategoryFilter);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCatalogService->raw_CategoryFilter (l_psaCategoryFilter, NULL);
			CPPUNIT_ASSERT (l_hr == E_POINTER);
		}

		l_hr = l_spCatalogService->raw_ProductFilter1 (111, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_ProductFilter2 (111, 222, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_ProductFilter3 (111, 222, 333, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_ProductFilter4 (111, 222, 333, 444, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_ProductFilter5 (111, 222, 333, 444, 555, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<long> l_vIds;
			l_vIds.push_back (111);
			l_hr = VectorToSafeArray (l_vIds, &l_psaProductFilter);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCatalogService->raw_ProductFilter (l_psaProductFilter, NULL);
			CPPUNIT_ASSERT (l_hr == E_POINTER);
		}

		/*
		 * When calling the raw COM interface methods, care must be taken
		 * regarding BSTR arguments. We can't just pass in L"AAA". We must
		 * pass in _bstr_t (L"AAA"). Otherwise, we are just passing in a
		 * wide character string. For a real BSTR, the 4 bytes before the
		 * string contain the length of the string. If we just pass a
		 * wide character string, a crash can occur whilst trying to access
		 * the missing length e.g. in a call to SysStringByteLen() like
		 * this in _bstr_t::Data_t::Data_t(BSTR bstr, bool fCopy):
		 *
		 *	if (fCopy && bstr != NULL) {
		 *		m_wstr = ::SysAllocStringByteLen(reinterpret_cast<char*>(bstr),
		 *										 ::SysStringByteLen(bstr));
		 *
		 */

		l_hr = l_spCatalogService->raw_Search1 (_bstr_t (L"AAA"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_Search2 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_Search3 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_Search4 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), _bstr_t (L"DDD"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_Search5 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), _bstr_t (L"DDD"), _bstr_t (L"EEE"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<_bstr_t> l_vTerms;
			l_vTerms.push_back (L"AAA");
			l_hr = VectorToSafeArray (l_vTerms, &l_psaSearch);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCatalogService->raw_Search (l_psaSearch, NULL);
			CPPUNIT_ASSERT (l_hr == E_POINTER);
		}

		l_hr = l_spCatalogService->raw_Offset (123, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_Size (456, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_State (_bstr_t (L"CA"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_RatingFromFilter (96, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_RatingFromToFilter (96, 98, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_PriceFromFilter (10.00f, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_PriceFromToFilter (10.00f, 100.00f, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_SortBy (WineApi::SortOptionPrice, WineApi::SortDirectionAscending, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCatalogService->raw_InStock (true, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psaCategoryFilter != NULL) {
		(void) SafeArrayDestroy (l_psaCategoryFilter);
		l_psaCategoryFilter = NULL;
	}

	if (l_psaProductFilter != NULL) {
		(void) SafeArrayDestroy (l_psaProductFilter);
		l_psaProductFilter = NULL;
	}

	if (l_psaSearch != NULL) {
		(void) SafeArrayDestroy (l_psaSearch);
		l_psaSearch = NULL;
	}
}


void CCatalogServiceTests::Execute_ForProduct95457_ReturnsCorrectData ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();

		CPPUNIT_ASSERT (l_spCatalog->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCatalog->Status->Messages->Count == 0);

		CPPUNIT_ASSERT (l_spCatalog->Products->List->Count == 1);

		WineApi::IProductPtr l_spProduct = l_spCatalog->Products->List->Item[0];
		CPPUNIT_ASSERT (l_spProduct->Id == 95457);
		CPPUNIT_ASSERT (l_spProduct->Name == _bstr_t (L"Chris Ringland Barossa Shiraz 2002"));
		CPPUNIT_ASSERT (l_spProduct->Url == _bstr_t (L"http://www.wine.com/V6/Chris-Ringland-Barossa-Shiraz-2002/wine/95457/detail.aspx"));

		WineApi::IAppellationPtr l_spAppellation = l_spProduct->Appellation;
		CPPUNIT_ASSERT (static_cast<bool>(l_spAppellation));
		CPPUNIT_ASSERT (l_spAppellation->Id == 9058);
		CPPUNIT_ASSERT (l_spAppellation->Name == _bstr_t (L"Barossa Valley"));
		CPPUNIT_ASSERT (l_spAppellation->Url == _bstr_t (L"http://www.wine.com/v6/Barossa-Valley/wine/list.aspx?N=7155+108+9058"));

		WineApi::IRegionPtr l_spRegion = l_spAppellation->Region;
		CPPUNIT_ASSERT (static_cast<bool>(l_spRegion));
		CPPUNIT_ASSERT (l_spRegion->Id == 108);
		CPPUNIT_ASSERT (l_spRegion->Name == _bstr_t (L"Australia"));
		CPPUNIT_ASSERT (l_spRegion->Url == _bstr_t (L"http://www.wine.com/v6/Australia/wine/list.aspx?N=7155+108"));

		WineApi::IAreaPtr l_spArea = l_spRegion->Area;
		CPPUNIT_ASSERT (!static_cast<bool>(l_spArea));

		CPPUNIT_ASSERT (l_spProduct->Labels->Count == 2);
		WineApi::ILabelPtr l_spLabel0 = l_spProduct->Labels->Item[0];
		CPPUNIT_ASSERT (l_spLabel0->Id == _bstr_t (L"95457m"));
		CPPUNIT_ASSERT (l_spLabel0->Name == _bstr_t (L"thumbnail"));
		CPPUNIT_ASSERT (l_spLabel0->Url == _bstr_t (L"http://cache.wine.com/labels/95457m.jpg"));
		WineApi::ILabelPtr l_spLabel1 = l_spProduct->Labels->Item[1];
		CPPUNIT_ASSERT (l_spLabel1->Id == _bstr_t (L"95457l"));
		CPPUNIT_ASSERT (l_spLabel1->Name == _bstr_t (L"large"));
		CPPUNIT_ASSERT (l_spLabel1->Url == _bstr_t (L"http://cache.wine.com/labels/95457l.jpg"));

		CPPUNIT_ASSERT (l_spProduct->Type == _bstr_t (L"Wine"));

		WineApi::IVarietalPtr l_spVarietal = l_spProduct->Varietal;
		CPPUNIT_ASSERT (static_cast<bool>(l_spVarietal));
		CPPUNIT_ASSERT (l_spVarietal->Id == 146);
		CPPUNIT_ASSERT (l_spVarietal->Name == _bstr_t (L"Syrah/Shiraz"));
		CPPUNIT_ASSERT (l_spVarietal->Url == _bstr_t (L"http://www.wine.com/v6/SyrahShiraz/wine/list.aspx?N=7155+124+146"));

		WineApi::IWineTypePtr l_spWineType = l_spVarietal->WineType;
		CPPUNIT_ASSERT (static_cast<bool>(l_spWineType));
		CPPUNIT_ASSERT (l_spWineType->Id == 124);
		CPPUNIT_ASSERT (l_spWineType->Name == _bstr_t (L"Red Wines"));
		CPPUNIT_ASSERT (l_spWineType->Url == _bstr_t (L"http://www.wine.com/v6/Red-Wines/wine/list.aspx?N=7155+124"));

		WineApi::IVineyardPtr l_spVineyard = l_spProduct->Vineyard;
		CPPUNIT_ASSERT (static_cast<bool>(l_spVineyard));
		CPPUNIT_ASSERT (l_spVineyard->Id == 5292);
		CPPUNIT_ASSERT (l_spVineyard->Name == _bstr_t (L"Chris Ringland"));
		CPPUNIT_ASSERT (l_spVineyard->Url == _bstr_t (L"http://www.wine.com/v6/Chris-Ringland/learnabout.aspx?winery=7113"));
		CPPUNIT_ASSERT (l_spVineyard->ImageUrl == _bstr_t (L"http://cache.wine.com/aboutwine/basics/images/winerypics/7113.jpg"));
		WineApi::IGeoLocationPtr l_spVineyardGeoLocation = l_spVineyard->GeoLocation;
		CPPUNIT_ASSERT (static_cast<bool>(l_spVineyardGeoLocation));
		CPPUNIT_ASSERT (l_spVineyardGeoLocation->Latitude == -360);
		CPPUNIT_ASSERT (l_spVineyardGeoLocation->Longitude == -360);
		CPPUNIT_ASSERT (l_spVineyardGeoLocation->Url == _bstr_t (L""));

		CPPUNIT_ASSERT (l_spProduct->ProductAttributes->Count == 1);
		WineApi::IProductAttributePtr l_spProductAttribute = l_spProduct->ProductAttributes->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spProductAttribute));
		CPPUNIT_ASSERT (l_spProductAttribute->Id == 36);
		CPPUNIT_ASSERT (l_spProductAttribute->Name == _bstr_t (L"Collectible Wines"));
		CPPUNIT_ASSERT (l_spProductAttribute->Url == _bstr_t (L"http://www.wine.com/v6/Collectible-Wines/wine/list.aspx?N=7155+36"));
		CPPUNIT_ASSERT (l_spProductAttribute->ImageUrl == _bstr_t (L"http://cache.wine.com/images/glo_icon_collectable_big.gif"));

		WineApi::ICommunityPtr l_spCommunity = l_spProduct->Community;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCommunity));
		WineApi::ICommunityReviewsPtr l_spCommunityReviews = l_spCommunity->Reviews;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCommunityReviews));
		CPPUNIT_ASSERT (l_spCommunityReviews->HighestScore == 0);
		CPPUNIT_ASSERT (l_spCommunityReviews->List->Count == 0);
		CPPUNIT_ASSERT (l_spCommunityReviews->Url == _bstr_t (L"http://www.wine.com/V6/Chris-Ringland-Barossa-Shiraz-2002/wine/95457/detail.aspx?pageType=reviews"));
		CPPUNIT_ASSERT (l_spCommunity->Url == _bstr_t (L"http://www.wine.com/V6/Chris-Ringland-Barossa-Shiraz-2002/wine/95457/detail.aspx"));

		CPPUNIT_ASSERT (l_spProduct->Description == _bstr_t (L""));

		WineApi::IGeoLocationPtr l_spProductGeoLocation = l_spProduct->GeoLocation;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProductGeoLocation));
		CPPUNIT_ASSERT (l_spProductGeoLocation->Latitude == -360);
		CPPUNIT_ASSERT (l_spProductGeoLocation->Longitude == -360);
		CPPUNIT_ASSERT (l_spProductGeoLocation->Url == _bstr_t (L""));

		CPPUNIT_ASSERT (l_spProduct->PriceMax == 669.0000f);
		CPPUNIT_ASSERT (l_spProduct->PriceMin == 669.0000f);
		CPPUNIT_ASSERT (l_spProduct->PriceRetail == 669.0000f);

		WineApi::IRatingsPtr l_spRatings = l_spProduct->Ratings;
		CPPUNIT_ASSERT (static_cast<bool>(l_spRatings));
		CPPUNIT_ASSERT (l_spRatings->HighestScore == 100);
		CPPUNIT_ASSERT (l_spRatings->List->Count == 0);

		WineApi::IRetailPtr l_spRetail = l_spProduct->Retail;
		CPPUNIT_ASSERT (static_cast<bool>(l_spRetail));
		CPPUNIT_ASSERT (l_spRetail->InStock == VARIANT_FALSE);
		CPPUNIT_ASSERT (l_spRetail->Price == 669.0000f);
		CPPUNIT_ASSERT (l_spRetail->Sku == _bstr_t (L"HNYCLDSHZ02C_2002"));
		CPPUNIT_ASSERT (l_spRetail->Url == _bstr_t (L""));
		CPPUNIT_ASSERT (l_spRetail->State == _bstr_t (L"CA"));

		WineApi::IVintagesPtr l_spVintages = l_spProduct->Vintages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spVintages));
		CPPUNIT_ASSERT (l_spVintages->List->Count == 0);

		CPPUNIT_ASSERT (l_spCatalog->Products->Total == 1);
		CPPUNIT_ASSERT (l_spCatalog->Products->Offset == 0);
		CPPUNIT_ASSERT (l_spCatalog->Products->Url == _bstr_t (L""));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


#if _MSC_VER >= 1600
void CCatalogServiceTests::ProductFilter1_1ValidProduct_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->ProductFilter1 (111);
		},
		L"&filter=product(111)");
}


void CCatalogServiceTests::ProductFilter2_2ValidProducts_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->ProductFilter2 (111, 222);
		},
		L"&filter=product(111+222)");
}


void CCatalogServiceTests::ProductFilter3_3ValidProducts_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->ProductFilter3 (111, 222, 333);
		},
		L"&filter=product(111+222+333)");
}


void CCatalogServiceTests::ProductFilter4_4ValidProducts_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->ProductFilter4 (111, 222, 333, 444);
		},
		L"&filter=product(111+222+333+444)");
}


void CCatalogServiceTests::ProductFilter5_5ValidProducts_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->ProductFilter5 (111, 222, 333, 444, 555);
		},
		L"&filter=product(111+222+333+444+555)");
}


void CCatalogServiceTests::ProductFilter_SafeArrayWith1ValidProduct_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->ProductFilter (p_psa);
		},
		l_vIds,
		L"&filter=product(111)");
}


void CCatalogServiceTests::ProductFilter_SafeArrayWith2ValidProducts_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->ProductFilter (p_psa);
		},
		l_vIds,
		L"&filter=product(111+222)");
}


void CCatalogServiceTests::ProductFilter_SafeArrayWith6ValidProducts_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);
	l_vIds.push_back (333);
	l_vIds.push_back (444);
	l_vIds.push_back (555);
	l_vIds.push_back (666);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->ProductFilter (p_psa);
		},
		l_vIds,
		L"&filter=product(111+222+333+444+555+666)");
}


void CCatalogServiceTests::ProductFilter_SafeArrayWith0Products_ReturnsError ()
{
	std::vector<long> l_vIds;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			try {
				p_spService->ProductFilter (p_psa);
				CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
			}
			catch (const _com_error& l_ce) {
				CPPUNIT_ASSERT (l_ce.Error () == E_INVALIDARG);
				throw;
			}
		},
		l_vIds,
		NULL /* p_lpwszQueryStringFragment */,
		true /* p_bExceptionExpected */);
}


void CCatalogServiceTests::Search1_1ValidTerm_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->Search1 (L"AAA");
		},
		L"&search=AAA");
}


void CCatalogServiceTests::Search2_2ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->Search2 (L"AAA", L"BBB");
		},
		L"&search=AAA+BBB");
}


void CCatalogServiceTests::Search3_3ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->Search3 (L"AAA", L"BBB", L"CCC");
		},
		L"&search=AAA+BBB+CCC");
}


void CCatalogServiceTests::Search4_4ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->Search4 (L"AAA", L"BBB", L"CCC", L"DDD");
		},
		L"&search=AAA+BBB+CCC+DDD");
}


void CCatalogServiceTests::Search5_5ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService) {
			p_spService->Search5 (L"AAA", L"BBB", L"CCC", L"DDD", L"EEE");
		},
		L"&search=AAA+BBB+CCC+DDD+EEE");
}


void CCatalogServiceTests::Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA");
}


void CCatalogServiceTests::Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");
	l_vTerms.push_back (L"BBB");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA+BBB");
}


void CCatalogServiceTests::Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");
	l_vTerms.push_back (L"BBB");
	l_vTerms.push_back (L"CCC");
	l_vTerms.push_back (L"DDD");
	l_vTerms.push_back (L"EEE");
	l_vTerms.push_back (L"FFF");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA+BBB+CCC+DDD+EEE+FFF");
}


void CCatalogServiceTests::Search_SafeArrayWith0Terms_ReturnsError ()
{
	std::vector<long> l_vTerms;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICatalogServicePtr& p_spService, SAFEARRAY* p_psa) {
			try {
				p_spService->Search (p_psa);
				CPPUNIT_FAIL (_T("Expected a _com_error exception to be thrown!"));
			}
			catch (const _com_error& l_ce) {
				CPPUNIT_ASSERT (l_ce.Error () == E_INVALIDARG);
				throw;
			}
		},
		l_vTerms,
		NULL /* p_lpwszQueryStringFragment */,
		true /* p_bExceptionExpected */);
}
#endif
