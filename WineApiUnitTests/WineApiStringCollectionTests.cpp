#include "stdafx.h"
#include "resource.h"
#include "WineApiStringCollectionTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CWineApiStringCollectionTests);

void CWineApiStringCollectionTests::setUp ()
{
}


void CWineApiStringCollectionTests::tearDown ()
{
}


void CWineApiStringCollectionTests::Count_WhenCollectionEmpty_Returns0 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 0);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Count_WhenCollectionContains1Item_Returns1 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_1STATUSMESSAGE);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Count_WhenCollectionContains3Items_Returns3 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 3);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Count_GivenNullPointer_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		l_hr = l_spCollection->get_Count (NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Item_WhenCollectionContains1ItemAndIndexIs0_ReturnsItem ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_1STATUSMESSAGE);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		_bstr_t l_sbstrMessage = l_spCollection->Item[0];
		CPPUNIT_ASSERT (l_sbstrMessage == _bstr_t (L"Message 1"));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Item_WhenCollectionContains1ItemAndIndexIsNegative_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_1STATUSMESSAGE);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		BSTR l_bstrMessage = NULL;
		l_hr = l_spCollection->get_Item (-1, &l_bstrMessage);
		if (l_bstrMessage != NULL) {
			SysFreeString (l_bstrMessage);
			l_bstrMessage = NULL;
		}
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Item_WhenCollectionContains1ItemAndIndexIs1_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_1STATUSMESSAGE);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		BSTR l_bstrMessage = NULL;
		l_hr = l_spCollection->get_Item (1, &l_bstrMessage);
		if (l_bstrMessage != NULL) {
			SysFreeString (l_bstrMessage);
			l_bstrMessage = NULL;
		}
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Item_WhenCollectionEmpty_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 0);

		BSTR l_bstrMessage = NULL;
		l_hr = l_spCollection->get_Item (0, &l_bstrMessage);
		if (l_bstrMessage != NULL) {
			SysFreeString (l_bstrMessage);
			l_bstrMessage = NULL;
		}
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::Item_GivenNullPointer_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_1STATUSMESSAGE);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		l_hr = l_spCollection->get_Item (0, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::EnumNext_For1Item_Returns1Item ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svarItem;
		l_hr = l_spEnumVARIANT->Next (1, &l_svarItem, NULL);
		CPPUNIT_ASSERT (l_hr == S_OK);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::EnumNext_For1ItemGivenNull2ndArgument_ReturnsError ()
{
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		l_hr = l_spEnumVARIANT->Next (1, NULL, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
}


void CWineApiStringCollectionTests::EnumNext_ForMultipleItems_ReturnsMultipleItems ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[2];
		unsigned long l_ulNumElementsReturned = 0;
		l_hr = l_spEnumVARIANT->Next (2, l_svaraItem, &l_ulNumElementsReturned);
		CPPUNIT_ASSERT (l_hr == S_OK);
		CPPUNIT_ASSERT (l_ulNumElementsReturned == 2);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::EnumNext_ForMultipleItemsGivenNull3rdArgument_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[2];
		l_hr = l_spEnumVARIANT->Next (2, l_svaraItem, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiStringCollectionTests::EnumNext_ForTooManyItems_ReturnsAvailableItems ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_3STATUSMESSAGES);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IWineApiStringCollectionPtr l_spCollection = l_spCatalog->Status->Messages;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[6];
		unsigned long l_ulNumElementsReturned = 0;
		l_hr = l_spEnumVARIANT->Next (6, l_svaraItem, &l_ulNumElementsReturned);
		CPPUNIT_ASSERT (l_hr == S_FALSE);
		CPPUNIT_ASSERT (l_ulNumElementsReturned == 3);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
