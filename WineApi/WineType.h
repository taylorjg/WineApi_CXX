#ifndef __WINETYPE_H_
#define __WINETYPE_H_

#include "resource.h"

class ATL_NO_VTABLE CWineType : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IWineType, &IID_IWineType, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CWineType () :
		m_lId (0)
	{
		ATLTRACE (_T("CWineType::CWineType - %p\n"), this);
	}
	~CWineType ()
	{
		ATLTRACE (_T("CWineType::~CWineType - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CWineType)
	COM_INTERFACE_ENTRY(IWineType)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IWineType
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CWineType, IWineType, IWineTypePtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	long	m_lId;
	_bstr_t	m_sbstrName;
	_bstr_t	m_sbstrUrl;
};

#endif
