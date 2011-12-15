#ifndef __CATEGORYMAPSERVICE_H_
#define __CATEGORYMAPSERVICE_H_

#include "resource.h"
#include "ServiceBase.h"
#include "CategoryMap.h"
#include "InternalUrlInvoker.h"
#include "InternalResponseDecoder.h"

class ATL_NO_VTABLE CCategoryMapService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCategoryMapService, &CLSID_CategoryMapService>,
	public IDispatchImpl<ICategoryMapService, &IID_ICategoryMapService, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public CServiceBase<CCategoryMap, ICategoryMapPtr>
{
public:
	CCategoryMapService() :
		CServiceBase<CCategoryMap, ICategoryMapPtr> (
			new CInternalUrlInvoker (),
			new CInternalResponseDecoder<CCategoryMap, ICategoryMapPtr> (),
			L"categorymap")
	{
		ATLTRACE (_T("CCategoryMapService::CCategoryMapService - %p\n"), this);
	}
	~CCategoryMapService()
	{
		ATLTRACE (_T("CCategoryMapService::~CCategoryMapService - %p\n"), this);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CATEGORYMAPSERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCategoryMapService)
	COM_INTERFACE_ENTRY(ICategoryMapService)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICategoryMapService
public:
	STDMETHOD(Execute)(ICategoryMap** p_ppCategoryMap);
	STDMETHOD(CategoryFilter1)(long p_lId1, ICategoryMapService** p_ppSelf);
	STDMETHOD(CategoryFilter2)(long p_lId1, long p_lId2, ICategoryMapService** p_ppSelf);
	STDMETHOD(CategoryFilter3)(long p_lId1, long p_lId2, long p_lId3, ICategoryMapService** p_ppSelf);
	STDMETHOD(CategoryFilter4)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, ICategoryMapService** p_ppSelf);
	STDMETHOD(CategoryFilter5)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, long p_lId5, ICategoryMapService** p_ppSelf);
	STDMETHOD(CategoryFilter)(SAFEARRAY* p_psa, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search1)(BSTR p_bstrTerm1, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search2)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search3)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search4)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, BSTR p_bstrTerm4, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search5)(BSTR p_bstrTerm1, BSTR p_bstrTerm2, BSTR p_bstrTerm3, BSTR p_bstrTerm4, BSTR p_bstrTerm5, ICategoryMapService** p_ppSelf);
	STDMETHOD(Search)(SAFEARRAY* p_psa, ICategoryMapService** p_ppSelf);
	STDMETHOD(Show)(long p_lId, ICategoryMapService** p_ppSelf);

private:
	HRESULT AppendCategoryFilter (
		const std::vector<_variant_t>&	p_vValues,
		ICategoryMapService**			p_ppSelf);

	HRESULT AppendSearch (
		const std::vector<_variant_t>&	p_vValues,
		ICategoryMapService**			p_ppSelf);
};

#endif
