#include "stdafx.h"
#include "CategoryMap.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMap::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IConfig
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
STDMETHODIMP CCategoryMap::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (p_ppStatus) {
		*p_ppStatus = m_spStatus;
		(*p_ppStatus)->AddRef ();
	}

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Categories
//*   Description: 
//*****************************************************************************
STDMETHODIMP CCategoryMap::get_Categories (IObjectCollection** p_ppObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vCategories, p_ppObjectCollection);
}
