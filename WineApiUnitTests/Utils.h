#ifndef _Utils_h_
#define _Utils_h_

extern void HandleComErrorException (const _com_error& p_ce);

extern _bstr_t LoadCustomXMLResource (UINT p_uResourceId);

class IUrlInvoker;
extern void SetExternalUrlInvoker (IUrlInvoker* p_pExternalUrlInvoker);
extern IUrlInvoker* GetInternalUrlInvoker (void);
extern _bstr_t GetBaseUrl (const _bstr_t& l_sbstrResource);
extern void ResetConfig (void);

template<typename T>
HRESULT VectorToSafeArray (const std::vector<T>& p_vValues, SAFEARRAY** p_ppsa)
{
	HRESULT l_hr = S_OK;

	_ASSERTE (p_ppsa != NULL);
	*p_ppsa = NULL;

	SAFEARRAYBOUND l_SafeArrayBound = {0};
	l_SafeArrayBound.lLbound = 0;
	l_SafeArrayBound.cElements = p_vValues.size ();

	SAFEARRAY* l_psa = SafeArrayCreate (VT_VARIANT, 1, &l_SafeArrayBound);

	if (l_psa != NULL) {
		for (long l_lIndex = 0; l_lIndex < static_cast<long>(p_vValues.size ()); l_lIndex++) {
			_variant_t l_svarValue = p_vValues[l_lIndex];
			l_hr = SafeArrayPutElement (l_psa, &l_lIndex, &l_svarValue);
			if (FAILED (l_hr)) {
				break;
			}
		}
	}
	else {
		l_hr = E_OUTOFMEMORY;
	}

	if (SUCCEEDED (l_hr)) {
		_ASSERTE (l_psa != NULL);
		*p_ppsa = l_psa;
	}
	else {
		if (l_psa != NULL) {
			(void) SafeArrayDestroy (l_psa);
			l_psa = NULL;
		}
	}

	return l_hr;
}

#endif
