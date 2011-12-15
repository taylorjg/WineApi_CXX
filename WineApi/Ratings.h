#ifndef __RATINGS_H_
#define __RATINGS_H_

#include "resource.h"
#include "Rating.h"

class ATL_NO_VTABLE CRatings : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IRatings, &IID_IRatings, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CRatings () :
		m_lHighestScore (0)
	{
		ATLTRACE (_T("CRatings::CRatings - %p\n"), this);
	}
	~CRatings ()
	{
		ATLTRACE (_T("CRatings::~CRatings - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRatings)
	COM_INTERFACE_ENTRY(IRatings)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IRatings
public:
	STDMETHOD(get_HighestScore)(long* p_plHighestScore);
	STDMETHOD(get_List)(IObjectCollection** p_ppObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CRatings, IRatings, IRatingsPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("HighestScore"), &m_lHighestScore)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CRating, IRatingPtr, _T("List/Ratings"), &m_vRatings)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long					m_lHighestScore;
	std::vector<IRatingPtr>	m_vRatings;
};

#endif
