#include "stdafx.h"
#include "StubUrlInvoker.h"
#include "Utils.h"

//*****************************************************************************
//* Function Name: Constructor
//*   Description: Initialise an instance of this class. If a non-zero
//*                resource id has been passed then we try to load the
//*                given custom resource.
//*****************************************************************************
CStubUrlInvoker::CStubUrlInvoker (UINT p_uResourceId)
{
	if (p_uResourceId != 0) {
		m_sbstrResponseXML = LoadCustomXMLResource (p_uResourceId);
	}
}


//*****************************************************************************
//* Function Name: InvokeUrl
//*   Description: This implementation of IUrlInvoker::InvokeUrl does the
//*                following:
//*
//*                    Captures the arguments that were passed in by WineApi.dll.
//*
//*                    Returns the canned response that was loaded by the
//*                    constructor.
//*
//*****************************************************************************
_bstr_t CStubUrlInvoker::InvokeUrl (
	const _bstr_t& p_sbstrMethod,
	const _bstr_t& p_sbstrUrl)
{
	m_sbstrMethod = p_sbstrMethod;
	m_sbstrUrl    = p_sbstrUrl;

	return m_sbstrResponseXML;
}
