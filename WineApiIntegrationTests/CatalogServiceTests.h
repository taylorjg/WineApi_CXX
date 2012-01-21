#ifndef _CCatalogServiceTests_h_
#define _CCatalogServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CCatalogServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Execute_WithCategoryFilter3_Succeeds ();
	void Execute_WithProductFilter1_Succeeds ();

private:
	CPPUNIT_TEST_SUITE (CCatalogServiceTests);
	CPPUNIT_TEST (Execute_WithCategoryFilter3_Succeeds);
	CPPUNIT_TEST (Execute_WithProductFilter1_Succeeds);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
