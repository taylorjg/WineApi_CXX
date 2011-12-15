#ifndef __COMMUNITY_H_
#define __COMMUNITY_H_

#include "resource.h"
#include "CommunityReviews.h"

class ATL_NO_VTABLE CCommunity : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICommunity, &IID_ICommunity, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCommunity ()
	{
		ATLTRACE (_T("CCommunity::CCommunity - %p\n"), this);
	}
	~CCommunity ()
	{
		ATLTRACE (_T("CCommunity::~CCommunity - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCommunity)
	COM_INTERFACE_ENTRY(ICommunity)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICommunity
public:
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Reviews)(ICommunityReviews** p_ppCommunityReviews);

DECLARE_CREATE_INSTANCE_METHODS (CCommunity, ICommunity, ICommunityPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"), &m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CCommunityReviews, ICommunityReviews, _T("Reviews"), &m_spCommunityReviews)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	_bstr_t					m_sbstrUrl;
	// Lists of type CommunityLists ?
	ICommunityReviewsPtr	m_spCommunityReviews;
};

#endif
