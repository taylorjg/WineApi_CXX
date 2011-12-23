#include "stdafx.h"
#include "Status.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::InterfaceSupportsErrorInfo (REFIID riid)
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
//* Function Name: get_ReturnCode
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::get_ReturnCode (long* p_plReturnCode)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_plReturnCode = m_lReturnCode;

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Messages
//*   Description: 
//*****************************************************************************
STDMETHODIMP CStatus::get_Messages (IWineApiStringCollection** p_ppWineApiStringCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForStringCollection (m_vMessages, p_ppWineApiStringCollection);
}
