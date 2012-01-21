#ifndef __PRODUCTS_H_
#define __PRODUCTS_H_

#include "resource.h"
#include "Product.h"

class ATL_NO_VTABLE CProducts : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IProducts, &IID_IProducts, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CProducts () :
		m_lTotal (0),
		m_lOffset (0)
	{
		ATLTRACE (_T("CProducts::CProducts - %p\n"), this);
	}
	~CProducts ()
	{
		ATLTRACE (_T("CProducts::~CProducts - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProducts)
	COM_INTERFACE_ENTRY(IProducts)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProducts
public:
	STDMETHOD(get_Total)(long* p_plTotal);
	STDMETHOD(get_Offset)(long* p_plOffset);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_List)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CProducts, IProducts, IProductsPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Total"),	&m_lTotal)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Offset"),	&m_lOffset)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CProduct, IProductPtr, _T("List/Product"), &m_vProducts)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long						m_lTotal;
	long						m_lOffset;
	_bstr_t						m_sbstrUrl;
	std::vector<IProductPtr>	m_vProducts;
};

#endif
