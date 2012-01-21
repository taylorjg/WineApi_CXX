#include "stdafx.h"
#include "StubUrlInvoker3.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InvokeUrl
//*   Description: This implementation of IUrlInvoker::InvokeUrl returns an
//*                invalid XML string.
//*****************************************************************************
_bstr_t CStubUrlInvoker3::InvokeUrl (
	const _bstr_t& p_sbstrMethod,
	const _bstr_t& p_sbstrUrl)
{
	return L"<Catalog>/Catalog>";
}
