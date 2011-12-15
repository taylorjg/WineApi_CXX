#ifndef __CATALOG_H_
#define __CATALOG_H_

#include "resource.h"
#include "Status.h"
#include "Products.h"

class ATL_NO_VTABLE CCatalog : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICatalog, &IID_ICatalog, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCatalog ()
	{
		ATLTRACE (_T("CCatalog::CCatalog - %p\n"), this);
	}
	~CCatalog ()
	{
		ATLTRACE (_T("CCatalog::~CCatalog - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCatalog)
	COM_INTERFACE_ENTRY(ICatalog)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICatalog
public:
	STDMETHOD(get_Status)(IStatus** p_ppStatus);
	STDMETHOD(get_Products)(IProducts** p_ppProducts);

DECLARE_CREATE_INSTANCE_METHODS (CCatalog, ICatalog, ICatalogPtr)

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CStatus, IStatus, _T("Status"), &m_spStatus)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CProducts, IProducts, _T("Products"), &m_spProducts)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	IStatusPtr		m_spStatus;
	IProductsPtr	m_spProducts;
};

#endif
