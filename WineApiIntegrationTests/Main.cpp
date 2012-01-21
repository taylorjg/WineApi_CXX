#include "stdafx.h"

#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

//*****************************************************************************
//* Function Name: main
//*   Description: 
//*****************************************************************************
int main ()
{
	HRESULT l_hr = CoInitializeEx (NULL, COINIT_APARTMENTTHREADED);

	if (FAILED (l_hr)) {
		(void) _ftprintf (stderr, _T("CoInitializeEx() failed - HRESULT is 0x%08X\n"), l_hr);
		return EXIT_FAILURE;
	}

	int l_iResult = EXIT_SUCCESS;

	try {
		// Create the event manager and test controller.
		CPPUNIT_NS::TestResult l_TestResult;

		// Add a listener that collects test results.
		CPPUNIT_NS::TestResultCollector l_TestResultCollector;
		l_TestResult.addListener (&l_TestResultCollector);

		// Add a listener that print dots as test run.
		CPPUNIT_NS::BriefTestProgressListener l_BriefTestProgressListener;
		l_TestResult.addListener (&l_BriefTestProgressListener);

		// Add the top suite to the test runner.
		CPPUNIT_NS::TestRunner l_TestRunner;
		l_TestRunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry ().makeTest ());
		l_TestRunner.run (l_TestResult);

		// Print tests in a compiler compatible format.
		CPPUNIT_NS::CompilerOutputter l_Outputter (&l_TestResultCollector, CPPUNIT_NS::stdCOut ());
		l_Outputter.write (); 

		if (!l_TestResultCollector.wasSuccessful ()) {
			l_iResult = EXIT_FAILURE;
		}
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("_com_error exception caught - HRESULT is 0x%08X\n"), _ce.Error ());
		try {
			// Try to get rich error information first.
			_bstr_t l_sbstrDescription = _ce.Description ();
			if (l_sbstrDescription.length () > 0) {
				(void) _ftprintf (stderr, _T("Description: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrDescription));
			}
			else {
				// Failing that, fall back on a lookup of the error code.
				LPCTSTR l_lpszErrorMessage = _ce.ErrorMessage ();
				if (l_lpszErrorMessage != NULL) {
					(void) _ftprintf (stderr, _T("ErrorMessage: \"%s\"\n"), l_lpszErrorMessage);
				}
			}
		}
		catch (const _com_error&) {
		}

		l_iResult = EXIT_FAILURE;
	}

	CoUninitialize ();

	return l_iResult;
}
