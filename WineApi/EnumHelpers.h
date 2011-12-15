#ifndef _EnumHelpers_h_
#define _EnumHelpers_h_

#include "ObjectCollection.h"
#include "StringCollection.h"

//*****************************************************************************
//* Function Name: MakeEnumForObjectCollection
//*   Description: Take a vector of smart pointers (e.g. IBookPtr) and copy
//*                the elements into a vector of _variant_t. Then, create an
//*                instance of the COM object CObjectCollection which implements
//*                IObjectCollection. Pass the vector of _variant_t to this
//*                COM object.
//*****************************************************************************
template<typename T>
HRESULT MakeEnumForObjectCollection (
	const std::vector<T>&	p_v,
	IObjectCollection**		p_ppObjectCollection)
{
	HRESULT l_hr = S_OK;

	*p_ppObjectCollection = NULL;

	CComObject<CObjectCollection>* l_pCXXObjectCollection = NULL;
	l_hr = CComObject<CObjectCollection>::CreateInstance (&l_pCXXObjectCollection);

	if (SUCCEEDED (l_hr)) {

		l_pCXXObjectCollection->AddRef ();

		long l_lNumItems = p_v.size ();
		_variant_t* l_svara = new _variant_t[l_lNumItems];

		if (l_svara != NULL) {

			_variant_t* l_psvar = &l_svara[0];
			std::vector<T>::const_iterator it;
			for (it = p_v.begin (); it != p_v.end (); ++it, ++l_psvar) {
				IDispatchPtr l_spDispatch = *it;
				V_VT (l_psvar) = VT_DISPATCH;
				V_DISPATCH (l_psvar) = l_spDispatch.GetInterfacePtr ();
				V_DISPATCH (l_psvar)->AddRef ();
			}

			l_pCXXObjectCollection->Init (l_lNumItems, l_svara);

			l_hr = l_pCXXObjectCollection->QueryInterface (p_ppObjectCollection);
		}
		else {
			l_hr = E_OUTOFMEMORY;
		}

		l_pCXXObjectCollection->Release ();
	}

	return l_hr;
}

extern HRESULT MakeEnumForStringCollection (
	const std::vector<_bstr_t>&	p_v,
	IStringCollection**			p_ppStringCollection);

#endif
