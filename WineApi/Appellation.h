#ifndef __APPELLATION_H_
#define __APPELLATION_H_

#include "resource.h"
#include "Region.h"

class ATL_NO_VTABLE CAppellation : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IAppellation, &IID_IAppellation, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CAppellation () :
		m_lId (0)
	{
		ATLTRACE (_T("CAppellation::CAppellation - %p\n"), this);
	}
	~CAppellation ()
	{
		ATLTRACE (_T("CAppellation::~CAppellation - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAppellation)
	COM_INTERFACE_ENTRY(IAppellation)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAppellation
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Region)(IRegion** p_ppRegion);

DECLARE_CREATE_INSTANCE_METHODS (CAppellation, IAppellation, IAppellationPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CRegion, IRegion, _T("Region"), &m_spRegion)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long		m_lId;
	_bstr_t		m_sbstrName;
	_bstr_t		m_sbstrUrl;
	IRegionPtr	m_spRegion;
};

#endif
