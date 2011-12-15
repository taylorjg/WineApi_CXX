#ifndef __LABEL_H_
#define __LABEL_H_

#include "resource.h"

class ATL_NO_VTABLE CLabel : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ILabel, &IID_ILabel, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CLabel ()
	{
		ATLTRACE (_T("CLabel::CLabel - %p\n"), this);
	}
	~CLabel ()
	{
		ATLTRACE (_T("CLabel::~CLabel - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CLabel)
	COM_INTERFACE_ENTRY(ILabel)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ILabel
public:
	STDMETHOD(get_Id)(BSTR* p_pbstrId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);

DECLARE_CREATE_INSTANCE_METHODS (CLabel, ILabel, ILabelPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_sbstrId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),		&m_sbstrUrl)
END_PROPERTY_DESCRIPTOR_TABLE ()

private:
	_bstr_t m_sbstrId;
	_bstr_t m_sbstrName;
	_bstr_t m_sbstrUrl;
};

#endif
