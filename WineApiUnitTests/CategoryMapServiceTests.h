#ifndef _CCategoryMapServiceTests_h_
#define _CCategoryMapServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

#if _MSC_VER >= 1600
#include "QueryStringTestUtils.h"
#include "resource.h"
#endif

class CCategoryMapServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	CCategoryMapServiceTests ()
#if _MSC_VER >= 1600
		: m_QueryStringTestUtils (IDR_CATEGORYMAPSERVICE_WINETYPES)
#endif
	{
	}

	void setUp ();
	void tearDown ();

protected:
	void Show_ShowValue_UrlContainsCorrectQueryString ();
	void AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ();
	void Execute_ForWineTypes_ReturnsCorrectData ();

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

	void Search1_1ValidTerm_UrlContainsCorrectQueryString ();
	void Search2_2ValidTerms_UrlContainsCorrectQueryString ();
	void Search3_3ValidTerms_UrlContainsCorrectQueryString ();
	void Search4_4ValidTerms_UrlContainsCorrectQueryString ();
	void Search5_5ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith0Terms_ReturnsError ();

	void Show1_1ValidCategory_UrlContainsCorrectQueryString ();
	void Show2_2ValidCategories_UrlContainsCorrectQueryString ();
	void Show3_3ValidCategories_UrlContainsCorrectQueryString ();
	void Show4_4ValidCategories_UrlContainsCorrectQueryString ();
	void Show5_5ValidCategories_UrlContainsCorrectQueryString ();
	void Show_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ();
	void Show_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ();
	void Show_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ();
	void Show_SafeArrayWith0Categories_ReturnsError ();

private:
	CQueryStringTestUtils<WineApi::CategoryMapService, WineApi::ICategoryMapServicePtr> m_QueryStringTestUtils;
#endif

private:
	CPPUNIT_TEST_SUITE (CCategoryMapServiceTests);

	CPPUNIT_TEST (Show_ShowValue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError);
	CPPUNIT_TEST (Execute_ForWineTypes_ReturnsCorrectData);

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

	CPPUNIT_TEST (Search1_1ValidTerm_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search2_2ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search3_3ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search4_4ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search5_5ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith0Terms_ReturnsError);

	CPPUNIT_TEST (Show1_1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show2_2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show3_3ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show4_4ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show5_5ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Show_SafeArrayWith0Categories_ReturnsError);
#endif

	CPPUNIT_TEST_SUITE_END ();
};

#endif
