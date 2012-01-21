#ifndef _CCatalogServiceTests_h_
#define _CCatalogServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

#if _MSC_VER >= 1600
#include "QueryStringTestUtils.h"
#include "resource.h"
#endif

class CCatalogServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	CCatalogServiceTests ()
#if _MSC_VER >= 1600
		: m_QueryStringTestUtils (IDR_CATALOGSERVICE_NOPRODUCTS)
#endif
	{
	}

	void setUp ();
	void tearDown ();

protected:
	void CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString ();
	void CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString ();
	void CategoryFilter_SafeArrayWith0Categories_ReturnsError ();

	void Offset_OffsetValue_UrlContainsCorrectQueryString ();
	void Size_SizeValue_UrlContainsCorrectQueryString ();

	void RatingFromFilter_FromValue_UrlContainsCorrectQueryString ();
	void RatingFromToFilter_FromValueToValue_UrlContainsCorrectQueryString ();

	void PriceFromFilter_FromValue_UrlContainsCorrectQueryString ();
	void PriceFromToFilter_FromValueToValue_UrlContainsCorrectQueryString ();

	void State_StateValue_UrlContainsCorrectQueryString ();

	void SortBy_PriceAscending_UrlContainsCorrectQueryString ();
	void SortBy_RatingDescending_UrlContainsCorrectQueryString ();
	void SortBy_InvalidSortOption_ReturnsError ();
	void SortBy_InvalidSortDirection_ReturnsError ();

	void InStock_AutomationTrue_UrlContainsCorrectQueryString ();
	void InStock_AutomationFalse_UrlContainsCorrectQueryString ();
	void InStock_CxxTrue_UrlContainsCorrectQueryString ();
	void InStock_CxxFalse_UrlContainsCorrectQueryString ();

	void AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError ();

	void Execute_ForProduct95457_ReturnsCorrectData ();

#if _MSC_VER >= 1600
	void ProductFilter1_1ValidProduct_UrlContainsCorrectQueryString ();
	void ProductFilter2_2ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter3_3ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter4_4ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter5_5ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter_SafeArrayWith1ValidProduct_UrlContainsCorrectQueryString ();
	void ProductFilter_SafeArrayWith2ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter_SafeArrayWith6ValidProducts_UrlContainsCorrectQueryString ();
	void ProductFilter_SafeArrayWith0Products_ReturnsError ();

	void Search1_1ValidTerm_UrlContainsCorrectQueryString ();
	void Search2_2ValidTerms_UrlContainsCorrectQueryString ();
	void Search3_3ValidTerms_UrlContainsCorrectQueryString ();
	void Search4_4ValidTerms_UrlContainsCorrectQueryString ();
	void Search5_5ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString ();
	void Search_SafeArrayWith0Terms_ReturnsError ();

private:
	CQueryStringTestUtils<WineApi::CatalogService, WineApi::ICatalogServicePtr> m_QueryStringTestUtils;
#endif

private:
	CPPUNIT_TEST_SUITE (CCatalogServiceTests);

	CPPUNIT_TEST (CategoryFilter1_1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter2_2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter3_3ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter4_4ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter5_5ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith1ValidCategory_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith2ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith6ValidCategories_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (CategoryFilter_SafeArrayWith0Categories_ReturnsError);

	CPPUNIT_TEST (Offset_OffsetValue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Size_SizeValue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (State_StateValue_UrlContainsCorrectQueryString);

	CPPUNIT_TEST (RatingFromFilter_FromValue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (RatingFromToFilter_FromValueToValue_UrlContainsCorrectQueryString);

	CPPUNIT_TEST (PriceFromFilter_FromValue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (PriceFromToFilter_FromValueToValue_UrlContainsCorrectQueryString);

	CPPUNIT_TEST (SortBy_PriceAscending_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (SortBy_RatingDescending_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (SortBy_InvalidSortOption_ReturnsError);
	CPPUNIT_TEST (SortBy_InvalidSortDirection_ReturnsError);

	CPPUNIT_TEST (InStock_AutomationTrue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (InStock_AutomationFalse_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (InStock_CxxTrue_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (InStock_CxxFalse_UrlContainsCorrectQueryString);

	CPPUNIT_TEST (AllCatalogQueryRelatedMethods_GivenNullLastArgument_ReturnError);

	CPPUNIT_TEST (Execute_ForProduct95457_ReturnsCorrectData);

#if _MSC_VER >= 1600
	CPPUNIT_TEST (ProductFilter1_1ValidProduct_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter2_2ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter3_3ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter4_4ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter5_5ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter_SafeArrayWith1ValidProduct_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter_SafeArrayWith2ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter_SafeArrayWith6ValidProducts_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (ProductFilter_SafeArrayWith0Products_ReturnsError);

	CPPUNIT_TEST (Search1_1ValidTerm_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search2_2ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search3_3ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search4_4ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search5_5ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith1ValidTerm_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith2ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith6ValidTerms_UrlContainsCorrectQueryString);
	CPPUNIT_TEST (Search_SafeArrayWith0Terms_ReturnsError);
#endif

	CPPUNIT_TEST_SUITE_END ();
};

#endif
