#ifndef __BOOK_H_
#define __BOOK_H_

#include "resource.h"
#include "Article.h"

class ATL_NO_VTABLE CBook : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IBook, &IID_IBook, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CBook ()
	{
		ATLTRACE (_T("CBook::CBook - %p\n"), this);
	}
	~CBook ()
	{
		ATLTRACE (_T("CBook::~CBook - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CBook)
	COM_INTERFACE_ENTRY(IBook)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IBook
public:
	STDMETHOD(get_Id)(BSTR* p_pbstrId);
	STDMETHOD(get_Title)(BSTR* p_pbstrTitle);
	STDMETHOD(get_Articles)(IObjectCollection** p_ppObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CBook, IBook, IBookPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_sbstrId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Title"),	&m_sbstrTitle)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CArticle, IArticlePtr, _T("Articles/Article"), &m_vArticles)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	_bstr_t						m_sbstrId;
	_bstr_t						m_sbstrTitle;
	std::vector<IArticlePtr>	m_vArticles;
};

#endif
