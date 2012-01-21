#include "stdafx.h"
#include "resource.h"
#include "CategoryMapServiceTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CCategoryMapServiceTests);

void CCategoryMapServiceTests::setUp ()
{
	SetExternalUrlInvoker (NULL);
}


void CCategoryMapServiceTests::tearDown ()
{
	SetExternalUrlInvoker (NULL);
}


void CCategoryMapServiceTests::Show_ShowValue_UrlContainsCorrectQueryString ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATEGORYMAPSERVICE_WINETYPES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICategoryMapServicePtr l_spCategoryMapService;
		l_hr = l_spCategoryMapService.CreateInstance (__uuidof (WineApi::CategoryMapService));

		WineApi::ICategoryMapPtr l_spCategoryMap = l_spCategoryMapService
			->Show1 (4)
			->Execute ();

		const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
		CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), L"&show=(4)") != NULL);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CCategoryMapServiceTests::AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ()
{
	SAFEARRAY* l_psaCategoryFilter = NULL;
	SAFEARRAY* l_psaSearch = NULL;
	SAFEARRAY* l_psaShow = NULL;

	try {
		HRESULT l_hr;

		WineApi::ICategoryMapServicePtr l_spCategoryMapService;
		l_hr = l_spCategoryMapService.CreateInstance (__uuidof (WineApi::CategoryMapService));

		l_hr = l_spCategoryMapService->raw_CategoryFilter1 (111, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_CategoryFilter2 (111, 222, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_CategoryFilter3 (111, 222, 333, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_CategoryFilter4 (111, 222, 333, 444, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_CategoryFilter5 (111, 222, 333, 444, 555, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<long> l_vIds;
			l_vIds.push_back (111);
			l_hr = VectorToSafeArray (l_vIds, &l_psaCategoryFilter);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCategoryMapService->raw_CategoryFilter (l_psaCategoryFilter, NULL);
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

		l_hr = l_spCategoryMapService->raw_Search1 (_bstr_t (L"AAA"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Search2 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Search3 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Search4 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), _bstr_t (L"DDD"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Search5 (_bstr_t (L"AAA"), _bstr_t (L"BBB"), _bstr_t (L"CCC"), _bstr_t (L"DDD"), _bstr_t (L"EEE"), NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<_bstr_t> l_vTerms;
			l_vTerms.push_back (L"AAA");
			l_hr = VectorToSafeArray (l_vTerms, &l_psaSearch);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCategoryMapService->raw_Search (l_psaSearch, NULL);
			CPPUNIT_ASSERT (l_hr == E_POINTER);
		}

		l_hr = l_spCategoryMapService->raw_Show1 (4, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Show2 (4, 5, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Show3 (4, 5, 6, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Show4 (4, 5, 6, 1, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spCategoryMapService->raw_Show5 (4, 5, 6, 1, 600, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<long> l_vCategories;
			l_vCategories.push_back (111);
			l_hr = VectorToSafeArray (l_vCategories, &l_psaShow);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spCategoryMapService->raw_Show (l_psaShow, NULL);
			CPPUNIT_ASSERT (l_hr == E_POINTER);
		}
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}

	if (l_psaCategoryFilter != NULL) {
		(void) SafeArrayDestroy (l_psaCategoryFilter);
		l_psaCategoryFilter = NULL;
	}

	if (l_psaSearch != NULL) {
		(void) SafeArrayDestroy (l_psaSearch);
		l_psaSearch = NULL;
	}

	if (l_psaShow != NULL) {
		(void) SafeArrayDestroy (l_psaShow);
		l_psaShow = NULL;
	}
}


void CCategoryMapServiceTests::Execute_ForWineTypes_ReturnsCorrectData ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATEGORYMAPSERVICE_WINETYPES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICategoryMapServicePtr l_spCategoryMapService;
		l_hr = l_spCategoryMapService.CreateInstance (__uuidof (WineApi::CategoryMapService));

		WineApi::ICategoryMapPtr l_spCategoryMap = l_spCategoryMapService->Execute ();

		CPPUNIT_ASSERT (l_spCategoryMap->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spCategoryMap->Status->Messages->Count == 0);

		CPPUNIT_ASSERT (l_spCategoryMap->Categories->Count == 1);

		WineApi::ICategoryPtr l_spCategory = l_spCategoryMap->Categories->Item[0];
		CPPUNIT_ASSERT (l_spCategory->Id == 4);
		CPPUNIT_ASSERT (l_spCategory->Name == _bstr_t (L"Wine Type"));

		CPPUNIT_ASSERT (l_spCategory->Refinements->Count == 10);

		WineApi::IRefinementPtr l_spRefinement0 = l_spCategory->Refinements->Item[0];
		CPPUNIT_ASSERT (l_spRefinement0->Id == 124);
		CPPUNIT_ASSERT (l_spRefinement0->Name == _bstr_t (L"Red Wine"));
		CPPUNIT_ASSERT (l_spRefinement0->Url == _bstr_t (L""));

		WineApi::IRefinementPtr l_spRefinement6 = l_spCategory->Refinements->Item[6];
		CPPUNIT_ASSERT (l_spRefinement6->Id == 131);
		CPPUNIT_ASSERT (l_spRefinement6->Name == _bstr_t (L"Wine Gift Sets"));
		CPPUNIT_ASSERT (l_spRefinement6->Url == _bstr_t (L""));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


#if _MSC_VER >= 1600
void CCategoryMapServiceTests::CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->CategoryFilter1 (111);
		},
		L"&filter=categories(111)");
}


void CCategoryMapServiceTests::CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->CategoryFilter2 (111, 222);
		},
		L"&filter=categories(111+222)");
}


void CCategoryMapServiceTests::CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->CategoryFilter3 (111, 222, 333);
		},
		L"&filter=categories(111+222+333)");
}


void CCategoryMapServiceTests::CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->CategoryFilter4 (111, 222, 333, 444);
		},
		L"&filter=categories(111+222+333+444)");
}


void CCategoryMapServiceTests::CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->CategoryFilter5 (111, 222, 333, 444, 555);
		},
		L"&filter=categories(111+222+333+444+555)");
}


void CCategoryMapServiceTests::CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111)");
}


void CCategoryMapServiceTests::CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111+222)");
}


void CCategoryMapServiceTests::CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);
	l_vIds.push_back (333);
	l_vIds.push_back (444);
	l_vIds.push_back (555);
	l_vIds.push_back (666);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111+222+333+444+555+666)");
}


void CCategoryMapServiceTests::CategoryFilter_SafeArrayWith0Categories_ReturnsError ()
{
	std::vector<long> l_vIds;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			try {
				p_spService->CategoryFilter (p_psa);
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


void CCategoryMapServiceTests::Search1_1ValidTerm_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Search1 (L"AAA");
		},
		L"&search=AAA");
}


void CCategoryMapServiceTests::Search2_2ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Search2 (L"AAA", L"BBB");
		},
		L"&search=AAA+BBB");
}


void CCategoryMapServiceTests::Search3_3ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Search3 (L"AAA", L"BBB", L"CCC");
		},
		L"&search=AAA+BBB+CCC");
}


void CCategoryMapServiceTests::Search4_4ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Search4 (L"AAA", L"BBB", L"CCC", L"DDD");
		},
		L"&search=AAA+BBB+CCC+DDD");
}


void CCategoryMapServiceTests::Search5_5ValidTerms_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Search5 (L"AAA", L"BBB", L"CCC", L"DDD", L"EEE");
		},
		L"&search=AAA+BBB+CCC+DDD+EEE");
}


void CCategoryMapServiceTests::Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA");
}


void CCategoryMapServiceTests::Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");
	l_vTerms.push_back (L"BBB");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA+BBB");
}


void CCategoryMapServiceTests::Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString ()
{
	std::vector<_bstr_t> l_vTerms;
	l_vTerms.push_back (L"AAA");
	l_vTerms.push_back (L"BBB");
	l_vTerms.push_back (L"CCC");
	l_vTerms.push_back (L"DDD");
	l_vTerms.push_back (L"EEE");
	l_vTerms.push_back (L"FFF");

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Search (p_psa);
		},
		l_vTerms,
		L"&search=AAA+BBB+CCC+DDD+EEE+FFF");
}


void CCategoryMapServiceTests::Search_SafeArrayWith0Terms_ReturnsError ()
{
	std::vector<long> l_vTerms;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
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


void CCategoryMapServiceTests::Show1_1ValidCategory_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Show1 (111);
		},
		L"&show=(111)");
}


void CCategoryMapServiceTests::Show2_2ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Show2 (111, 222);
		},
		L"&show=(111+222)");
}


void CCategoryMapServiceTests::Show3_3ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Show3 (111, 222, 333);
		},
		L"&show=(111+222+333)");
}


void CCategoryMapServiceTests::Show4_4ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Show4 (111, 222, 333, 444);
		},
		L"&show=(111+222+333+444)");
}


void CCategoryMapServiceTests::Show5_5ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService) {
			p_spService->Show5 (111, 222, 333, 444, 555);
		},
		L"&show=(111+222+333+444+555)");
}


void CCategoryMapServiceTests::Show_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Show (p_psa);
		},
		l_vIds,
		L"&show=(111)");
}


void CCategoryMapServiceTests::Show_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Show (p_psa);
		},
		l_vIds,
		L"&show=(111+222)");
}


void CCategoryMapServiceTests::Show_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);
	l_vIds.push_back (333);
	l_vIds.push_back (444);
	l_vIds.push_back (555);
	l_vIds.push_back (666);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->Show (p_psa);
		},
		l_vIds,
		L"&show=(111+222+333+444+555+666)");
}


void CCategoryMapServiceTests::Show_SafeArrayWith0Categories_ReturnsError ()
{
	std::vector<long> l_vIds;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::ICategoryMapServicePtr& p_spService, SAFEARRAY* p_psa) {
			try {
				p_spService->Show (p_psa);
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
#endif
