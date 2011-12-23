#ifndef __WINEAPIOBJECTCOLLECTION_H_
#define __WINEAPIOBJECTCOLLECTION_H_

#include "resource.h"

class ATL_NO_VTABLE CWineApiObjectCollection : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IWineApiObjectCollection, &IID_IWineApiObjectCollection, &LIBID_WineApi>,
	public ISupportErrorInfo
{
public:
	CWineApiObjectCollection () :
		m_lNumItems (0)
	{
		ATLTRACE (_T("CWineApiObjectCollection::CWineApiObjectCollection - %p\n"), this);
	}
	~CWineApiObjectCollection ()
	{
		ATLTRACE (_T("CWineApiObjectCollection::~CWineApiObjectCollection - %p\n"), this);
	}

	void Init (long p_lNumItems, _variant_t* p_svara)
	{
		m_lNumItems = p_lNumItems;
		m_svara.reset (p_svara);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CWineApiObjectCollection)
	COM_INTERFACE_ENTRY(IWineApiObjectCollection)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IWineApiObjectCollection
public:
	STDMETHOD(get_Count)(long* p_lCount);
	STDMETHOD(get_Item)(long p_lIndex, IDispatch** p_ppDispatch);
	STDMETHOD(get__NewEnum)(IUnknown** p_ppEnum);

private:
	long m_lNumItems;
	boost::scoped_array<_variant_t> m_svara;
};

#endif
