#include "stdafx.h"
#include "ReferenceService.h"
#include "ActiveMethodGUIDs.h"
#include "SafeArrayHelpers.h"
#include "ComErrorHandling.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReferenceService::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IReferenceService);
}


//*****************************************************************************
//* Function Name: Execute
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReferenceService::Execute (IReference** p_ppReference)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CActiveMethodGUIDs l_ActiveMethodGUIDs (CLSID_ReferenceService, IID_IReferenceService);

	HRESULT l_hr = S_OK;

	try {
		IReferencePtr l_spReference = ExecuteHelper ();
		l_hr = UtilsGetInterfacePointerHelper (p_ppReference, l_spReference);
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
