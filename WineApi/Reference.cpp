#include "stdafx.h"
#include "Reference.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReference::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IReference);
}


//*****************************************************************************
//* Function Name: get_Status
//*   Description: 
//*****************************************************************************
STDMETHODIMP CReference::get_Status (IStatus** p_ppStatus)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsGetInterfacePointerHelper (p_ppStatus, m_spStatus);
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
