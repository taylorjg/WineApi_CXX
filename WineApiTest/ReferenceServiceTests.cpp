#include "stdafx.h"
#include "apikey.h"
#include "ReferenceServiceTests.h"
#include "PrintObjects.h"

//*****************************************************************************
//* Function Name: ReferenceService_Execute_WithCategoryFilter1
//*   Description: 
//*****************************************************************************
void ReferenceService_Execute_WithCategoryFilter1 (void)
{
	try {
		HRESULT l_hr;

		WineApi::IConfigPtr l_spConfig;
		l_hr = l_spConfig.CreateInstance (__uuidof (WineApi::Config));
		if (FAILED (l_hr)) _com_issue_error (l_hr);

		l_spConfig->ApiKey = API_KEY;
		l_spConfig->Version = VERSION;

		WineApi::IReferenceServicePtr l_spReferenceService;
		l_hr = l_spReferenceService.CreateInstance (__uuidof (WineApi::ReferenceService));

		WineApi::IReferencePtr l_spReference = l_spReferenceService
			->CategoryFilter1 (2288)
			->Execute ();

		PrintReference (l_spReference);
	}
	catch (const _com_error& _ce) {
		(void) _ftprintf (stderr, _T("ReferenceService_Execute_WithCategoryFilter1 _com_error exception: 0x%08X\n"), _ce.Error ());
	}
}
