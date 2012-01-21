#ifndef _CreateInstanceHelpers_h_
#define _CreateInstanceHelpers_h_

#include "IEntityMetadata.h"

//*****************************************************************************
//* Function Name: CreateInstanceHelper
//*   Description: Create an instance of a COM object and store an interface
//*                pointer in the given instance of boost::any. Also, return
//*                the object's implementation of the non-COM interface,
//*                IEntityMetadata.
//*                In this function, p_anyEntity is expected to contain the
//*                address of a raw interface pointer e.g. ICategoryMap**.
//*                Originally, I wanted p_anyEntity to contain the address of
//*                a smart pointer but smart pointers overload the address of
//*                operator which causes a problem - which is why I now use
//*                the address of a raw interface pointer.
//*
//*                An example of U and V might be:
//*                    U = CCategoryMap
//*                    V = ICategoryMap
//*****************************************************************************
template<typename U, typename V>
IEntityMetadata* CreateInstanceHelper (
	boost::any&	p_anyEntity,
	U*			p_pHackU = NULL,	// Ensure the VC++ 6 compiler infers the correct template types.
	V*			p_pHackV = NULL)	// Ensure the VC++ 6 compiler infers the correct template types.
{
	IEntityMetadata* l_pEntityMetadata = NULL;

	CComObject<U>* l_pCXXEntity = NULL;
	HRESULT l_hr = CComObject<U>::CreateInstance (&l_pCXXEntity);

	if (SUCCEEDED (l_hr)) {

		V* l_pEntity = NULL;
		HRESULT l_hr = l_pCXXEntity->QueryInterface (&l_pEntity);

		if (SUCCEEDED (l_hr)) {

			V** l_ppEntity = boost::any_cast<V**>(p_anyEntity);

			if (l_ppEntity != NULL) {
				*l_ppEntity = l_pEntity;
			}

			l_pEntityMetadata = static_cast<IEntityMetadata*>(l_pCXXEntity);
		}
		else {
			delete l_pCXXEntity;
			l_pCXXEntity = NULL;
		}
	}

	if (FAILED (l_hr)) {
		_com_issue_error (l_hr);
	}

	return l_pEntityMetadata;
}


//*****************************************************************************
//* Function Name: CreateInstanceHelper2
//*   Description: Create an instance of a COM object and store an interface
//*                pointer in the given instance of boost::any. Also, return
//*                the object's implementation of the non-COM interface,
//*                IEntityMetadata.
//*                In this function, p_anyEntities is expected to contain the
//*                address of a vector of smart pointers e.g. std::vector<IBookPtr>.
//*                We add a smart pointer to the new COM object to this vector.
//*
//*                An example of U and V might be:
//*                    U = CCategoryMap
//*                    V = ICategoryMapPtr
//*****************************************************************************
template<typename U, typename V>
IEntityMetadata* CreateInstanceHelper2 (
	boost::any&	p_anyEntities,
	U*			p_pHackU = NULL,	// Ensure the VC++ 6 compiler infers the correct template types.
	V*			p_pHackV = NULL)	// Ensure the VC++ 6 compiler infers the correct template types.
{
	IEntityMetadata* l_pEntityMetadata = NULL;

	CComObject<U>* l_pCXXEntity = NULL;
	HRESULT l_hr = CComObject<U>::CreateInstance (&l_pCXXEntity);

	if (SUCCEEDED (l_hr)) {

		V l_spEntity;
		HRESULT l_hr = l_pCXXEntity->QueryInterface (&l_spEntity);

		if (SUCCEEDED (l_hr)) {

			std::vector<V>* l_pvEntities = boost::any_cast<std::vector<V>*>(p_anyEntities);

			if (l_pvEntities != NULL) {
				l_pvEntities->push_back (l_spEntity);
			}

			l_pEntityMetadata = static_cast<IEntityMetadata*>(l_pCXXEntity);
		}
		else {
			delete l_pCXXEntity;
			l_pCXXEntity = NULL;
		}
	}

	if (FAILED (l_hr)) {
		_com_issue_error (l_hr);
	}

	return l_pEntityMetadata;
}

#endif
