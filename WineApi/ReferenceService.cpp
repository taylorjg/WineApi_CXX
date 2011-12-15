#include "stdafx.h"
#include "ReferenceService.h"
#include "SafeArrayHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReferenceService::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IReferenceService
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
STDMETHODIMP CReferenceService::Execute (IReference** p_ppReference)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	IReferencePtr l_spReference = ExecuteHelper ();

	if (l_spReference) {
		*p_ppReference = l_spReference;
		(*p_ppReference)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: CategoryFilter1
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReferenceService::CategoryFilter1 (
	long p_lId1,
	IReferenceService** p_ppSelf)
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
STDMETHODIMP CReferenceService::CategoryFilter2 (
	long p_lId1,
	long p_lId2,
	IReferenceService** p_ppSelf)
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
STDMETHODIMP CReferenceService::CategoryFilter3 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	IReferenceService** p_ppSelf)
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
STDMETHODIMP CReferenceService::CategoryFilter4 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	IReferenceService** p_ppSelf)
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
STDMETHODIMP CReferenceService::CategoryFilter5 (
	long p_lId1,
	long p_lId2,
	long p_lId3,
	long p_lId4,
	long p_lId5,
	IReferenceService** p_ppSelf)
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
STDMETHODIMP CReferenceService::CategoryFilter (
	SAFEARRAY* p_psa,
	IReferenceService** p_ppSelf)
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
//* Function Name: AppendCategoryFilter
//*   Description: 
//*****************************************************************************
HRESULT CReferenceService::AppendCategoryFilter (
	const std::vector<_variant_t>&	p_vValues,
	IReferenceService**				p_ppSelf)
{
	return AppendFilter (
		L"categories",
		p_vValues,
		this->GetUnknown (),
		p_ppSelf);
}
