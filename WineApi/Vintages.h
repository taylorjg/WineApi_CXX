#ifndef __VINTAGES_H_
#define __VINTAGES_H_

#include "resource.h"
#include "Vintage.h"

class ATL_NO_VTABLE CVintages : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IVintages, &IID_IVintages, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CVintages ()
	{
		ATLTRACE (_T("CVintages::CVintages - %p\n"), this);
	}
	~CVintages ()
	{
		ATLTRACE (_T("CVintages::~CVintages - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CVintages)
	COM_INTERFACE_ENTRY(IVintages)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IVintages
public:
	STDMETHOD(get_List)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CVintages, IVintages, IVintagesPtr)

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CVintage, IVintagePtr, _T("List/Vintage"), &m_vVintages)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	std::vector<IVintagePtr> m_vVintages;
};

#endif
