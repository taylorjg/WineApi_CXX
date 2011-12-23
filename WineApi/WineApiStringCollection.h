#ifndef __WINEAPISTRINGCOLLECTION_H_
#define __WINEAPISTRINGCOLLECTION_H_

#include "resource.h"

class ATL_NO_VTABLE CWineApiStringCollection : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IWineApiStringCollection, &IID_IWineApiStringCollection, &LIBID_WineApi>,
	public ISupportErrorInfo
{
public:
	CWineApiStringCollection () :
		m_lNumItems (0)
	{
		ATLTRACE (_T("CWineApiStringCollection::CWineApiStringCollection - %p\n"), this);
	}
	~CWineApiStringCollection ()
	{
		ATLTRACE (_T("CWineApiStringCollection::~CWineApiStringCollection - %p\n"), this);
	}

	void Init (long p_lNumItems, _variant_t* p_svara)
	{
		m_lNumItems = p_lNumItems;
		m_svara.reset (p_svara);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CWineApiStringCollection)
	COM_INTERFACE_ENTRY(IWineApiStringCollection)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IWineApiStringCollection
public:
	STDMETHOD(get_Count)(long* p_lCount);
	STDMETHOD(get_Item)(long p_lIndex, BSTR* p_pbstrItem);
	STDMETHOD(get__NewEnum)(IUnknown** p_ppEnum);

private:
	long m_lNumItems;
	boost::scoped_array<_variant_t> m_svara;
};

#endif
