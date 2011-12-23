#include "stdafx.h"
#include "CatalogService.h"
#include "SafeArrayHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_ICatalogService
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: Execute
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Execute (ICatalog** p_ppCatalog)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	ICatalogPtr l_spCatalog = ExecuteHelper ();

	if (l_spCatalog) {
		*p_ppCatalog = l_spCatalog;
		(*p_ppCatalog)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: Offset
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Offset (
	long p_lOffset,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	AppendNameValueToQueryString (L"offset", p_lOffset);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: Size
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Size (
	long p_lSize,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	AppendNameValueToQueryString (L"size", p_lSize);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: Search1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search1 (
	BSTR p_bstrTerm1,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (_bstr_t (p_bstrTerm1, true /* fCopy */));

	return AppendSearch (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Search2
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search2 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (_bstr_t (p_bstrTerm1, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm2, true /* fCopy */));

	return AppendSearch (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Search3
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search3 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (_bstr_t (p_bstrTerm1, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm2, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm3, true /* fCopy */));

	return AppendSearch (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Search4
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search4 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	BSTR p_bstrTerm4,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (_bstr_t (p_bstrTerm1, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm2, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm3, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm4, true /* fCopy */));

	return AppendSearch (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Search5
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search5 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	BSTR p_bstrTerm4,
	BSTR p_bstrTerm5,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (_bstr_t (p_bstrTerm1, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm2, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm3, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm4, true /* fCopy */));
	l_vValues.push_back (_bstr_t (p_bstrTerm5, true /* fCopy */));

	return AppendSearch (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Search
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::Search (
	SAFEARRAY* p_psa,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;

	HRESULT l_hr = SafeArrayToVector (p_psa, l_vValues);

	if (SUCCEEDED (l_hr)) {
		l_hr = AppendSearch (l_vValues, p_ppSelf);
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: CategoryFilter1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter1 (
	long p_lId1,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);

	return AppendCategoryFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: CategoryFilter2
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter2 (
	long p_lId1,
	long p_lId2,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);

	return AppendCategoryFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: CategoryFilter3
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter3 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);

	return AppendCategoryFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: CategoryFilter4
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter4 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);
	l_vValues.push_back (p_lId4);

	return AppendCategoryFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: CategoryFilter5
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter5 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	long p_lId5,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);
	l_vValues.push_back (p_lId4);
	l_vValues.push_back (p_lId5);

	return AppendCategoryFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: CategoryFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::CategoryFilter (
	SAFEARRAY* p_psa,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;

	HRESULT l_hr = SafeArrayToVector (p_psa, l_vValues);

	if (SUCCEEDED (l_hr)) {
		l_hr = AppendCategoryFilter (l_vValues, p_ppSelf);
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: RatingFromFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::RatingFromFilter (
	long p_lFrom,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	wchar_t l_wszValue[100] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszValue, 100, L"rating(%ld)", p_lFrom);
#else
	(void) _snwprintf (l_wszValue, 100, L"rating(%ld)", p_lFrom);
#endif

	AppendNameValueToQueryString (L"filter", l_wszValue);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: RatingFromToFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::RatingFromToFilter (
	long p_lFrom,
	long p_lTo,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	wchar_t l_wszValue[100] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszValue, 100, L"rating(%ld|%ld)", p_lFrom, p_lTo);
#else
	(void) _snwprintf (l_wszValue, 100, L"rating(%ld|%ld)", p_lFrom, p_lTo);
#endif

	AppendNameValueToQueryString (L"filter", l_wszValue);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: PriceFromFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::PriceFromFilter (
	double p_dblFrom,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	wchar_t l_wszValue[100] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszValue, 100, L"price(%f)", p_dblFrom);
#else
	(void) _snwprintf (l_wszValue, 100, L"price(%f)", p_dblFrom);
#endif

	AppendNameValueToQueryString (L"filter", l_wszValue);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: PriceFromToFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::PriceFromToFilter (
	double p_dblFrom,
	double p_dblTo,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	wchar_t l_wszValue[100] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszValue, 100, L"price(%f|%f)", p_dblFrom, p_dblTo);
#else
	(void) _snwprintf (l_wszValue, 100, L"price(%f|%f)", p_dblFrom, p_dblTo);
#endif

	AppendNameValueToQueryString (L"filter", l_wszValue);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: ProductFilter1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter1 (
	long p_lId1,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);

	return AppendProductFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: ProductFilter2
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter2 (
	long p_lId1,
	long p_lId2,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);

	return AppendProductFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: ProductFilter3
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter3 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);

	return AppendProductFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: ProductFilter4
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter4 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);
	l_vValues.push_back (p_lId4);

	return AppendProductFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: ProductFilter5
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter5 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	long p_lId5,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lId1);
	l_vValues.push_back (p_lId2);
	l_vValues.push_back (p_lId3);
	l_vValues.push_back (p_lId4);
	l_vValues.push_back (p_lId5);

	return AppendProductFilter (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: ProductFilter
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::ProductFilter (
	SAFEARRAY* p_psa,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;

	HRESULT l_hr = SafeArrayToVector (p_psa, l_vValues);

	if (SUCCEEDED (l_hr)) {
		l_hr = AppendProductFilter (l_vValues, p_ppSelf);
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: State
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::State (
	BSTR p_bstrState,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	AppendNameValueToQueryString (L"state", p_bstrState);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: SortBy
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::SortBy (
	enum SortOptions p_eSortOption,
	enum SortDirection p_eSortDirection,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	_bstr_t l_sbstrSortOption;
	_bstr_t l_sbstrSortDirection;

	switch (p_eSortOption) {

		case SortOptionPopularity:
			l_sbstrSortOption = L"popularity";
			break;

		case SortOptionRating:
			l_sbstrSortOption = L"rating";
			break;

		case SortOptionVintage:
			l_sbstrSortOption = L"vintage";
			break;

		case SortOptionWinery:
			l_sbstrSortOption = L"winery";
			break;

		case SortOptionName:
			l_sbstrSortOption = L"name";
			break;

		case SortOptionPrice:
			l_sbstrSortOption = L"price";
			break;

		case SortOptionSaving:
			l_sbstrSortOption = L"saving";
			break;

		case SortOptionJustIn:
			l_sbstrSortOption = L"justIn";
			break;

		default:
			return E_INVALIDARG;
			break;
	}

	switch (p_eSortDirection) {

		case SortDirectionAscending:
			l_sbstrSortDirection = L"ascending";
			break;

		case SortDirectionDescending:
			l_sbstrSortDirection = L"descending";
			break;

		default:
			return E_INVALIDARG;
			break;
	}

	_bstr_t l_sbstrValue;
	l_sbstrValue  = l_sbstrSortOption;
	l_sbstrValue += L"|";
	l_sbstrValue += l_sbstrSortDirection;

	AppendNameValueToQueryString (L"sort", l_sbstrValue);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: InStock
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCatalogService::InStock (
	VARIANT_BOOL p_vbInStock,
	ICatalogService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	bool l_bInStock = (p_vbInStock != VARIANT_FALSE);

	AppendNameValueToQueryString (L"instock", (l_bInStock) ? L"true" : L"false");

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: AppendCategoryFilter
//*   Description: 
//*****************************************************************************
HRESULT CCatalogService::AppendCategoryFilter (
	const std::vector<_variant_t>&	p_vValues,
	ICatalogService**				p_ppSelf)
{
	return AppendFilter (
		L"categories",
		p_vValues,
		this->GetUnknown (),
		p_ppSelf);
}


//*****************************************************************************
//* Function Name: AppendProductFilter
//*   Description: 
//*****************************************************************************
HRESULT CCatalogService::AppendProductFilter (
	const std::vector<_variant_t>&	p_vValues,
	ICatalogService**				p_ppSelf)
{
	return AppendFilter (
		L"product",
		p_vValues,
		this->GetUnknown (),
		p_ppSelf);
}


//*****************************************************************************
//* Function Name: AppendSearch
//*   Description: 
//*****************************************************************************
HRESULT CCatalogService::AppendSearch (
	const std::vector<_variant_t>&	p_vValues,
	ICatalogService**				p_ppSelf)
{
	_bstr_t l_sbstrJoinedValues = JoinValues (p_vValues);

	AppendNameValueToQueryString (L"search", l_sbstrJoinedValues);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}
