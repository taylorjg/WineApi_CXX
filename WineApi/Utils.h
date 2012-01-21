#ifndef _Utils_h_
#define _Utils_h_

extern HRESULT UtilsInterfaceSupportsErrorInfo (REFIID p_riid1, REFIID p_riid2);

extern void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	const _bstr_t&	p_sbstrValue);

extern void UtilsAppendNameValueToQueryString (
	_bstr_t&		p_sbstrUrl,
	const _bstr_t&	p_sbstrName,
	long			p_lValue);

extern HRESULT UtilsPropertyGetHelper (
	BSTR*			p_pbstrProperty,
	const _bstr_t&	p_sbstrProperty);

extern HRESULT UtilsPropertyPutHelper (
	BSTR			p_bstrProperty,
	_bstr_t&		p_sbstrProperty);

extern HRESULT UtilsPropertyGetHelper (
	long*			p_plProperty,
	long			p_lProperty);

extern HRESULT UtilsPropertyGetHelper (
	double*			p_pdblProperty,
	double			p_dblProperty);

extern HRESULT UtilsPropertyGetHelper (
	VARIANT_BOOL*	p_pvbProperty,
	bool			p_bProperty);


//*****************************************************************************
//* Function Name: UtilsGetInterfacePointerHelper
//*   Description: Helper function to return an interface pointer.
//*
//*                An example of U and V might be:
//*                    U = IStatus
//*                    V = IStatusPtr
//*****************************************************************************
template<typename U, typename V>
extern HRESULT UtilsGetInterfacePointerHelper (
	U**			p_ppRawInterfacePointer,
	const V&	p_spSmartInterfacePointer)
{
	HRESULT l_hr = S_OK;

	// Have we been given a valid return location ?
	if (p_ppRawInterfacePointer == NULL) {
		// No - Oops.
		return E_POINTER;
	}

	// Yes - so initialise it to NULL.
	*p_ppRawInterfacePointer = NULL;

	try {
		// Do we have an interface pointer to return ?
		if (p_spSmartInterfacePointer) {

			// Yes - so set the return value.
			*p_ppRawInterfacePointer = p_spSmartInterfacePointer;

			// Double check that we have returned a valid interface pointer...
			if ((*p_ppRawInterfacePointer) != NULL) {
				// ...and if we have, then we need to bump the reference count.
				(*p_ppRawInterfacePointer)->AddRef ();
			}
		}
	}
	catch (const _com_error& l_ce) {
		l_hr = l_ce.Error ();
		// An error occurred so ensure that we have initialised the logical return value to NULL.
		*p_ppRawInterfacePointer = NULL;
	}

	return l_hr;
}


//*****************************************************************************
//* Function Name: UtilsSelfQueryInterfaceHelper
//*   Description: Helper function to wrap a call to QueryInterface(). Checks
//*                p_ppSelf for NULL.
//*
//*                An example of U and V might be:
//*                    U = CComObject<CCatalogService>
//*                    V = ICatalogService
//*****************************************************************************
template<typename U, typename V>
extern HRESULT UtilsSelfQueryInterfaceHelper (
	U*	p_pThis,
	V**	p_ppSelf)
{
	HRESULT l_hr = S_OK;

	// Have we been given a valid return location ?
	if (p_ppSelf == NULL) {
		// No - Oops.
		return E_POINTER;
	}

	// Yes - so initialise it to NULL.
	*p_ppSelf = NULL;

	return p_pThis->QueryInterface (
		__uuidof (*p_ppSelf),
		reinterpret_cast<void**>(p_ppSelf));
}

#endif
