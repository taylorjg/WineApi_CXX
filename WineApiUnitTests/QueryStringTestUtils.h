#ifndef _CQueryStringTestUtils_h_
#define _CQueryStringTestUtils_h_

#include "stdafx.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <functional>

template<typename ComClsidType, typename ComSmartPointerType>
class CQueryStringTestUtils
{
public:
	CQueryStringTestUtils (UINT p_uResourceId) :
	  m_uResourceId (p_uResourceId)
	  {
	  }

	//*****************************************************************************
	//* Function Name: QueryStringContainsFragment
	//*   Description: Instantiates the COM class given by ComClsidType (e.g.
	//*                WineApi::CatalogService), invokes the given function (e.g.
	//*                a lambda function) passing ComSmartPointerType
	//*                (e.g. WineApi::ICatalogServicePtr) and then invokes the
	//*                Execute method. It then checks that the Url passed to the
	//*                CStubUrlInvoker contains the expected query string fragment.
	//*****************************************************************************
	void QueryStringContainsFragment (
		std::function<void (const ComSmartPointerType& p_spService)> p_fn,
		LPCWSTR p_lpwszQueryStringFragment,
		bool p_bExceptionExpected = false)
	{
		try {
			CStubUrlInvoker l_StubUrlInvoker (m_uResourceId);
			SetExternalUrlInvoker (&l_StubUrlInvoker);

			HRESULT l_hr;

			ComSmartPointerType l_spService;
			l_hr = l_spService.CreateInstance (__uuidof (ComClsidType));

			(p_fn) (l_spService);
			(void) l_spService->Execute ();

			const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
			CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), p_lpwszQueryStringFragment) != NULL);
		}
		catch (const _com_error& l_ce) {
			if (!p_bExceptionExpected) {
				HandleComErrorException (l_ce);
			}
		}
	}

	//*****************************************************************************
	//* Function Name: QueryStringContainsFragment
	//*   Description: Very similar to the above overload but this method also
	//*                accepts a vector which it uses to create a SafeArray which
	//*                is also passed to the given function.
	//*****************************************************************************
	template<typename T>
	void QueryStringContainsFragment (
		std::function<void (const ComSmartPointerType& p_spService, SAFEARRAY* p_psa)> p_fn,
		const std::vector<T>& p_vValues,
		LPCWSTR p_lpwszQueryStringFragment,
		bool p_bExceptionExpected = false)
	{
		SAFEARRAY* l_psa = NULL;

		try {
			HRESULT l_hr = VectorToSafeArray (p_vValues, &l_psa);
			if (FAILED (l_hr)) _com_issue_error (l_hr);

			CStubUrlInvoker l_StubUrlInvoker (m_uResourceId);
			SetExternalUrlInvoker (&l_StubUrlInvoker);

			ComSmartPointerType l_spService;
			l_hr = l_spService.CreateInstance (__uuidof (ComClsidType));

			(p_fn) (l_spService, l_psa);
			(void) l_spService->Execute ();

			const _bstr_t& l_sbstrUrl = l_StubUrlInvoker.GetUrl ();
			CPPUNIT_ASSERT (wcsstr (static_cast<LPCWSTR>(l_sbstrUrl), p_lpwszQueryStringFragment) != NULL);
		}
		catch (const _com_error& l_ce) {
			if (!p_bExceptionExpected) {
				HandleComErrorException (l_ce);
			}
		}

		if (l_psa != NULL) {
			(void) SafeArrayDestroy (l_psa);
			l_psa = NULL;
		}
	}

private:
	UINT m_uResourceId;
};

#endif
