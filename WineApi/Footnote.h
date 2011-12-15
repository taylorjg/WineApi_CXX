#ifndef __FOOTNOTE_H_
#define __FOOTNOTE_H_

#include "resource.h"

class ATL_NO_VTABLE CFootnote : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IFootnote, &IID_IFootnote, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CFootnote ()
	{
		ATLTRACE (_T("CFootnote::CFootnote - %p\n"), this);
	}
	~CFootnote ()
	{
		ATLTRACE (_T("CFootnote::~CFootnote - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFootnote)
	COM_INTERFACE_ENTRY(IFootnote)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IFootnote
public:
	STDMETHOD(get_Id)(BSTR* p_pbstrId);
	STDMETHOD(get_Title)(BSTR* p_pbstrTitle);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CFootnote, IFootnote, IFootnotePtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_sbstrId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Title"),	&m_sbstrTitle)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	_bstr_t m_sbstrId;
	_bstr_t m_sbstrTitle;
	_bstr_t m_sbstrUrl;
};

#endif
