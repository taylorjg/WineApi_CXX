#include "stdafx.h"
#include "SafeArrayHelpers.h"

//*****************************************************************************
//* Function Name: SafeArrayToVector
//*   Description: Take a SAFEARRAY containing a 1-dimensional array of VARIANT
//*                and copy the elements into a vector of _variant_t.
//*****************************************************************************
HRESULT SafeArrayToVector (SAFEARRAY* p_psa, std::vector<_variant_t>& p_vValues)
{
	HRESULT l_hr = S_OK;

	if (p_psa == NULL) {
		return E_POINTER;
	}

	if (SafeArrayGetDim (p_psa) != 1) {
		return E_INVALIDARG;
	}

	VARTYPE l_vt = VT_EMPTY;
	l_hr = SafeArrayGetVartype (p_psa, &l_vt);
	if (FAILED (l_hr)) {
		return l_hr;
	}

	if (l_vt != VT_VARIANT) {
		return E_INVALIDARG;
	}

	long l_lLowerBound = 0;
	long l_lUpperBound = 0;

	l_hr = SafeArrayGetLBound (p_psa, 1, &l_lLowerBound);
	if (FAILED (l_hr)) {
		return l_hr;
	}

	l_hr = SafeArrayGetUBound (p_psa, 1, &l_lUpperBound);
	if (FAILED (l_hr)) {
		return l_hr;
	}

	long l_lNumElements = l_lUpperBound - l_lLowerBound + 1;

	if (l_lNumElements <= 0) {
		return E_INVALIDARG;
	}

	for (long l_lIndex = l_lLowerBound; l_lIndex <= l_lUpperBound; l_lIndex++) {
		_variant_t l_svarValue;
		l_hr = SafeArrayGetElement (p_psa, &l_lIndex, &l_svarValue);
		if (FAILED (l_hr)) {
			return l_hr;
		}
		p_vValues.push_back (l_svarValue);
	}

	return S_OK;
}
