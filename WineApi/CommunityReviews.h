#ifndef __COMMUNITYREVIEWS_H_
#define __COMMUNITYREVIEWS_H_

#include "resource.h"
#include "CommunityReview.h"

class ATL_NO_VTABLE CCommunityReviews : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICommunityReviews, &IID_ICommunityReviews, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCommunityReviews () :
		m_lHighestScore (0)
	{
		ATLTRACE (_T("CCommunityReviews::CCommunityReviews - %p\n"), this);
	}
	~CCommunityReviews ()
	{
		ATLTRACE (_T("CCommunityReviews::~CCommunityReviews - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCommunityReviews)
	COM_INTERFACE_ENTRY(ICommunityReviews)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICommunityReviews
public:
	STDMETHOD(get_HighestScore)(long* p_plHighestScore);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_List)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CCommunityReviews, ICommunityReviews, ICommunityReviewsPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("HighestScore"),	&m_lHighestScore)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),				&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CCommunityReview, ICommunityReviewPtr, _T("List/CommunityReview"), &m_vCommunityReviews)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long								m_lHighestScore;
	_bstr_t								m_sbstrUrl;
	std::vector<ICommunityReviewPtr>	m_vCommunityReviews;
};

#endif
