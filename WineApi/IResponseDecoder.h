#ifndef _IResponseDecoder_h_
#define _IResponseDecoder_h_

template<typename U, typename V>
class IResponseDecoder
{
public:
	virtual void DecodeResponse (const _bstr_t& p_sbstrResponse, V& p_pResult) = 0;
};

#endif
