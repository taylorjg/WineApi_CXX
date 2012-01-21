#ifndef _CStubUrlInvoker3_h_
#define _CStubUrlInvoker3_h_

#include "IUrlInvoker.h"

class CStubUrlInvoker3 : public IUrlInvoker
{
public:
	virtual _bstr_t InvokeUrl (
		const _bstr_t& p_sbstrMethod,
		const _bstr_t& p_sbstrUrl);
};

#endif
