#ifndef __VINEYARD_H_
#define __VINEYARD_H_

#include "resource.h"
#include "GeoLocation.h"

class ATL_NO_VTABLE CVineyard : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IVineyard, &IID_IVineyard, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CVineyard () :
		m_lId (0)
	{
		ATLTRACE (_T("CVineyard::CVineyard - %p\n"), this);
	}
	~CVineyard ()
	{
		ATLTRACE (_T("CVineyard::~CVineyard - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CVineyard)
	COM_INTERFACE_ENTRY(IVineyard)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IVineyard
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_GeoLocation)(IGeoLocation** p_ppGeoLocation);

DECLARE_CREATE_INSTANCE_METHODS (CVineyard, IVineyard, IVineyardPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CGeoLocation, IGeoLocation, _T("GeoLocation"), &m_spGeoLocation)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long			m_lId;
	_bstr_t			m_sbstrName;
	_bstr_t			m_sbstrUrl;
	IGeoLocationPtr	m_spGeoLocation;
};

#endif
