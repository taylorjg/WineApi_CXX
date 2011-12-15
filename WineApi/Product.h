#ifndef __PRODUCT_H_
#define __PRODUCT_H_

#include "resource.h"
#include "GeoLocation.h"
#include "Appellation.h"
#include "Varietal.h"
#include "Vineyard.h"
#include "ProductAttribute.h"
#include "Label.h"
#include "Ratings.h"
#include "Retail.h"
#include "Vintages.h"
#include "Community.h"

class ATL_NO_VTABLE CProduct : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IProduct, &IID_IProduct, &LIBID_WineApi>,
	public ISupportErrorInfo,
	public IEntityMetadata
{
public:
	CProduct () :
		m_lId (0),
		m_dblPriceMin (0.0f),
		m_dblPriceMax (0.0f),
		m_dblPriceRetail (0.0f)
	{
		ATLTRACE (_T("CProduct::CProduct - %p\n"), this);
	}
	~CProduct ()
	{
		ATLTRACE (_T("CProduct::~CProduct - %p\n"), this);
	}

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProduct)
	COM_INTERFACE_ENTRY(IProduct)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProduct
public:
	STDMETHOD(get_Id)(long* p_plId);
	STDMETHOD(get_Name)(BSTR* p_pbstrName);
	STDMETHOD(get_Description)(BSTR* p_pbstrDescription);
	STDMETHOD(get_Url)(BSTR* p_pbstrUrl);
	STDMETHOD(get_PriceMin)(double* p_dblPriceMin);
	STDMETHOD(get_PriceMax)(double* p_dblPriceMax);
	STDMETHOD(get_PriceRetail)(double* p_dblPriceRetail);
	STDMETHOD(get_Type)(BSTR* p_pbstrType);
	STDMETHOD(get_Year)(BSTR* p_pbstrYear);
	STDMETHOD(get_GeoLocation)(IGeoLocation** p_ppGeoLocation);
	STDMETHOD(get_Appellation)(IAppellation** p_ppAppellation);
	STDMETHOD(get_Varietal)(IVarietal** p_ppVarietal);
	STDMETHOD(get_Vineyard)(IVineyard** p_ppVineyard);
	STDMETHOD(get_Ratings)(IRatings** p_ppRatings);
	STDMETHOD(get_Retail)(IRetail** p_ppRetail);
	STDMETHOD(get_Vintages)(IVintages** p_ppVintages);
	STDMETHOD(get_Community)(ICommunity** p_ppCommunity);
	STDMETHOD(get_ProductAttributes)(IObjectCollection** p_ppObjectCollection);
	STDMETHOD(get_Labels)(IObjectCollection** p_ppObjectCollection);

DECLARE_CREATE_INSTANCE_METHODS (CProduct, IProduct, IProductPtr)

BEGIN_PROPERTY_DESCRIPTOR_TABLE ()
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Id"),			&m_lId)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Name"),		&m_sbstrName)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Description"),	&m_sbstrDescription)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Url"),			&m_sbstrUrl)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("PriceMin"),	&m_dblPriceMin)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("PriceMax"),	&m_dblPriceMax)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("PriceRetail"),	&m_dblPriceRetail)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Type"),		&m_sbstrType)
    PROPERTY_DESCRIPTOR_TABLE_ENTRY (_T("Year"),		&m_sbstrYear)
END_PROPERTY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CGeoLocation, IGeoLocation, _T("GeoLocation"), &m_spGeoLocation)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CAppellation, IAppellation, _T("Appellation"), &m_spAppellation)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CVarietal, IVarietal, _T("Varietal"), &m_spVarietal)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CVineyard, IVineyard, _T("Vineyard"), &m_spVineyard)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CRatings, IRatings, _T("Ratings"), &m_spRatings)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CRetail, IRetail, _T("Retail"), &m_spRetail)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CVintages, IVintages, _T("Vintages"), &m_spVintages)
    CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY (CCommunity, ICommunity, _T("Community"), &m_spCommunity)
END_CHILD_ENTITY_DESCRIPTOR_TABLE ()

BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CProductAttribute, IProductAttributePtr, _T("ProductAttributes/ProductAttribute"), &m_vProductAttributes)
    CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY (CLabel, ILabelPtr, _T("Labels/Label"), &m_vLabels)
END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE ()

private:
	long								m_lId;
	_bstr_t								m_sbstrName;
	_bstr_t								m_sbstrDescription;
	_bstr_t								m_sbstrUrl;
	double								m_dblPriceMin;
	double								m_dblPriceMax;
	double								m_dblPriceRetail;
	_bstr_t								m_sbstrType;
	_bstr_t								m_sbstrYear;
	IGeoLocationPtr						m_spGeoLocation;
	IAppellationPtr						m_spAppellation;
	IVarietalPtr						m_spVarietal;
	IVineyardPtr						m_spVineyard;
	IRatingsPtr							m_spRatings;
	IRetailPtr							m_spRetail;
	IVintagesPtr						m_spVintages;
	ICommunityPtr						m_spCommunity;
	std::vector<IProductAttributePtr>	m_vProductAttributes;
	std::vector<ILabelPtr>				m_vLabels;
};

#endif
