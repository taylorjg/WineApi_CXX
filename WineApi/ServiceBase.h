#ifndef _CServiceBase_h_
#define _CServiceBase_h_

#include "IUrlInvoker.h"
#include "IResponseDecoder.h"
#include "Config.h"
#include "Utils.h"

extern const wchar_t RESOURCE_CATALOG[];
extern const wchar_t RESOURCE_CATEGORYMAP[];
extern const wchar_t RESOURCE_REFERENCE[];

template<typename U, typename V>
class CServiceBase
{
protected:
	CServiceBase (
		IUrlInvoker*			p_pUrlInvoker,
		IResponseDecoder<U, V>*	p_pResponseDecoder,
		const _bstr_t&			p_sbstrResource) :
			m_pUrlInvoker (p_pUrlInvoker),
			m_pResponseDecoder (p_pResponseDecoder),
			m_sbstrResource (p_sbstrResource)
	{
		m_sbstrUrl = CConfig::GetBaseUrl (m_sbstrResource);
	}

	void AppendNameValueToQueryString (
		const _bstr_t& p_sbstrName,
		const _bstr_t& p_sbstrValue)
	{
		::UtilsAppendNameValueToQueryString (m_sbstrUrl, p_sbstrName, p_sbstrValue);
	}

	void AppendNameValueToQueryString (
		const _bstr_t&	p_sbstrName,
		long			p_lValue)
	{
		::UtilsAppendNameValueToQueryString (m_sbstrUrl, p_sbstrName, p_lValue);
	}

	V ExecuteHelper (void)
	{
		V l_pResult;

		IUrlInvoker* l_pUrlInvoker = GetExternalUrlInvoker ();

		if (l_pUrlInvoker == NULL) {
			l_pUrlInvoker = m_pUrlInvoker.get ();
		}

		_bstr_t l_sbstrResponse = l_pUrlInvoker->InvokeUrl (L"GET", m_sbstrUrl);
		m_pResponseDecoder->DecodeResponse (l_sbstrResponse, l_pResult);

		return l_pResult;
	}

	template<typename T>
	HRESULT AppendFilter (
		const _bstr_t&					p_sbstrFilterType,
		const std::vector<_variant_t>&	p_vValues,
		IUnknown*						p_pUnknown,
		T**								p_ppSelf)
	{
		if (p_ppSelf == NULL) {
			return E_POINTER;
		}

		_bstr_t l_sbstrJoinedValues = JoinValues (p_vValues);

		_bstr_t l_sbstrOverallValue;
		l_sbstrOverallValue  = p_sbstrFilterType;
		l_sbstrOverallValue += L"(";
		l_sbstrOverallValue += l_sbstrJoinedValues;
		l_sbstrOverallValue += L")";

		AppendNameValueToQueryString (L"filter", l_sbstrOverallValue);

		return p_pUnknown->QueryInterface (
			__uuidof (*p_ppSelf),
			reinterpret_cast<void**>(p_ppSelf));
	}

	_bstr_t JoinValues (const std::vector<_variant_t>& p_vValues)
	{
		_bstr_t l_sbstrJoinedValues;

		std::vector<_variant_t>::const_iterator it;

		for (it = p_vValues.begin (); it != p_vValues.end (); ++it) {

			if (l_sbstrJoinedValues.length () > 0) {
				l_sbstrJoinedValues += L"+";
			}

			_bstr_t l_sbstrValue = (*it);

			l_sbstrJoinedValues += l_sbstrValue;
		}

		return l_sbstrJoinedValues;
	}

private:
	_bstr_t m_sbstrResource;
	_bstr_t m_sbstrUrl;

	boost::scoped_ptr<IUrlInvoker>				m_pUrlInvoker;
	boost::scoped_ptr<IResponseDecoder<U, V> >	m_pResponseDecoder;

};

//*****************************************************************************
//* Support for unit testing. Unit tests can pass in a stub implementation of
//* the IUrlInvoker interface via SetExternalUrlInvoker().
//*****************************************************************************

extern IUrlInvoker* g_s_pExternalUrlInvoker;

extern "C" {
	__declspec(dllexport) void SetExternalUrlInvoker (IUrlInvoker* p_pExternalUrlInvoker);
	__declspec(dllexport) IUrlInvoker* GetExternalUrlInvoker (void);
	__declspec(dllexport) IUrlInvoker* GetInternalUrlInvoker (void);
	__declspec(dllexport) BSTR GetBaseUrl (BSTR p_bstrResource);
	__declspec(dllexport) void ResetConfig (void);
}

#endif
