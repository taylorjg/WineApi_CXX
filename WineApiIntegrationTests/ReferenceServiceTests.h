#ifndef _CReferenceServiceTests_h_
#define _CReferenceServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CReferenceServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Execute_WithCategoryFilter1_Succeeds ();

private:
	CPPUNIT_TEST_SUITE (CReferenceServiceTests);
	CPPUNIT_TEST (Execute_WithCategoryFilter1_Succeeds);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
