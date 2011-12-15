#ifndef __RETAIL_H_
#define __RETAIL_H_

#include "resource.h"

class ATL_NO_VTABLE CRetail : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IRetail, &IID_IRetail, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CRetail () :
		m_bInStock (false),
		m_dblPrice (0.0f)
	{
		ATLTRACE (_T("CRetail::CRetail - %p\n"), this);
	}
	~CRetail ()
	{
		ATLTRACE (_T("CRetail::~CRetail - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRetail)
	COM_INTERFACE_ENTRY(IRetail)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IRetail
public:
	STDMETHOD(get_Sku)(BSTR* p_pbstrSku);
	STDMETHOD(get_InStock)(VARIANT_BOOL* p_pvbInStock);
	STDMETHOD(get_Price)(double* p_pdblPrice);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CRetail, IRetail, IRetailPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Sku"),		&m_sbstrSku)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("InStock"),	&m_bInStock)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Price"),	&m_dblPrice)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	_bstr_t	m_sbstrSku;
	bool	m_bInStock;
	double	m_dblPrice;
	_bstr_t	m_sbstrUrl;
};

#endif
