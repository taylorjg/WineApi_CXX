#ifndef _CCommonServiceTests_h_
#define _CCommonServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CCommonServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Execute_WithNoApiKey_ReturnsError ();
	void Execute_WithBadApiKey_ReturnsError ();
	void Execute_WithBadVersion_ReturnsError ();
	void Execute_WithBadQueryString_ReturnsError ();

private:
	CPPUNIT_TEST_SUITE (CCommonServiceTests);
	CPPUNIT_TEST (Execute_WithNoApiKey_ReturnsError);
	CPPUNIT_TEST (Execute_WithBadApiKey_ReturnsError);
	CPPUNIT_TEST (Execute_WithBadVersion_ReturnsError);
	CPPUNIT_TEST (Execute_WithBadQueryString_ReturnsError);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
