#ifndef __ARTICLE_H_
#define __ARTICLE_H_

#include "resource.h"
#include "Footnote.h"

class ATL_NO_VTABLE CArticle : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IArticle, &IID_IArticle, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CArticle ()
	{
		ATLTRACE (_T("CArticle::CArticle - %p\n"), this);
	}
	~CArticle ()
	{
		ATLTRACE (_T("CArticle::~CArticle - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CArticle)
	COM_INTERFACE_ENTRY(IArticle)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IArticle
public:
	STDMETHOD(get_Id)(BSTR* p_pbstrId);
	STDMETHOD(get_Title)(BSTR* p_pbstrTitle);
	STDMETHOD(get_Abstract)(BSTR* p_pbstrAbstract);
	STDMETHOD(get_Content)(BSTR* p_pbstrContent);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Footnotes)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CArticle, IArticle, IArticlePtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),			&m_sbstrId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Title"),		&m_sbstrTitle)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),			&m_sbstrUrl)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Abstract"),	&m_sbstrAbstract)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Content"),		&m_sbstrContent)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CFootnote, IFootnotePtr, _T("Footnotes/Footnote"), &m_vFootnotes)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	_bstr_t						m_sbstrId;
	_bstr_t						m_sbstrTitle;
	_bstr_t						m_sbstrAbstract;
	_bstr_t						m_sbstrContent;
	_bstr_t						m_sbstrUrl;
	std::vector<IFootnotePtr>	m_vFootnotes;
};

#endif
