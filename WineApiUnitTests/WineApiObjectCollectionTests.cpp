#include "stdafx.h"
#include "resource.h"
#include "WineApiObjectCollectionTests.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

#include <cppunit/config/SourcePrefix.h>

CPPUNIT_TEST_SUITE_REGISTRATION (CWineApiObjectCollectionTests);

void CWineApiObjectCollectionTests::setUp ()
{
}


void CWineApiObjectCollectionTests::tearDown ()
{
}


void CWineApiObjectCollectionTests::Count_WhenCollectionEmpty_Returns0 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 0);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Count_WhenCollectionContains1Item_Returns1 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Count_WhenCollectionContains10Items_Returns10 ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 10);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Count_GivenNullPointer_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		l_hr = l_spCollection->get_Count (NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Item_WhenCollectionContains1ItemAndIndexIs0_ReturnsItem ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		WineApi::IProductPtr l_spProduct = l_spCollection->Item[0];
		CPPUNIT_ASSERT (static_cast<bool>(l_spProduct));
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Item_WhenCollectionContains1ItemAndIndexIsNegative_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		IDispatchPtr l_spItem;
		l_hr = l_spCollection->get_Item (-1, &l_spItem);
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Item_WhenCollectionContains1ItemAndIndexIs1_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		IDispatchPtr l_spItem;
		l_hr = l_spCollection->get_Item (1, &l_spItem);
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Item_WhenCollectionEmpty_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_NOPRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 0);

		IDispatchPtr l_spItem;
		l_hr = l_spCollection->get_Item (0, &l_spItem);
		CPPUNIT_ASSERT (l_hr == E_INVALIDARG);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::Item_GivenNullPointer_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_PRODUCT95457);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		CPPUNIT_ASSERT (l_spCollection->Count == 1);

		l_hr = l_spCollection->get_Item (0, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::EnumNext_For1Item_Returns1Item ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
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


void CWineApiObjectCollectionTests::EnumNext_For1ItemGivenNull2ndArgument_ReturnsError ()
{
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		l_hr = l_spEnumVARIANT->Next (1, NULL, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
}


void CWineApiObjectCollectionTests::EnumNext_ForMultipleItems_ReturnsMultipleItems ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[5];
		unsigned long l_ulNumElementsReturned = 0;
		l_hr = l_spEnumVARIANT->Next (5, l_svaraItem, &l_ulNumElementsReturned);
		CPPUNIT_ASSERT (l_hr == S_OK);
		CPPUNIT_ASSERT (l_ulNumElementsReturned == 5);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::EnumNext_ForMultipleItemsGivenNull3rdArgument_ReturnsError ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[5];
		l_hr = l_spEnumVARIANT->Next (5, l_svaraItem, NULL);
		CPPUNIT_ASSERT (l_hr == E_POINTER);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}


void CWineApiObjectCollectionTests::EnumNext_ForTooManyItems_ReturnsAvailableItems ()
{
	try {
		CStubUrlInvoker l_StubUrlInvoker (IDR_CATALOGSERVICE_10PRODUCTS);
		SetExternalUrlInvoker (&l_StubUrlInvoker);

		HRESULT l_hr;

		WineApi::ICatalogServicePtr l_spCatalogService;
		l_hr = l_spCatalogService.CreateInstance (__uuidof (WineApi::CatalogService));

		WineApi::ICatalogPtr l_spCatalog = l_spCatalogService->Execute ();
		CPPUNIT_ASSERT (static_cast<bool>(l_spCatalog));

		WineApi::IProductsPtr l_spProducts = l_spCatalog->Products;
		CPPUNIT_ASSERT (static_cast<bool>(l_spProducts));

		WineApi::IWineApiObjectCollectionPtr l_spCollection = l_spProducts->List;
		CPPUNIT_ASSERT (static_cast<bool>(l_spCollection));

		IEnumVARIANTPtr l_spEnumVARIANT = l_spCollection->_NewEnum;
		CPPUNIT_ASSERT (static_cast<bool>(l_spEnumVARIANT));

		_variant_t l_svaraItem[15];
		unsigned long l_ulNumElementsReturned = 0;
		l_hr = l_spEnumVARIANT->Next (15, l_svaraItem, &l_ulNumElementsReturned);
		CPPUNIT_ASSERT (l_hr == S_FALSE);
		CPPUNIT_ASSERT (l_ulNumElementsReturned == 10);
	}
	catch (const _com_error& l_ce) {
		HandleComErrorException (l_ce);
	}
}
