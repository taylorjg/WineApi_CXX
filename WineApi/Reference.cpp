#include "stdafx.h"
#include "Reference.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReference::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IReference
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Status
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReference::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_ppStatus) {
		*p_ppStatus = m_spStatus;
		(*p_ppStatus)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Books
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReference::get_Books (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vBooks, p_ppWineApiObjectCollection);
}
