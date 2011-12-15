#ifndef __COMMUNITYREVIEW_H_
#define __COMMUNITYREVIEW_H_

#include "resource.h"

class ATL_NO_VTABLE CCommunityReview : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICommunityReview, &IID_ICommunityReview, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCommunityReview () :
		m_lId (0),
		m_lScore (0)
	{
		ATLTRACE (_T("CCommunityReview::CCommunityReview - %p\n"), this);
	}
	~CCommunityReview ()
	{
		ATLTRACE (_T("CCommunityReview::~CCommunityReview - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCommunityReview)
	COM_INTERFACE_ENTRY(ICommunityReview)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICommunityReview
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Score)(long* p_plScore);
	STDMETHOD(get_Description)(BSTR* p_pbstrDescription);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CCommunityReview, ICommunityReview, ICommunityReviewPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),			&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),		&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Score"),		&m_lScore)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Description"),	&m_sbstrDescription)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),			&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	long	m_lId;
	_bstr_t	m_sbstrName;
	long	m_lScore;
	_bstr_t	m_sbstrDescription;
	_bstr_t	m_sbstrUrl;
};

#endif
