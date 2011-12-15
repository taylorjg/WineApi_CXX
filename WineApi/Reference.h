#ifndef __REFERENCE_H_
#define __REFERENCE_H_

#include "resource.h"
#include "Status.h"
#include "Book.h"

class ATL_NO_VTABLE CReference : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IReference, &IID_IReference, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CReference ()
	{
		ATLTRACE (_T("CReference::CReference - %p\n"), this);
	}
	~CReference ()
	{
		ATLTRACE (_T("CReference::~CReference - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CReference)
	COM_INTERFACE_ENTRY(IReference)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IReference
public:
	STDMETHOD(get_Status)(IStatus** p_ppStatus);
	STDMETHOD(get_Books)(IObjectCollection** p_ppObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CReference, IReference, IReferencePtr)

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CStatus, IStatus, _T("Status"), &m_spStatus)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CBook, IBookPtr, _T("Books/Book"), &m_vBooks)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	IStatusPtr				m_spStatus;
	std::vector<IBookPtr>	m_vBooks;
};

#endif
