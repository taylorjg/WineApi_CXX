#include "stdafx.h"
#include "Article.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IArticle
	};

	for (int i = 0; i < sizeof (arr) / sizeof (arr[0]); i++) {
		if (InlineIsEqualGUID (*arr[i], riid))
			return S_OK;
	}

	return S_FALSE;
}


//*****************************************************************************
//* Function Name: get_Id
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Id (BSTR* p_pbstrId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrId = m_sbstrId.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Title
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Title (BSTR* p_pbstrTitle)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrTitle = m_sbstrTitle.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Abstract
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Abstract (BSTR* p_pbstrAbstract)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrAbstract = m_sbstrAbstract.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Content
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Content (BSTR* p_pbstrContent)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrContent = m_sbstrContent.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Url
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Url (BSTR* p_pbstrUrl)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrUrl = m_sbstrUrl.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Footnotes
//*   Description: 
//*****************************************************************************
STDMETHODIMP CArticle::get_Footnotes (IObjectCollection** p_ppObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vFootnotes, p_ppObjectCollection);
}
