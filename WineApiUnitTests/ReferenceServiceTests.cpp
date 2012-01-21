#include "stdafx.h"
#include "resource.h"
#include "ReferenceServiceTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CReferenceServiceTests);

void CReferenceServiceTests::setUp ()
{
	SetExternalUrlInvoker (NULL);
}


void CReferenceServiceTests::tearDown ()
{
	SetExternalUrlInvoker (NULL);
}


void CReferenceServiceTests::AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ()
{
	SAFEARRAY* l_psaCategoryFilter = NULL;

	try {
		HRESULT l_hr;

		WineApi::IReferenceServicePtr l_spReferenceService;
		l_hr = l_spReferenceService.CreateInstance (__uuidof (WineApi::ReferenceService));

		l_hr = l_spReferenceService->raw_CategoryFilter1 (111, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spReferenceService->raw_CategoryFilter2 (111, 222, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spReferenceService->raw_CategoryFilter3 (111, 222, 333, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spReferenceService->raw_CategoryFilter4 (111, 222, 333, 444, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		l_hr = l_spReferenceService->raw_CategoryFilter5 (111, 222, 333, 444, 555, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);

		{
			std::vector<long> l_vIds;
			l_vIds.push_back (111);
			l_hr = VectorToSafeArray (l_vIds, &l_psaCategoryFilter);
			if (FAILED (l_hr)) _com_issue_error (l_hr);
			l_hr = l_spReferenceService->raw_CategoryFilter (l_psaCategoryFilter, NULL);
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
}


void CReferenceServiceTests::Execute_ForGewurztraminer_ReturnsCorrectData ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_REFERENCESERVICE_GEWURZTRAMINER);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::IReferenceServicePtr l_spReferenceService;
		l_hr = l_spReferenceService.CreateInstance (__uuidof (WineApi::ReferenceService));

		WineApi::IReferencePtr l_spReference = l_spReferenceService->Execute ();

		CPPUNIT_ASSERT (l_spReference->Status->ReturnCode == 0);
		CPPUNIT_ASSERT (l_spReference->Status->Messages->Count == 0);

		CPPUNIT_ASSERT (l_spReference->Books->Count == 1);

		WineApi::IBookPtr l_spBook = l_spReference->Books->Item[0];
		CPPUNIT_ASSERT (l_spBook->Id == _bstr_t (L"5"));
		CPPUNIT_ASSERT (l_spBook->Title == _bstr_t (L"Varietal"));

		CPPUNIT_ASSERT (l_spBook->Articles->Count == 1);

		WineApi::IArticlePtr l_spArticle = l_spBook->Articles->Item[0];
		CPPUNIT_ASSERT (l_spArticle->Id == _bstr_t (L"166"));
		CPPUNIT_ASSERT (l_spArticle->Title == _bstr_t (L"Gewurztraminer"));
		CPPUNIT_ASSERT (l_spArticle->Url == _bstr_t (L"http://www.wine.com/v6/Gewurztraminer/White-Wines/learnabout.aspx?class=2&varietal=10"));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


#if _MSC_VER >= 1600
void CReferenceServiceTests::CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService) {
			p_spService->CategoryFilter1 (111);
		},
		L"&filter=categories(111)");
}


void CReferenceServiceTests::CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService) {
			p_spService->CategoryFilter2 (111, 222);
		},
		L"&filter=categories(111+222)");
}


void CReferenceServiceTests::CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService) {
			p_spService->CategoryFilter3 (111, 222, 333);
		},
		L"&filter=categories(111+222+333)");
}


void CReferenceServiceTests::CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService) {
			p_spService->CategoryFilter4 (111, 222, 333, 444);
		},
		L"&filter=categories(111+222+333+444)");
}


void CReferenceServiceTests::CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString ()
{
	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService) {
			p_spService->CategoryFilter5 (111, 222, 333, 444, 555);
		},
		L"&filter=categories(111+222+333+444+555)");
}


void CReferenceServiceTests::CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111)");
}


void CReferenceServiceTests::CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111+222)");
}


void CReferenceServiceTests::CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ()
{
	std::vector<long> l_vIds;
	l_vIds.push_back (111);
	l_vIds.push_back (222);
	l_vIds.push_back (333);
	l_vIds.push_back (444);
	l_vIds.push_back (555);
	l_vIds.push_back (666);

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService, SAFEARRAY* p_psa) {
			p_spService->CategoryFilter (p_psa);
		},
		l_vIds,
		L"&filter=categories(111+222+333+444+555+666)");
}


void CReferenceServiceTests::CategoryFilter_SafeArrayWith0Categories_ReturnsError ()
{
	std::vector<long> l_vIds;
	// We deliberately have an empty vector here.

	m_QueryStringTestUtils.QueryStringContainsFragment (
		[](const WineApi::IReferenceServicePtr& p_spService, SAFEARRAY* p_psa) {
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
#endif
