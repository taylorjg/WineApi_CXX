#ifndef __STRINGCOLLECTION_H_
#define __STRINGCOLLECTION_H_

#include "resource.h"

class ATL_NO_VTABLE CStringCollection : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IStringCollection, &IID_IStringCollection, &LIBID_WineApi>,
	public ISupportErrorInfo
{
public:
	CStringCollection () :
		m_lNumItems (0),
		m_svara (NULL)
	{
		ATLTRACE (_T("CStringCollection::CStringCollection - %p\n"), this);
	}
	~CStringCollection ()
	{
		ATLTRACE (_T("CStringCollection::~CStringCollection - %p\n"), this);

		delete[] m_svara;
		m_svara = NULL;
	}

	void Init (long p_lNumItems, _variant_t* p_svara)
	{
		m_lNumItems = p_lNumItems;
		m_svara = p_svara;
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CStringCollection)
	COM_INTERFACE_ENTRY(IStringCollection)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IStringCollection
public:
	STDMETHOD(get_Count)(long* p_lCount);
	STDMETHOD(get_Item)(long p_lIndex, BSTR* p_pbstrItem);
	STDMETHOD(get__NewEnum)(IUnknown** p_ppEnum);

private:
	long		m_lNumItems;
	_variant_t*	m_svara;
};

#endif
