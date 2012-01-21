#include "stdafx.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: MakeEnumForStringCollection
//*   Description: Take a vector of _bstr_t and copy the elements into a vector
//*                of _variant_t where each _variant_t holds a BSTR. Then,
//*                create an instance of a collection object passing in the
//*                vector of _variant_t.
//*****************************************************************************
HRESULT MakeEnumForStringCollection (
	const std::vector<_bstr_t>&	p_v,
	IWineApiStringCollection**	p_ppWineApiStringCollection)
{
	HRESULT l_hr = S_OK;

	if (p_ppWineApiStringCollection == NULL) {
		return E_POINTER;
	}

	*p_ppWineApiStringCollection = NULL;

	CComObject<CWineApiStringCollection>* l_pCXXWineApiStringCollection = NULL;
	l_hr = CComObject<CWineApiStringCollection>::CreateInstance (&l_pCXXWineApiStringCollection);

	if (SUCCEEDED (l_hr)) {

		l_pCXXWineApiStringCollection->AddRef ();

		long l_lNumItems = p_v.size ();
		_variant_t* l_svara = new _variant_t[l_lNumItems];

		if (l_svara != NULL) {

			_variant_t* l_psvar = &l_svara[0];
			std::vector<_bstr_t>::const_iterator it;
			for (it = p_v.begin (); it != p_v.end (); ++it, ++l_psvar) {
				V_VT (l_psvar) = VT_BSTR;
				V_BSTR (l_psvar) = (*it).copy ();
			}

			l_pCXXWineApiStringCollection->Init (l_lNumItems, l_svara);

			l_hr = l_pCXXWineApiStringCollection->QueryInterface (p_ppWineApiStringCollection);
		}
		else {
			l_hr = E_OUTOFMEMORY;
		}

		l_pCXXWineApiStringCollection->Release ();
	}

	return l_hr;
}
