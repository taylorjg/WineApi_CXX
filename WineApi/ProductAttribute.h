#ifndef __PRODUCTATTRIBUTE_H_
#define __PRODUCTATTRIBUTE_H_

#include "resource.h"

class ATL_NO_VTABLE CProductAttribute : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IProductAttribute, &IID_IProductAttribute, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CProductAttribute () :
		m_lId (0)
	{
		ATLTRACE (_T("CProductAttribute::CProductAttribute - %p\n"), this);
	}
	~CProductAttribute ()
	{
		ATLTRACE (_T("CProductAttribute::~CProductAttribute - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProductAttribute)
	COM_INTERFACE_ENTRY(IProductAttribute)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProductAttribute
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CProductAttribute, IProductAttribute, IProductAttributePtr)

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
