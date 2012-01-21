#ifndef _CCatalogServiceTests_h_
#define _CCatalogServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

#if _MSC_VER >= 1600
#include "QueryStringTestUtils.h"
#include "resource.h"
#endif

class CReferenceServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	CReferenceServiceTests ()
#if _MSC_VER >= 1600
		: m_QueryStringTestUtils (IDR_REFERENCESERVICE_GEWURZTRAMINER)
#endif
	{
	}

	void setUp ();
	void tearDown ();

protected:
	void AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ();
	void Execute_ForGewurztraminer_ReturnsCorrectData ();

#if _MSC_VER >= 1600
	void CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString ();
	void CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith0Categories_ReturnsError ();

private:
	CQueryStringTestUtils<WineApi::ReferenceService, WineApi::IReferenceServicePtr> m_QueryStringTestUtils;
#endif

private:
	CPPUNIT_TEST_SUITE (CReferenceServiceTests);

	CPPUNIT_TEST (AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError);
	CPPUNIT_TEST (Execute_ForGewurztraminer_ReturnsCorrectData);

#if _MSC_VER >= 1600
	CPPUNIT_TEST (CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith0Categories_ReturnsError);
#endif

	CPPUNIT_TEST_SUITE_END ();
};

#endif
