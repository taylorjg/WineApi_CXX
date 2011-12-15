#include "stdafx.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: MakeEnumForStringCollection
//*   Description: Take a vector of _bstr_t and copy the elements into a vector
//*                of _variant_t. Then, create an instance of the COM object
//*                CStringCollection which implements IStringCollection. Pass
//*                the vector of _variant_t to this COM object.
//*****************************************************************************
HRESULT MakeEnumForStringCollection (
	const std::vector<_bstr_t>&	p_v,
	IStringCollection**			p_ppStringCollection)
{
	HRESULT l_hr = S_OK;

	*p_ppStringCollection = NULL;

	CComObject<CStringCollection>* l_pCXXStringCollection = NULL;
	l_hr = CComObject<CStringCollection>::CreateInstance (&l_pCXXStringCollection);

	if (SUCCEEDED (l_hr)) {

		l_pCXXStringCollection->AddRef ();

		long l_lNumItems = p_v.size ();
		_variant_t* l_svara = new _variant_t[l_lNumItems];

		if (l_svara != NULL) {

			_variant_t* l_psvar = &l_svara[0];
			std::vector<_bstr_t>::const_iterator it;
			for (it = p_v.begin (); it != p_v.end (); ++it, ++l_psvar) {
				V_VT (l_psvar) = VT_BSTR;
				V_BSTR (l_psvar) = (*it).copy ();
			}

			l_pCXXStringCollection->Init (l_lNumItems, l_svara);

			l_hr = l_pCXXStringCollection->QueryInterface (p_ppStringCollection);
		}
		else {
			l_hr = E_OUTOFMEMORY;
		}

		l_pCXXStringCollection->Release ();
	}

	return l_hr;
}
