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
//*                This was probably set as the address of a smart pointer
//*                but the smart pointer overloads the "address of" operator
//*                so we end with the address of the internal raw interface
//*                pointer.
//*
//*                e.g. :-
//*                    U = CCategoryMap
//*                    V = ICategoryMap
//*****************************************************************************
template<typename U, typename V>
IEntityMetadata* CreateInstanceHelper (
	boost::any&	p_anyEntity,
	U*			p_pHackU = NULL,	// Ensure the compiler gets things right.
	V*			p_pHackV = NULL)	// Ensure the compiler gets things right.
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
//*                e.g. :-
//*                    U = CCategoryMap
//*                    V = ICategoryMapPtr
//*****************************************************************************
template<typename U, typename V>
IEntityMetadata* CreateInstanceHelper2 (
	boost::any&	p_anyEntities,
	U*			p_pHackU = NULL,	// Ensure the compiler gets things right.
	V*			p_pHackV = NULL)	// Ensure the compiler gets things right.
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

	return l_pEntityMetadata;
}

#endif
