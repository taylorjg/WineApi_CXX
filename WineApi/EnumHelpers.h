#ifndef _EnumHelpers_h_
#define _EnumHelpers_h_

#include "WineApiObjectCollection.h"
#include "WineApiStringCollection.h"

//*****************************************************************************
//* Function Name: MakeEnumForObjectCollection
//*   Description: Take a vector of smart pointers (e.g. IBookPtr) and copy
//*                the elements into a vector of _variant_t where each
//*                _variant_t holds an IDispatch interface pointer. Then,
//*                create an instance of a collection object passing in the
//*                vector of _variant_t.
//*****************************************************************************
template<typename T>
HRESULT MakeEnumForObjectCollection (
	const std::vector<T>&		p_v,
	IWineApiObjectCollection**	p_ppWineApiObjectCollection)
{
	HRESULT l_hr = S_OK;

	*p_ppWineApiObjectCollection = NULL;

	CComObject<CWineApiObjectCollection>* l_pCXXWineApiObjectCollection = NULL;
	l_hr = CComObject<CWineApiObjectCollection>::CreateInstance (&l_pCXXWineApiObjectCollection);

	if (SUCCEEDED (l_hr)) {

		l_pCXXWineApiObjectCollection->AddRef ();

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

			l_pCXXWineApiObjectCollection->Init (l_lNumItems, l_svara);

			l_hr = l_pCXXWineApiObjectCollection->QueryInterface (p_ppWineApiObjectCollection);
		}
		else {
			l_hr = E_OUTOFMEMORY;
		}

		l_pCXXWineApiObjectCollection->Release ();
	}

	return l_hr;
}

extern HRESULT MakeEnumForStringCollection (
	const std::vector<_bstr_t>&	p_v,
	IWineApiStringCollection**	p_ppWineApiStringCollection);

#endif
