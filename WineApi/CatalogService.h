#ifndef __CATALOGSERVICE_H_
#define __CATALOGSERVICE_H_

#include "resource.h"
#include "ServiceBase.h"
#include "Catalog.h"
#include "InternalUrlInvoker.h"
#include "InternalResponseDecoder.h"

class ATL_NO_VTABLE CCatalogService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCatalogService, &CLSID_CatalogService>,
	public IDispatchImpl<ICatalogService, &IID_ICatalogService, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public CServiceBase<CCatalog, ICatalogPtr>
{
public:
	CCatalogService() :
		CServiceBase<CCatalog, ICatalogPtr> (
			new CInternalUrlInvoker (),
			new CInternalResponseDecoder<CCatalog, ICatalogPtr> (),
			RESOURCE_CATALOG)
	{
		ATLTRACE (_T("CCatalogService::CCatalogService - %p\n"), this);
	}
	~CCatalogService()
	{
		ATLTRACE (_T("CCatalogService::~CCatalogService - %p\n"), this);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CATALOGSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCatalogService)
	COM_INTERFACE_ENTRY(ICatalogService)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICatalogService
public:
	STDMETHOD(Execute)(ICatalog** p_ppCatalog);
	STDMETHOD(Offset)(long p_lOffset, ICatalogService** p_ppSelf);
	STDMETHOD(Size)(long p_lSize, ICatalogService** p_ppSelf);
	STDMETHOD(Search1)(BSTR p_bstrTerm1, ICatalogService** p_ppSelf);
	STDMETHOD(Search2)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, ICatalogService** p_ppSelf);
	STDMETHOD(Search3)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, ICatalogService** p_ppSelf);
	STDMETHOD(Search4)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, BSTR p_bstrTerm4, ICatalogService** p_ppSelf);
	STDMETHOD(Search5)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, BSTR p_bstrTerm4, BSTR p_bstrTerm5, ICatalogService** p_ppSelf);
	STDMETHOD(Search)(SAFEARRAY* p_psa, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter1)(long p_lId1, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter2)(long p_lId1, long p_lId2, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter3)(long p_lId1, long p_lId2, long p_lId3, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter4)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter5)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, long p_lId5, ICatalogService** p_ppSelf);
	STDMETHOD(CategoryFilter)(SAFEARRAY* p_psa, ICatalogService** p_ppSelf);
	STDMETHOD(RatingFromFilter)(long p_lFrom, ICatalogService** p_ppSelf);
	STDMETHOD(RatingFromToFilter)(long p_lFrom, long p_lTo, ICatalogService** p_ppSelf);
	STDMETHOD(PriceFromFilter)(double p_dblFrom, ICatalogService** p_ppSelf);
	STDMETHOD(PriceFromToFilter)(double p_dblFrom, double p_dblTo, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter1)(long p_lId1, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter2)(long p_lId1, long p_lId2, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter3)(long p_lId1, long p_lId2, long p_lId3, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter4)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter5)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, long p_lId5, ICatalogService** p_ppSelf);
	STDMETHOD(ProductFilter)(SAFEARRAY* p_psa, ICatalogService** p_ppSelf);
	STDMETHOD(State)(BSTR p_bstrState, ICatalogService** p_ppSelf);
	STDMETHOD(SortBy)(enum SortOptions p_eSortOption, enum SortDirection p_eSortDirection, ICatalogService** p_ppSelf);
	STDMETHOD(InStock)(VARIANT_BOOL p_vbInStock, ICatalogService** p_ppSelf);

private:
	HRESULT AppendCategoryFilter (
		const std::vector<_variant_t>&	p_vValues,
		ICatalogService**				p_ppSelf);

	HRESULT AppendProductFilter (
		const std::vector<_variant_t>&	p_vValues,
		ICatalogService**				p_ppSelf);

	HRESULT AppendSearch (
		const std::vector<_variant_t>&	p_vValues,
		ICatalogService**				p_ppSelf);
};

#endif
