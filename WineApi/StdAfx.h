// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__B36829AC_F5C8_448A_971A_28F106896585__INCLUDED_)
#define AFX_STDAFX_H__B36829AC_F5C8_448A_971A_28F106896585__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif
#define _ATL_APARTMENT_THREADED

#include <afxwin.h>
#include <afxdisp.h>

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>

#include <vector>

#define BOOST_DISABLE_ASSERTS
#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/shared_array.hpp>
#include <boost/scoped_array.hpp>
#include <boost/any.hpp>

#include "IEntityMetadata.h"
#include "CreateInstanceHelpers.h"

#include "WineApi.h"

#include <comdef.h>
_COM_SMARTPTR_TYPEDEF(IStatus,				__uuidof(IStatus));
_COM_SMARTPTR_TYPEDEF(ICategoryMap,			__uuidof(ICategoryMap));
_COM_SMARTPTR_TYPEDEF(ICategory,			__uuidof(ICategory));
_COM_SMARTPTR_TYPEDEF(IRefinement,			__uuidof(IRefinement));
_COM_SMARTPTR_TYPEDEF(ICatalog,				__uuidof(ICatalog));
_COM_SMARTPTR_TYPEDEF(IProducts,			__uuidof(IProducts));
_COM_SMARTPTR_TYPEDEF(IProduct,				__uuidof(IProduct));
_COM_SMARTPTR_TYPEDEF(IAppellation,			__uuidof(IAppellation));
_COM_SMARTPTR_TYPEDEF(IVarietal,			__uuidof(IVarietal));
_COM_SMARTPTR_TYPEDEF(IVineyard,			__uuidof(IVineyard));
_COM_SMARTPTR_TYPEDEF(IProductAttribute,	__uuidof(IProductAttribute));
_COM_SMARTPTR_TYPEDEF(ILabel,				__uuidof(ILabel));
_COM_SMARTPTR_TYPEDEF(IRegion,				__uuidof(IRegion));
_COM_SMARTPTR_TYPEDEF(IArea,				__uuidof(IArea));
_COM_SMARTPTR_TYPEDEF(IArticle,				__uuidof(IArticle));
_COM_SMARTPTR_TYPEDEF(IBook,				__uuidof(IBook));
_COM_SMARTPTR_TYPEDEF(ICommunity,			__uuidof(ICommunity));
_COM_SMARTPTR_TYPEDEF(ICommunityReview,		__uuidof(ICommunityReview));
_COM_SMARTPTR_TYPEDEF(ICommunityReviews,	__uuidof(ICommunityReviews));
_COM_SMARTPTR_TYPEDEF(IFootnote,			__uuidof(IFootnote));
_COM_SMARTPTR_TYPEDEF(IGeoLocation,			__uuidof(IGeoLocation));
_COM_SMARTPTR_TYPEDEF(IRating,				__uuidof(IRating));
_COM_SMARTPTR_TYPEDEF(IRatings,				__uuidof(IRatings));
_COM_SMARTPTR_TYPEDEF(IReference,			__uuidof(IReference));
_COM_SMARTPTR_TYPEDEF(IRetail,				__uuidof(IRetail));
_COM_SMARTPTR_TYPEDEF(IVintage,				__uuidof(IVintage));
_COM_SMARTPTR_TYPEDEF(IVintages,			__uuidof(IVintages));
_COM_SMARTPTR_TYPEDEF(IWineType,			__uuidof(IWineType));

#import <msxml3.dll>

#define STR(x) #x
#define STR2(x) STR(x)
#define TODO(description) message(__FILE__ "(" STR2(__LINE__) ") : TODO - " ##description)

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__B36829AC_F5C8_448A_971A_28F106896585__INCLUDED)
