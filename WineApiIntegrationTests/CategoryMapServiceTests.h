#ifndef _CCategoryMapServiceTests_h_
#define _CCategoryMapServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CCategoryMapServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Execute_ShowWineTypes_Succeeds ();
	void Execute_ShowWineTypesAndVarietals_Succeeds ();

private:
	CPPUNIT_TEST_SUITE (CCategoryMapServiceTests);
	CPPUNIT_TEST (Execute_ShowWineTypes_Succeeds);
	CPPUNIT_TEST (Execute_ShowWineTypesAndVarietals_Succeeds);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
