#ifndef __GEOLOCATION_H_
#define __GEOLOCATION_H_

#include "resource.h"

class ATL_NO_VTABLE CGeoLocation : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IGeoLocation, &IID_IGeoLocation, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CGeoLocation () :
		m_lLatitude (0),
		m_lLongitude (0)
	{
		ATLTRACE (_T("CGeoLocation::CGeoLocation - %p\n"), this);
	}
	~CGeoLocation ()
	{
		ATLTRACE (_T("CGeoLocation::~CGeoLocation - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CGeoLocation)
	COM_INTERFACE_ENTRY(IGeoLocation)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IGeoLocation
public:
	STDMETHOD(get_Latitude)(long* p_lLatitude);
	STDMETHOD(get_Longitude)(long* p_lLongitude);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CGeoLocation, IGeoLocation, IGeoLocationPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Latitude"),	&m_lLatitude)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Longitude"),	&m_lLongitude)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),			&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	long	m_lLatitude;
	long	m_lLongitude;
	_bstr_t	m_sbstrUrl;
};

#endif
