#ifndef __STATUS_H_
#define __STATUS_H_

#include "resource.h"

class ATL_NO_VTABLE CStatus : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IStatus, &IID_IStatus, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CStatus () :
		m_lReturnCode (0)
	{
		ATLTRACE (_T("CStatus::CStatus - %p\n"), this);
	}
	~CStatus ()
	{
		ATLTRACE (_T("CStatus::~CStatus - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CStatus)
	COM_INTERFACE_ENTRY(IStatus)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IStatus
public:
	STDMETHOD(get_ReturnCode)(long* p_plReturnCode);
	STDMETHOD(get_Messages)(IWineApiStringCollection** p_ppWineApiStringCollection);

DECLARE_CREATE_INSTANCE_METHODS (CStatus, IStatus, IStatusPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("ReturnCode"), &m_lReturnCode)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_PROPERTY_ARRAY_DESCRIPTOR_TABLE ()
    PROPERTY_ARRAY_DESCRIPTOR_TABLE_ENTRY (_T("Messages/a:string"), &m_vMessages)
END_PROPERTY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long					m_lReturnCode;
	std::vector<_bstr_t>	m_vMessages;
};

#endif
