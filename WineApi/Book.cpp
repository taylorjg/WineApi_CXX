#include "stdafx.h"
#include "Book.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IBook);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::get_Id (BSTR* p_pbstrId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrId, m_sbstrId);
}


//*****************************************************************************
//* Function Name: get_Title
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::get_Title (BSTR* p_pbstrTitle)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrTitle, m_sbstrTitle);
}


//*****************************************************************************
//* Function Name: get_Articles
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::get_Articles (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vArticles, p_ppWineApiObjectCollection);
}
