#ifndef __RATING_H_
#define __RATING_H_

#include "resource.h"

class ATL_NO_VTABLE CRating : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IRating, &IID_IRating, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CRating () :
		m_lId (0)
	{
		ATLTRACE (_T("CRating::CRating - %p\n"), this);
	}
	~CRating ()
	{
		ATLTRACE (_T("CRating::~CRating - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CRating)
	COM_INTERFACE_ENTRY(IRating)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IRating
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Score)(long* p_plScore);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CRating, IRating, IRatingPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Score"),	&m_lScore)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	long	m_lId;
	_bstr_t	m_sbstrName;
	long	m_lScore;
	_bstr_t	m_sbstrUrl;
};

#endif
