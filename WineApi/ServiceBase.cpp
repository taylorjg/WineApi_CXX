#include "stdafx.h"
#include "ServiceBase.h"
#include "InternalUrlInvoker.h"
#include "Config.h"

const wchar_t RESOURCE_CATALOG[]		= L"catalog";
const wchar_t RESOURCE_CATEGORYMAP[]	= L"categorymap";
const wchar_t RESOURCE_REFERENCE[]		= L"reference";

IUrlInvoker* g_s_pExternalUrlInvoker = NULL;
CInternalUrlInvoker g_s_InternalUrlInvoker;

//*****************************************************************************
//* Function Name: SetExternalUrlInvoker
//*   Description: This entry point allows unit tests to pass in an external
//*                stub implementation of IUrlInvoker.
//*****************************************************************************
void SetExternalUrlInvoker (IUrlInvoker* p_pExternalUrlInvoker)
{
	g_s_pExternalUrlInvoker = p_pExternalUrlInvoker;
}


//*****************************************************************************
//* Function Name: GetExternalUrlInvoker
//*   Description: This entry point allows unit tests to clear any external
//*                stub implementation of IUrlInvoker that may have been set.
//*****************************************************************************
IUrlInvoker* GetExternalUrlInvoker (void)
{
	return g_s_pExternalUrlInvoker;
}


//*****************************************************************************
//* Function Name: GetInternalUrlInvoker
//*   Description: This entry point allows unit tests to retrieve a pointer
//*                to the default internal implementation of IUrlInvoker.
//*                Unit tests can then delegate to this object.
//*****************************************************************************
IUrlInvoker* GetInternalUrlInvoker (void)
{
	return &g_s_InternalUrlInvoker;
}


//*****************************************************************************
//* Function Name: GetBaseUrl
//*   Description: This entry point allows unit tests to access the static
//*                CConfig::GetBaseUrl() method which is not exposed via the
//*                IConfig COM interface i.e. it is an internal method.
//*****************************************************************************
BSTR GetBaseUrl (BSTR p_bstrResource)
{
	BSTR l_bstrUrl = NULL;

	try {
		_bstr_t l_sbstrResource (p_bstrResource, true /* fCopy */);
		_bstr_t l_sbstrUrl = CConfig::GetBaseUrl (l_sbstrResource);
		l_bstrUrl = l_sbstrUrl.copy ();
	}
	catch (const _com_error&) {
		l_bstrUrl = NULL;
	}

	return l_bstrUrl;
}


//*****************************************************************************
//* Function Name: ResetConfig
//*   Description: This entry point allows unit tests to reset the static
//*                member variables in CConfig back to their initial values.
//*****************************************************************************
void ResetConfig (void)
{
	CConfig::Reset ();
}
