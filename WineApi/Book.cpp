#include "stdafx.h"
#include "Book.h"
#include "EnumHelpers.h"

//*****************************************************************************
//* Function Name: InterfaceSupportsErrorInfo
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::InterfaceSupportsErrorInfo (REFIID riid)
{
	static const IID* arr[] = {
		&IID_IBook
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
STDMETHODIMP CBook::get_Id (BSTR* p_pbstrId)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrId = m_sbstrId.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Title
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::get_Title (BSTR* p_pbstrTitle)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*p_pbstrTitle = m_sbstrTitle.copy ();

	return S_OK;
}


//*****************************************************************************
//* Function Name: get_Articles
//*   Description: 
//*****************************************************************************
STDMETHODIMP CBook::get_Articles (IObjectCollection** p_ppObjectCollection)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	return MakeEnumForObjectCollection (m_vArticles, p_ppObjectCollection);
}
