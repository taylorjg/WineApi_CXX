#ifndef __AREA_H_
#define __AREA_H_

#include "resource.h"

class ATL_NO_VTABLE CArea : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IArea, &IID_IArea, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CArea () :
		m_lId (0)
	{
		ATLTRACE (_T("CArea::CArea - %p\n"), this);
	}
	~CArea ()
	{
		ATLTRACE (_T("CArea::~CArea - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CArea)
	COM_INTERFACE_ENTRY(IArea)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IArea
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Parent)(IArea** p_ppParent);

DECLARE_CREATE_INSTANCE_METHODS (CArea, IArea, IAreaPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CArea, IArea, _T("Parent"), &m_spParent)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long		m_lId;
	_bstr_t		m_sbstrName;
	_bstr_t		m_sbstrUrl;
	IAreaPtr	m_spParent;
};

#endif
