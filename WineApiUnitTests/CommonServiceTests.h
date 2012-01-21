#ifndef _CCommonServiceTests_h_
#define _CCommonServiceTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CCommonServiceTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void Execute_GivenUrlWithBogusHost_ReturnsError ();
	void Execute_GivenUrlWithBogusProtocol_ReturnsError ();
	void Execute_GivenUrlWithBogusMethod_ReturnsError ();
	void Execute_GivenBadXmlResponse_ReturnsError ();

private:
	CPPUNIT_TEST_SUITE (CCommonServiceTests);
	CPPUNIT_TEST (Execute_GivenUrlWithBogusHost_ReturnsError);
	CPPUNIT_TEST (Execute_GivenUrlWithBogusProtocol_ReturnsError);
	CPPUNIT_TEST (Execute_GivenUrlWithBogusMethod_ReturnsError);
	CPPUNIT_TEST (Execute_GivenBadXmlResponse_ReturnsError);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
