#include "stdafx.h"
#include "Article.h"
#include "EnumHelpers.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::InterfaceSupportsErrorInfo (REFIID p_riid)
{
	return UtilsInterfaceSupportsErrorInfo (p_riid, IID_IArticle);
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Id (BSTR* p_pbstrId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrId, m_sbstrId);
}


//*****************************************************************************
//* Function Name: get_Title
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Title (BSTR* p_pbstrTitle)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrTitle, m_sbstrTitle);
}


//*****************************************************************************
//* Function Name: get_Abstract
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Abstract (BSTR* p_pbstrAbstract)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrAbstract, m_sbstrAbstract);
}


//*****************************************************************************
//* Function Name: get_Content
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Content (BSTR* p_pbstrContent)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrContent, m_sbstrContent);
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return UtilsPropertyGetHelper (p_pbstrUrl, m_sbstrUrl);
}


//*****************************************************************************
//* Function Name: get_Footnotes
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Footnotes (IWineApiObjectCollection** p_ppWineApiObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vFootnotes, p_ppWineApiObjectCollection);
}
