#ifndef __CATEGORYMAP_H_
#define __CATEGORYMAP_H_

#include "resource.h"
#include "Status.h"
#include "Category.h"

class ATL_NO_VTABLE CCategoryMap : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICategoryMap, &IID_ICategoryMap, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCategoryMap ()
	{
		ATLTRACE (_T("CCategoryMap::CCategoryMap - %p\n"), this);
	}
	~CCategoryMap ()
	{
		ATLTRACE (_T("CCategoryMap::~CCategoryMap - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCategoryMap)
	COM_INTERFACE_ENTRY(ICategoryMap)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICategoryMap
public:
	STDMETHOD(get_Status)(IStatus** p_ppStatus);
	STDMETHOD(get_Categories)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CCategoryMap, ICategoryMap, ICategoryMapPtr)

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CStatus, IStatus, _T("Status"), &m_spStatus)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CCategory, ICategoryPtr, _T("Categories/Category"), &m_vCategories)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	IStatusPtr					m_spStatus;
	std::vector<ICategoryPtr>	m_vCategories;
};

#endif
