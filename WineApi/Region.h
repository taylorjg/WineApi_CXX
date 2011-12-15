#ifndef __REGION_H_
#define __REGION_H_

#include "resource.h"
#include "Area.h"

class ATL_NO_VTABLE CRegion : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IRegion, &IID_IRegion, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CRegion () :
		m_lId (0)
	{
		ATLTRACE (_T("CRegion::CRegion - %p\n"), this);
		ATLTRACE (_T("CRegion::CRegion - %p\n"), this);
	}
	~CRegion ()
	{
		ATLTRACE (_T("CRegion::~CRegion - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRegion)
	COM_INTERFACE_ENTRY(IRegion)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IRegion
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Area)(IArea** p_ppArea);

DECLARE_CREATE_INSTANCE_METHODS (CRegion, IRegion, IRegionPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CArea, IArea, _T("Area"), &m_spArea)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long		m_lId;
	_bstr_t		m_sbstrName;
	_bstr_t		m_sbstrUrl;
	IAreaPtr	m_spArea;
};

#endif
