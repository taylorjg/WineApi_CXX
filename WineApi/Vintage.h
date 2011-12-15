#ifndef __VINTAGE_H_
#define __VINTAGE_H_

#include "resource.h"
#include "Ratings.h"

class ATL_NO_VTABLE CVintage : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IVintage, &IID_IVintage, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CVintage () :
		m_lId (0)
	{
		ATLTRACE (_T("CVintage::CVintage - %p\n"), this);
	}
	~CVintage ()
	{
		ATLTRACE (_T("CVintage::~CVintage - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CVintage)
	COM_INTERFACE_ENTRY(IVintage)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IVintage
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_Ratings)(IRatings** p_ppRatings);

DECLARE_CREATE_INSTANCE_METHODS (CVintage, IVintage, IVintagePtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CRatings, IRatings, _T("Ratings"), &m_spRatings)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

private:
	long		m_lId;
	_bstr_t		m_sbstrName;
	_bstr_t		m_sbstrUrl;
	IRatingsPtr	m_spRatings;
};

#endif
