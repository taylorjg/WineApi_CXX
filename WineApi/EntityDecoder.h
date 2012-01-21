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

private:
	static void DecodeProperty (
		const _bstr_t&					p_sbstrValue,
		bool							p_bPropertyArray,
		const CPropertyDescriptor*		p_pPropertyDescriptor,
		const CPropertyArrayDescriptor*	p_pPropertyArrayDescriptor);

	static void DecodeChildEntity (
		const _bstr_t&		p_sbstrXML,
		IEntityMetadata*	p_pChildEntity);
};

#endif
