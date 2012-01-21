#include "stdafx.h"
#include "CategoryMapService.h"
#include "ActiveMethodGUIDs.h"
#include "SafeArrayHelpers.h"
#include "ComErrorHandling.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_ICategoryMapService);
}


//*****************************************************************************
//* Function Name: Execute
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Execute (ICategoryMap** p_ppCategoryMap)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CActiveMethodGUIDs l_ActiveMethodGUIDs (CLSID_CategoryMapService, IID_ICategoryMapService);

	HRESULT l_hr = S_OK;

	try {
		ICategoryMapPtr l_spCategoryMap = ExecuteHelper ();
		l_hr = UtilsGetInterfacePointerHelper (p_ppCategoryMap, l_spCategoryMap);
	}
	catch (const _com_error& l_ce) {
		l_hr = HandleComErrorException (__FILE__, __LINE__, l_ce);
	}

	return l_hr;
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
//* Function Name: Show1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show1 (
	long p_lCategory1,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lCategory1);

	return AppendShow (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Show2
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show2 (
	long p_lCategory1,
	long p_lCategory2,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lCategory1);
	l_vValues.push_back (p_lCategory2);

	return AppendShow (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Show3
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show3 (
	long p_lCategory1,
	long p_lCategory2,
	long p_lCategory3,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lCategory1);
	l_vValues.push_back (p_lCategory2);
	l_vValues.push_back (p_lCategory3);

	return AppendShow (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Show4
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show4 (
	long p_lCategory1,
	long p_lCategory2,
	long p_lCategory3,
	long p_lCategory4,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lCategory1);
	l_vValues.push_back (p_lCategory2);
	l_vValues.push_back (p_lCategory3);
	l_vValues.push_back (p_lCategory4);

	return AppendShow (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Show5
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show5 (
	long p_lCategory1,
	long p_lCategory2,
	long p_lCategory3,
	long p_lCategory4,
	long p_lCategory5,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;
	l_vValues.push_back (p_lCategory1);
	l_vValues.push_back (p_lCategory2);
	l_vValues.push_back (p_lCategory3);
	l_vValues.push_back (p_lCategory4);
	l_vValues.push_back (p_lCategory5);

	return AppendShow (l_vValues, p_ppSelf);
}


//*****************************************************************************
//* Function Name: Show
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMapService::Show (
	SAFEARRAY* p_psa,
	ICategoryMapService** p_ppSelf)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	std::vector<_variant_t> l_vValues;

	HRESULT l_hr = SafeArrayToVector (p_psa, l_vValues);

	if (SUCCEEDED (l_hr)) {
		l_hr = AppendShow (l_vValues, p_ppSelf);
	}

	return l_hr;
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

	return UtilsSelfQueryInterfaceHelper (this, p_ppSelf);
}


//*****************************************************************************
//* Function Name: AppendShow
//*   Description: 
//*****************************************************************************
HRESULT CCategoryMapService::AppendShow (
	const std::vector<_variant_t>&	p_vValues,
	ICategoryMapService**			p_ppSelf)
{
	_bstr_t l_sbstrJoinedValues = JoinValues (p_vValues);

	_bstr_t l_sbstrValue;
	l_sbstrValue  = L"(";
	l_sbstrValue += l_sbstrJoinedValues;
	l_sbstrValue += L")";

	AppendNameValueToQueryString (L"show", l_sbstrValue);

	return UtilsSelfQueryInterfaceHelper (this, p_ppSelf);
}
