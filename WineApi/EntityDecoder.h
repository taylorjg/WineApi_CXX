#ifndef _CEntityDecoder_h_
#define _CEntityDecoder_h_

class CPropertyDescriptor;
class CPropertyArrayDescriptor;
class CChildEntityDescriptor;
class CChildEntityArrayDescriptor;

class CEntityDecoder
{
public:
	static void DecodeEntity (
		const _bstr_t&									p_sbstrXML,
		const std::vector<CPropertyDescriptor>&			p_vPropertyDescriptorTable,
		const std::vector<CPropertyArrayDescriptor>&	p_vPropertyArrayDescriptorTable,
		const std::vector<CChildEntityDescriptor>&		p_vChildEntityDescriptorTable,
		const std::vector<CChildEntityArrayDescriptor>&	p_vChildEntityArrayDescriptorTable);
};

#endif
