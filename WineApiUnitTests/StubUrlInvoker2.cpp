#include "stdafx.h"
#include "StubUrlInvoker2.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: InvokeUrl
//*   Description: This implementation of IUrlInvoker::InvokeUrl does the
//*                following:
//*
//*                    Captures the arguments that were passed in by WineApi.dll.
//*
//*                    Delegates to WineApi.dll's internal implementation of
//*                    IUrlInvoker. The arguments passed can be forced to
//*                    specific values via SetForcedMethod() and SetForcedUrl().
//*
//*****************************************************************************
_bstr_t CStubUrlInvoker2::InvokeUrl (
	const _bstr_t& p_sbstrMethod,
	const _bstr_t& p_sbstrUrl)
{
	_bstr_t l_sbstrResponse;

	m_sbstrRealMethod = p_sbstrMethod;
	m_sbstrRealUrl    = p_sbstrUrl;

	_bstr_t l_sbstrMethod = (m_bUseForcedMethod) ? m_sbstrForcedMethod : p_sbstrMethod;
	_bstr_t l_sbstrUrl    = (m_bUseForcedUrl)    ? m_sbstrForcedUrl    : p_sbstrUrl;

	IUrlInvoker* l_pInternalUrlInvoker = GetInternalUrlInvoker ();

	if (l_pInternalUrlInvoker != NULL) {
		l_sbstrResponse = l_pInternalUrlInvoker->InvokeUrl (l_sbstrMethod, l_sbstrUrl);
	}

	return l_sbstrResponse;
}
