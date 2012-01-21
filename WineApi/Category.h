#ifndef __CATEGORY_H_
#define __CATEGORY_H_

#include "resource.h"
#include "IEntityMetadata.h"
#include "CreateInstanceHelpers.h"
#include "Refinement.h"
class CEntityDecoder;

class ATL_NO_VTABLE CCategory : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<ICategory, &IID_ICategory, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CCategory () :
		m_lId (0)
	{
		ATLTRACE (_T("CCategory::CCategory - %p\n"), this);
	}
	~CCategory ()
	{
		ATLTRACE (_T("CCategory::~CCategory - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCategory)
	COM_INTERFACE_ENTRY(ICategory)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICategory
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Refinements)(IWineApiObjectCollection** p_ppWineApiObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CCategory, ICategory, ICategoryPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),		&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),	&m_sbstrName)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CRefinement, IRefinementPtr, _T("Refinements/Refinement"), &m_vRefinements)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long						m_lId;
	_bstr_t						m_sbstrName;
	std::vector<IRefinementPtr>	m_vRefinements;
};

#endif
