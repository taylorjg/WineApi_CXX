#ifndef _IEntityMetadata_h_
#define _IEntityMetadata_h_

//*****************************************************************************
//* CPropertyDescriptor                                                       *
//*****************************************************************************
class CPropertyDescriptor
{
public:
	template<typename T>
	CPropertyDescriptor (LPCTSTR p_lpszXPath, T* p_pPropertyValue) :
		m_lpszXPath			(p_lpszXPath),
		m_anyPropertyValue	(p_pPropertyValue),
		m_ptiPropertyType	(&typeid (T))
	{
	}

	LPCTSTR GetXPath (void) const { return m_lpszXPath; }

	const type_info& GetPropertyType (void) const { return *m_ptiPropertyType; }

	template<typename T>
	void SetPropertyValue (const T& p_Value) const
	{
		T* l_pT = boost::any_cast<T*>(m_anyPropertyValue);
		*l_pT = p_Value;
	}

	CPropertyDescriptor& operator= (const CPropertyDescriptor& rhs)
	{
		this->m_lpszXPath			= rhs.m_lpszXPath;
		this->m_anyPropertyValue	= rhs.m_anyPropertyValue;
		this->m_ptiPropertyType		= rhs.m_ptiPropertyType;

		return *this;
	}

private:
	LPCTSTR				m_lpszXPath;
	mutable boost::any	m_anyPropertyValue;
	const type_info*	m_ptiPropertyType;
};


//*****************************************************************************
//* CPropertyArrayDescriptor                                                  *
//*****************************************************************************
class CPropertyArrayDescriptor
{
public:
	template<typename T>
	CPropertyArrayDescriptor (
		LPCTSTR			p_lpszXPath,
		std::vector<T>*	p_pvProperties) :
			m_lpszXPath			(p_lpszXPath),
			m_anyProperties		(p_pvProperties),
			m_ptiPropertyType	(&typeid (T))
	{
	}

	LPCTSTR GetXPath (void) const { return m_lpszXPath; }

	const type_info& GetPropertyType (void) const { return *m_ptiPropertyType; }

	template<typename T>
	void AddPropertyValue (const T& p_Value) const
	{
		std::vector<T>* l_pvProperties = boost::any_cast<std::vector<T>*>(m_anyProperties);
		l_pvProperties->push_back (p_Value);
	}

	CPropertyArrayDescriptor& operator= (const CPropertyArrayDescriptor& rhs)
	{
		this->m_lpszXPath		= rhs.m_lpszXPath;
		this->m_anyProperties	= rhs.m_anyProperties;
		this->m_ptiPropertyType	= rhs.m_ptiPropertyType;

		return *this;
	}

private:
	LPCTSTR				m_lpszXPath;
	mutable boost::any	m_anyProperties;
	const type_info*	m_ptiPropertyType;
};


class IEntityMetadata;
typedef IEntityMetadata* (*CREATEINSTANCEPROC)(boost::any& p_anyEntity);


//*****************************************************************************
//* CChildEntityDescriptor                                                    *
//*****************************************************************************
class CChildEntityDescriptor
{
public:
	template<typename U, typename V>
	CChildEntityDescriptor (
		LPCTSTR	p_lpszXPath,
		V**		p_ppEntity,
		U*		p_pHack) :
			m_lpszXPath				(p_lpszXPath),
			m_anyEntity				(p_ppEntity),
			m_pfnCreateInstanceProc	(&U::CreateInstance)
	{
	}

	LPCTSTR GetXPath (void) const { return m_lpszXPath; }

	IEntityMetadata* CreateInstance (void) const
	{
		return m_pfnCreateInstanceProc (m_anyEntity);
	}

	CChildEntityDescriptor& operator= (const CChildEntityDescriptor& rhs)
	{
		this->m_lpszXPath				= rhs.m_lpszXPath;
		this->m_anyEntity				= rhs.m_anyEntity;
		this->m_pfnCreateInstanceProc	= rhs.m_pfnCreateInstanceProc;

		return *this;
	}

private:
	LPCTSTR				m_lpszXPath;
	mutable boost::any	m_anyEntity;
	CREATEINSTANCEPROC	m_pfnCreateInstanceProc;
};


template<typename U, typename V>
class CChildEntityDescriptorCreator
{
public:
	static CChildEntityDescriptor Create (LPCTSTR p_lpszXPath, V** p_ppEntity)
	{
		U* l_pHack = NULL;
		return CChildEntityDescriptor (p_lpszXPath, p_ppEntity, l_pHack);
	}
};


//*****************************************************************************
//* CChildEntityArrayDescriptor                                               *
//*****************************************************************************
class CChildEntityArrayDescriptor
{
public:
	template<typename U, typename V>
	CChildEntityArrayDescriptor (
		LPCTSTR			p_lpszXPath,
		std::vector<V>*	p_pvEntities,
		U*				p_pHack) :
			m_lpszXPath				(p_lpszXPath),
			m_anyEntities			(p_pvEntities),
			m_pfnCreateInstanceProc	(&U::CreateInstance2)
	{
	}

	LPCTSTR GetXPath (void) const { return m_lpszXPath; }

	IEntityMetadata* CreateInstance (void) const
	{
		return m_pfnCreateInstanceProc (m_anyEntities);
	}

	CChildEntityArrayDescriptor& operator= (const CChildEntityArrayDescriptor& rhs)
	{
		this->m_lpszXPath				= rhs.m_lpszXPath;
		this->m_anyEntities				= rhs.m_anyEntities;
		this->m_pfnCreateInstanceProc	= rhs.m_pfnCreateInstanceProc;

		return *this;
	}

private:
	LPCTSTR				m_lpszXPath;
	mutable boost::any	m_anyEntities;
	CREATEINSTANCEPROC	m_pfnCreateInstanceProc;
};


template<typename U, typename V>
class CChildEntityArrayDescriptorCreator
{
public:
	static CChildEntityArrayDescriptor Create (
		LPCTSTR			p_lpszXPath,
		std::vector<V>*	p_pvEntities)
	{
		U* l_pHack = NULL;
		return CChildEntityArrayDescriptor (p_lpszXPath, p_pvEntities, l_pHack);
	}
};


//*****************************************************************************
//* Metadata Macros                                                           *
//*****************************************************************************


#define DECLARE_CREATE_INSTANCE_METHODS(className, rawInterfaceName, smartPointerName) \
public: \
	static IEntityMetadata* CreateInstance (boost::any& p_anyEntity) { \
		return ::CreateInstanceHelper<className, rawInterfaceName> (p_anyEntity); \
	} \
	static IEntityMetadata* CreateInstance2 (boost::any& p_anyEntities) { \
		return ::CreateInstanceHelper2<className, smartPointerName> (p_anyEntities); \
	}


#define BEGIN_PROPERTY_DESCRIPTOR_TABLE() \
public: \
	virtual void GetPropertyDescriptorTable (std::vector<CPropertyDescriptor>& p_vPropertyDescriptorTable) {

#define PROPERTY_DESCRIPTOR_TABLE_ENTRY(xpath, memberVariable) \
		p_vPropertyDescriptorTable.push_back (CPropertyDescriptor (xpath, memberVariable));

#define END_PROPERTY_DESCRIPTOR_TABLE() \
	}


#define BEGIN_PROPERTY_ARRAY_DESCRIPTOR_TABLE() \
public: \
	virtual void GetPropertyArrayDescriptorTable (std::vector<CPropertyArrayDescriptor>& p_vPropertyArrayDescriptorTable) {

#define PROPERTY_ARRAY_DESCRIPTOR_TABLE_ENTRY(xpath, memberVariable) \
		p_vPropertyArrayDescriptorTable.push_back (CPropertyArrayDescriptor (xpath, memberVariable));

#define END_PROPERTY_ARRAY_DESCRIPTOR_TABLE() \
	}


#define BEGIN_CHILD_ENTITY_DESCRIPTOR_TABLE() \
public: \
	virtual void GetChildEntityDescriptorTable (std::vector<CChildEntityDescriptor>& p_vChildEntityDescriptorTable) {

#define CHILD_ENTITY_DESCRIPTOR_TABLE_ENTRY(className, rawInterfaceName, xpath, memberVariable) \
		p_vChildEntityDescriptorTable.push_back (CChildEntityDescriptorCreator<className, rawInterfaceName>::Create (xpath, memberVariable));

#define END_CHILD_ENTITY_DESCRIPTOR_TABLE() \
	}


#define BEGIN_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE() \
public: \
	virtual void GetChildEntityArrayDescriptorTable (std::vector<CChildEntityArrayDescriptor>& p_vChildEntityArrayDescriptorTable) {

#define CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE_ENTRY(className, smartPointerName, xpath, memberVariable) \
		p_vChildEntityArrayDescriptorTable.push_back (CChildEntityArrayDescriptorCreator<className, smartPointerName>::Create (xpath, memberVariable));

#define END_CHILD_ENTITY_ARRAY_DESCRIPTOR_TABLE() \
	}


//*****************************************************************************
//* IEntityMetadata                                                           *
//*****************************************************************************
class IEntityMetadata
{
public:
	virtual void GetPropertyDescriptorTable (std::vector<CPropertyDescriptor>& p_vPropertyDescriptorTable) {}
	virtual void GetPropertyArrayDescriptorTable (std::vector<CPropertyArrayDescriptor>& p_vPropertyArrayDescriptorTable) {}
	virtual void GetChildEntityDescriptorTable (std::vector<CChildEntityDescriptor>& p_vChildEntityDescriptorTable) {}
	virtual void GetChildEntityArrayDescriptorTable (std::vector<CChildEntityArrayDescriptor>& p_vChildEntityArrayDescriptorTable) {}
};

#endif
