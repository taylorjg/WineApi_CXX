#ifndef _CConfigTests_h_
#define _CConfigTests_h_

#include <cppunit/extensions/HelperMacros.h>

class CConfigTests : public CPPUNIT_NS::TestFixture
{
public:
	void setUp ();
	void tearDown ();

protected:
	void ApiKey_WhenSetToAValidValue_UrlContainsCorrectValue ();
	void Version_WhenSetToAValidValue_UrlContainsCorrectValue ();
	void AffiliateId_WhenSetToAValidValue_UrlContainsCorrectValue ();

private:
	CPPUNIT_TEST_SUITE (CConfigTests);
	CPPUNIT_TEST (ApiKey_WhenSetToAValidValue_UrlContainsCorrectValue);
	CPPUNIT_TEST (Version_WhenSetToAValidValue_UrlContainsCorrectValue);
	CPPUNIT_TEST (AffiliateId_WhenSetToAValidValue_UrlContainsCorrectValue);
	CPPUNIT_TEST_SUITE_END ();
};

#endif
