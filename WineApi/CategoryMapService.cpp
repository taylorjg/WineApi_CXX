#include "stdafx.h"
#include "CategoryMapService.h"
#include "SafeArrayHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IConfig
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
STDMETHODIMP CCategoryMapService::Execute (ICategoryMap** p_ppCategoryMap)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	ICategoryMapPtr l_spCategoryMap = ExecuteHelper ();

	if (l_spCategoryMap) {
		*p_ppCategoryMap = l_spCategoryMap;
		(*p_ppCategoryMap)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: CategoryFilter1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::CategoryFilter1 (
	long p_lId1,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::CategoryFilter2 (
	long p_lId1,
	long p_lId2,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::CategoryFilter3 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::CategoryFilter4 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::CategoryFilter5 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	long p_lId5,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::CategoryFilter (
	SAFEARRAY* p_psa,
	ICategoryMapService** p_ppSelf)
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
//* Function Name: Search1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Search1 (
	BSTR p_bstrTerm1,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::Search2 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::Search3 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::Search4 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	BSTR p_bstrTerm4,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::Search5 (
	BSTR p_bstrTerm1,
	BSTR p_bstrTerm2,
	BSTR p_bstrTerm3,
	BSTR p_bstrTerm4,
	BSTR p_bstrTerm5,
	ICategoryMapService** p_ppSelf)
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
STDMETHODIMP CCategoryMapService::Search (
	SAFEARRAY* p_psa,
	ICategoryMapService** p_ppSelf)
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
//* Function Name: Show
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show (long p_lId, ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	wchar_t l_wszId[20] = {0};

#if _MSC_VER >= 1400
	(void) _snwprintf_s (l_wszId, 20, L"%d", p_lId);
#else
	(void) _snwprintf (l_wszId, 20, L"%d", p_lId);
#endif

	AppendNameValueToQueryString (L"show", l_wszId);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}


//*****************************************************************************
//* Function Name: AppendCategoryFilter
//*   Description: 
//*****************************************************************************
HRESULT CCategoryMapService::AppendCategoryFilter (
	const std::vector<_variant_t>&	p_vValues,
	ICategoryMapService**			p_ppSelf)
{
	return AppendFilter (
		L"categories",
		p_vValues,
		this->GetUnknown (),
		p_ppSelf);
}


//*****************************************************************************
//* Function Name: AppendSearch
//*   Description: 
//*****************************************************************************
HRESULT CCategoryMapService::AppendSearch (
	const std::vector<_variant_t>&	p_vValues,
	ICategoryMapService**			p_ppSelf)
{
	_bstr_t l_sbstrJoinedValues = JoinValues (p_vValues);

	AppendNameValueToQueryString (L"search", l_sbstrJoinedValues);

	return QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}
