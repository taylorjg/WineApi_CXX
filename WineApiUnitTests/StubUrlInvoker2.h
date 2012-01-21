#ifndef _CStubUrlInvoker2_h_
#define _CStubUrlInvoker2_h_

#include "IUrlInvoker.h"

class CStubUrlInvoker2 : public IUrlInvoker
{
public:
	CStubUrlInvoker2 (void) :
		m_bUseForcedMethod (false),
		m_bUseForcedUrl (false)
	{
	}

	virtual _bstr_t InvokeUrl (
		const _bstr_t& p_sbstrMethod,
		const _bstr_t& p_sbstrUrl);

	const _bstr_t& GetForcedMethod (void) const { return m_sbstrForcedMethod; }
	void SetForcedMethod (const _bstr_t& p_sbstrForcedMethod)
	{
		m_sbstrForcedMethod = p_sbstrForcedMethod;
		m_bUseForcedMethod = true;
	}

	const _bstr_t& GetForcedUrl (void) const { return m_sbstrForcedUrl; }
	void SetForcedUrl (const _bstr_t& p_sbstrForcedUrl)
	{
		m_sbstrForcedUrl = p_sbstrForcedUrl;
		m_bUseForcedUrl = true;
	}

	const _bstr_t& GetRealMethod (void) const { return m_sbstrRealMethod; }
	const _bstr_t& GetRealUrl (void) const { return m_sbstrRealUrl; }

private:
	_bstr_t m_sbstrForcedMethod;
	_bstr_t m_sbstrForcedUrl;
	bool m_bUseForcedMethod;
	bool m_bUseForcedUrl;
	_bstr_t m_sbstrRealMethod;
	_bstr_t m_sbstrRealUrl;
};

#endif
