#ifndef __OBJECTCOLLECTION_H_
#define __OBJECTCOLLECTION_H_

#include "resource.h"

class ATL_NO_VTABLE CObjectCollection : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IObjectCollection, &IID_IObjectCollection, &LIBID_WineApi>,
	public ISupportErrorInfo
{
public:
	CObjectCollection () :
		m_lNumItems (0),
		m_svara (NULL)
	{
		ATLTRACE (_T("CObjectCollection::CObjectCollection - %p\n"), this);
	}
	~CObjectCollection ()
	{
		ATLTRACE (_T("CObjectCollection::~CObjectCollection - %p\n"), this);

		delete[] m_svara;
		m_svara = NULL;
	}

	void Init (long p_lNumItems, _variant_t* p_svara)
	{
		m_lNumItems = p_lNumItems;
		m_svara = p_svara;
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CObjectCollection)
	COM_INTERFACE_ENTRY(IObjectCollection)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IObjectCollection
public:
	STDMETHOD(get_Count)(long* p_lCount);
	STDMETHOD(get_Item)(long p_lIndex, IDispatch** p_ppDispatch);
	STDMETHOD(get__NewEnum)(IUnknown** p_ppEnum);

private:
	long m_lNumItems;
	_variant_t* m_svara;
};

#endif
