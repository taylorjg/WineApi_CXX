#ifndef _CStubUrlInvoker_h_
#define _CStubUrlInvoker_h_

#include "IUrlInvoker.h"

class CStubUrlInvoker : public IUrlInvoker
{
public:
	CStubUrlInvoker (UINT p_uResourceId);

	virtual _bstr_t InvokeUrl (
		const _bstr_t& p_sbstrMethod,
		const _bstr_t& p_sbstrUrl);

	const _bstr_t& GetMethod (void) const { return m_sbstrMethod; }
	const _bstr_t& GetUrl    (void) const { return m_sbstrUrl;    }

private:
	_bstr_t m_sbstrMethod;
	_bstr_t m_sbstrUrl;
	_bstr_t m_sbstrResponseXML;
};

#endif
