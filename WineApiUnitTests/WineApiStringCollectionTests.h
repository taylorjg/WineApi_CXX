#ifndef _CWineApiStringCollectionTests_h_
#define _CWineApiStringCollectionTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CWineApiStringCollectionTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Count_WhenCollectionEmpty_Returns0 ();
	void Count_WhenCollectionContains1Item_Returns1 ();
	void Count_WhenCollectionContains3Items_Returns3 ();
	void Count_GivenNullPointer_ReturnsError ();

	void Item_WhenCollectionContains1ItemAndIndexIs0_ReturnsItem ();
	void Item_WhenCollectionContains1ItemAndIndexIsNegative_ReturnsError ();
	void Item_WhenCollectionContains1ItemAndIndexIs1_ReturnsError ();
	void Item_WhenCollectionEmpty_ReturnsError ();
	void Item_GivenNullPointer_ReturnsError ();

	void EnumNext_For1Item_Returns1Item ();
	void EnumNext_For1ItemGivenNull2ndArgument_ReturnsError ();
	void EnumNext_ForMultipleItems_ReturnsMultipleItems ();
	void EnumNext_ForMultipleItemsGivenNull3rdArgument_ReturnsError ();
	void EnumNext_ForTooManyItems_ReturnsAvailableItems ();

private:
	CPPUNIT_TEST_SUITE (CWineApiStringCollectionTests);

	CPPUNIT_TEST (Count_WhenCollectionEmpty_Returns0);
	CPPUNIT_TEST (Count_WhenCollectionContains1Item_Returns1);
	CPPUNIT_TEST (Count_WhenCollectionContains3Items_Returns3);
	CPPUNIT_TEST (Count_GivenNullPointer_ReturnsError);

	CPPUNIT_TEST (Item_WhenCollectionContains1ItemAndIndexIs0_ReturnsItem);
	CPPUNIT_TEST (Item_WhenCollectionContains1ItemAndIndexIsNegative_ReturnsError);
	CPPUNIT_TEST (Item_WhenCollectionContains1ItemAndIndexIs1_ReturnsError);
	CPPUNIT_TEST (Item_WhenCollectionEmpty_ReturnsError);
	CPPUNIT_TEST (Item_GivenNullPointer_ReturnsError);

	CPPUNIT_TEST (EnumNext_For1Item_Returns1Item);
	CPPUNIT_TEST (EnumNext_For1ItemGivenNull2ndArgument_ReturnsError);
	CPPUNIT_TEST (EnumNext_ForMultipleItems_ReturnsMultipleItems);
	CPPUNIT_TEST (EnumNext_ForMultipleItemsGivenNull3rdArgument_ReturnsError);
	CPPUNIT_TEST (EnumNext_ForTooManyItems_ReturnsAvailableItems);

	CPPUNIT_TEST_SUITE_END ();
};

#endif
