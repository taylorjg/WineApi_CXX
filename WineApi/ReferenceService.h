#ifndef __REFERENCESERVICE_H_
#define __REFERENCESERVICE_H_

#include "resource.h"
#include "ServiceBase.h"
#include "Reference.h"
#include "InternalUrlInvoker.h"
#include "InternalResponseDecoder.h"

class ATL_NO_VTABLE CReferenceService : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CReferenceService, &CLSID_ReferenceService>,
	public IDispatchImpl<IReferenceService, &IID_IReferenceService, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public CServiceBase<CReference, IReferencePtr>
{
public:
	CReferenceService () :
		CServiceBase<CReference, IReferencePtr> (
			new CInternalUrlInvoker (),
			new CInternalResponseDecoder<CReference, IReferencePtr> (),
			L"reference")
	{
		ATLTRACE (_T("CReferenceService::CReferenceService - %p\n"), this);
	}
	~CReferenceService ()
	{
		ATLTRACE (_T("CReferenceService::~CReferenceService - %p\n"), this);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_REFERENCESERVICE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CReferenceService)
	COM_INTERFACE_ENTRY(IReferenceService)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IReferenceService
public:
	STDMETHOD(Execute)(IReference** p_ppReference);
	STDMETHOD(CategoryFilter1)(long p_lId1, IReferenceService** p_ppSelf);
	STDMETHOD(CategoryFilter2)(long p_lId1, long p_lId2, IReferenceService** p_ppSelf);
	STDMETHOD(CategoryFilter3)(long p_lId1, long p_lId2, long p_lId3, IReferenceService** p_ppSelf);
	STDMETHOD(CategoryFilter4)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, IReferenceService** p_ppSelf);
	STDMETHOD(CategoryFilter5)(long p_lId1, long p_lId2, long p_lId3, long p_lId4, long p_lId5, IReferenceService** p_ppSelf);
	STDMETHOD(CategoryFilter)(SAFEARRAY* p_psa, IReferenceService** p_ppSelf);

private:
	HRESULT AppendCategoryFilter (
		const std::vector<_variant_t>&	p_vValues,
		IReferenceService**				p_ppSelf);
};

#endif
