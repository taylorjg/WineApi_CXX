#ifndef __CONFIG_H_
#define __CONFIG_H_

#include "resource.h"

class ATL_NO_VTABLE CConfig : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CConfig, &CLSID_Config>,
	public IDispatchImpl<IConfig, &IID_IConfig, &LIBID_WineApi>,
	public ISupportErrorInfo
{
public:
	CConfig()
	{
		ATLTRACE (_T("CConfig::CConfig - %p\n"), this);
	}
	~CConfig()
	{
		ATLTRACE (_T("CConfig::~CConfig - %p\n"), this);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CONFIG)
DECLARE_CLASSFACTORY_SINGLETON(CConfig)
DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CConfig)
	COM_INTERFACE_ENTRY(IConfig)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportErrorInfo
public:
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IConfig
public:
	STDMETHOD(get_ApiKey)(BSTR* p_pbstrApiKey);
	STDMETHOD(put_ApiKey)(BSTR p_bstrApiKey);
	STDMETHOD(get_Version)(BSTR* p_pbstrVersion);
	STDMETHOD(put_Version)(BSTR p_bstrVersion);

public:
	static const _bstr_t& GetApiKey (void) { return m_s_sbstrApiKey; }
	static const _bstr_t& GetVersion (void) { return m_s_sbstrVersion; }

	static _bstr_t GetBaseUrl (const _bstr_t& p_sbstrResource);

private:
	static _bstr_t m_s_sbstrApiKey;
	static _bstr_t m_s_sbstrVersion;
};

#endif
