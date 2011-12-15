#ifndef __VARIETAL_H_
#define __VARIETAL_H_

#include "resource.h"
#include "WineType.h"

class ATL_NO_VTABLE CVarietal : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IVarietal, &IID_IVarietal, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CVarietal () :
		m_lId (0)
	{
		ATLTRACE (_T("CVarietal::CVarietal - %p\n"), this);
	}
	~CVarietal ()
	{
		ATLTRACE (_T("CVarietal::~CVarietal - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CVarietal)
	COM_INTERFACE_ENTRY(IVarietal)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IVarietal
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_WineType)(IWineType** p_ppWineType);

DECLARE_CREATE_INSTANCE_METHODS (CVarietal, IVarietal, IVarietalPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CWineType, IWineType, _T("WineType"), &m_spWineType)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long			m_lId;
	_bstr_t			m_sbstrName;
	_bstr_t			m_sbstrUrl;
	IWineTypePtr	m_spWineType;
};

#endif
