/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 15 16:12:18 2011
 */
/* Compiler settings for C:\Documents and Settings\jonathan.taylor\My Documents\TestPrograms\WineApi_CXX\WineApi\WineApi.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __WineApi_h__
#define __WineApi_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IAppellation_FWD_DEFINED__
#define __IAppellation_FWD_DEFINED__
typedef interface IAppellation IAppellation;
#endif 	/* __IAppellation_FWD_DEFINED__ */


#ifndef __IArea_FWD_DEFINED__
#define __IArea_FWD_DEFINED__
typedef interface IArea IArea;
#endif 	/* __IArea_FWD_DEFINED__ */


#ifndef __IArticle_FWD_DEFINED__
#define __IArticle_FWD_DEFINED__
typedef interface IArticle IArticle;
#endif 	/* __IArticle_FWD_DEFINED__ */


#ifndef __IBook_FWD_DEFINED__
#define __IBook_FWD_DEFINED__
typedef interface IBook IBook;
#endif 	/* __IBook_FWD_DEFINED__ */


#ifndef __ICatalog_FWD_DEFINED__
#define __ICatalog_FWD_DEFINED__
typedef interface ICatalog ICatalog;
#endif 	/* __ICatalog_FWD_DEFINED__ */


#ifndef __ICategory_FWD_DEFINED__
#define __ICategory_FWD_DEFINED__
typedef interface ICategory ICategory;
#endif 	/* __ICategory_FWD_DEFINED__ */


#ifndef __ICategoryMap_FWD_DEFINED__
#define __ICategoryMap_FWD_DEFINED__
typedef interface ICategoryMap ICategoryMap;
#endif 	/* __ICategoryMap_FWD_DEFINED__ */


#ifndef __ICommunity_FWD_DEFINED__
#define __ICommunity_FWD_DEFINED__
typedef interface ICommunity ICommunity;
#endif 	/* __ICommunity_FWD_DEFINED__ */


#ifndef __ICommunityReview_FWD_DEFINED__
#define __ICommunityReview_FWD_DEFINED__
typedef interface ICommunityReview ICommunityReview;
#endif 	/* __ICommunityReview_FWD_DEFINED__ */


#ifndef __ICommunityReviews_FWD_DEFINED__
#define __ICommunityReviews_FWD_DEFINED__
typedef interface ICommunityReviews ICommunityReviews;
#endif 	/* __ICommunityReviews_FWD_DEFINED__ */


#ifndef __IFootnote_FWD_DEFINED__
#define __IFootnote_FWD_DEFINED__
typedef interface IFootnote IFootnote;
#endif 	/* __IFootnote_FWD_DEFINED__ */


#ifndef __IGeoLocation_FWD_DEFINED__
#define __IGeoLocation_FWD_DEFINED__
typedef interface IGeoLocation IGeoLocation;
#endif 	/* __IGeoLocation_FWD_DEFINED__ */


#ifndef __ILabel_FWD_DEFINED__
#define __ILabel_FWD_DEFINED__
typedef interface ILabel ILabel;
#endif 	/* __ILabel_FWD_DEFINED__ */


#ifndef __IObjectCollection_FWD_DEFINED__
#define __IObjectCollection_FWD_DEFINED__
typedef interface IObjectCollection IObjectCollection;
#endif 	/* __IObjectCollection_FWD_DEFINED__ */


#ifndef __IProduct_FWD_DEFINED__
#define __IProduct_FWD_DEFINED__
typedef interface IProduct IProduct;
#endif 	/* __IProduct_FWD_DEFINED__ */


#ifndef __IProductAttribute_FWD_DEFINED__
#define __IProductAttribute_FWD_DEFINED__
typedef interface IProductAttribute IProductAttribute;
#endif 	/* __IProductAttribute_FWD_DEFINED__ */


#ifndef __IProducts_FWD_DEFINED__
#define __IProducts_FWD_DEFINED__
typedef interface IProducts IProducts;
#endif 	/* __IProducts_FWD_DEFINED__ */


#ifndef __IRating_FWD_DEFINED__
#define __IRating_FWD_DEFINED__
typedef interface IRating IRating;
#endif 	/* __IRating_FWD_DEFINED__ */


#ifndef __IRatings_FWD_DEFINED__
#define __IRatings_FWD_DEFINED__
typedef interface IRatings IRatings;
#endif 	/* __IRatings_FWD_DEFINED__ */


#ifndef __IReference_FWD_DEFINED__
#define __IReference_FWD_DEFINED__
typedef interface IReference IReference;
#endif 	/* __IReference_FWD_DEFINED__ */


#ifndef __IRefinement_FWD_DEFINED__
#define __IRefinement_FWD_DEFINED__
typedef interface IRefinement IRefinement;
#endif 	/* __IRefinement_FWD_DEFINED__ */


#ifndef __IRegion_FWD_DEFINED__
#define __IRegion_FWD_DEFINED__
typedef interface IRegion IRegion;
#endif 	/* __IRegion_FWD_DEFINED__ */


#ifndef __IRetail_FWD_DEFINED__
#define __IRetail_FWD_DEFINED__
typedef interface IRetail IRetail;
#endif 	/* __IRetail_FWD_DEFINED__ */


#ifndef __IStatus_FWD_DEFINED__
#define __IStatus_FWD_DEFINED__
typedef interface IStatus IStatus;
#endif 	/* __IStatus_FWD_DEFINED__ */


#ifndef __IStringCollection_FWD_DEFINED__
#define __IStringCollection_FWD_DEFINED__
typedef interface IStringCollection IStringCollection;
#endif 	/* __IStringCollection_FWD_DEFINED__ */


#ifndef __IVarietal_FWD_DEFINED__
#define __IVarietal_FWD_DEFINED__
typedef interface IVarietal IVarietal;
#endif 	/* __IVarietal_FWD_DEFINED__ */


#ifndef __IVineyard_FWD_DEFINED__
#define __IVineyard_FWD_DEFINED__
typedef interface IVineyard IVineyard;
#endif 	/* __IVineyard_FWD_DEFINED__ */


#ifndef __IVintage_FWD_DEFINED__
#define __IVintage_FWD_DEFINED__
typedef interface IVintage IVintage;
#endif 	/* __IVintage_FWD_DEFINED__ */


#ifndef __IVintages_FWD_DEFINED__
#define __IVintages_FWD_DEFINED__
typedef interface IVintages IVintages;
#endif 	/* __IVintages_FWD_DEFINED__ */


#ifndef __IWineType_FWD_DEFINED__
#define __IWineType_FWD_DEFINED__
typedef interface IWineType IWineType;
#endif 	/* __IWineType_FWD_DEFINED__ */


#ifndef __IConfig_FWD_DEFINED__
#define __IConfig_FWD_DEFINED__
typedef interface IConfig IConfig;
#endif 	/* __IConfig_FWD_DEFINED__ */


#ifndef __ICategoryMapService_FWD_DEFINED__
#define __ICategoryMapService_FWD_DEFINED__
typedef interface ICategoryMapService ICategoryMapService;
#endif 	/* __ICategoryMapService_FWD_DEFINED__ */


#ifndef __ICatalogService_FWD_DEFINED__
#define __ICatalogService_FWD_DEFINED__
typedef interface ICatalogService ICatalogService;
#endif 	/* __ICatalogService_FWD_DEFINED__ */


#ifndef __IReferenceService_FWD_DEFINED__
#define __IReferenceService_FWD_DEFINED__
typedef interface IReferenceService IReferenceService;
#endif 	/* __IReferenceService_FWD_DEFINED__ */


#ifndef __IAppellation_FWD_DEFINED__
#define __IAppellation_FWD_DEFINED__
typedef interface IAppellation IAppellation;
#endif 	/* __IAppellation_FWD_DEFINED__ */


#ifndef __IArea_FWD_DEFINED__
#define __IArea_FWD_DEFINED__
typedef interface IArea IArea;
#endif 	/* __IArea_FWD_DEFINED__ */


#ifndef __IArticle_FWD_DEFINED__
#define __IArticle_FWD_DEFINED__
typedef interface IArticle IArticle;
#endif 	/* __IArticle_FWD_DEFINED__ */


#ifndef __IBook_FWD_DEFINED__
#define __IBook_FWD_DEFINED__
typedef interface IBook IBook;
#endif 	/* __IBook_FWD_DEFINED__ */


#ifndef __ICategory_FWD_DEFINED__
#define __ICategory_FWD_DEFINED__
typedef interface ICategory ICategory;
#endif 	/* __ICategory_FWD_DEFINED__ */


#ifndef __ICategoryMap_FWD_DEFINED__
#define __ICategoryMap_FWD_DEFINED__
typedef interface ICategoryMap ICategoryMap;
#endif 	/* __ICategoryMap_FWD_DEFINED__ */


#ifndef __ICommunity_FWD_DEFINED__
#define __ICommunity_FWD_DEFINED__
typedef interface ICommunity ICommunity;
#endif 	/* __ICommunity_FWD_DEFINED__ */


#ifndef __ICommunityReview_FWD_DEFINED__
#define __ICommunityReview_FWD_DEFINED__
typedef interface ICommunityReview ICommunityReview;
#endif 	/* __ICommunityReview_FWD_DEFINED__ */


#ifndef __ICommunityReviews_FWD_DEFINED__
#define __ICommunityReviews_FWD_DEFINED__
typedef interface ICommunityReviews ICommunityReviews;
#endif 	/* __ICommunityReviews_FWD_DEFINED__ */


#ifndef __IFootnote_FWD_DEFINED__
#define __IFootnote_FWD_DEFINED__
typedef interface IFootnote IFootnote;
#endif 	/* __IFootnote_FWD_DEFINED__ */


#ifndef __IGeoLocation_FWD_DEFINED__
#define __IGeoLocation_FWD_DEFINED__
typedef interface IGeoLocation IGeoLocation;
#endif 	/* __IGeoLocation_FWD_DEFINED__ */


#ifndef __ILabel_FWD_DEFINED__
#define __ILabel_FWD_DEFINED__
typedef interface ILabel ILabel;
#endif 	/* __ILabel_FWD_DEFINED__ */


#ifndef __IProduct_FWD_DEFINED__
#define __IProduct_FWD_DEFINED__
typedef interface IProduct IProduct;
#endif 	/* __IProduct_FWD_DEFINED__ */


#ifndef __IProductAttribute_FWD_DEFINED__
#define __IProductAttribute_FWD_DEFINED__
typedef interface IProductAttribute IProductAttribute;
#endif 	/* __IProductAttribute_FWD_DEFINED__ */


#ifndef __IProducts_FWD_DEFINED__
#define __IProducts_FWD_DEFINED__
typedef interface IProducts IProducts;
#endif 	/* __IProducts_FWD_DEFINED__ */


#ifndef __IRating_FWD_DEFINED__
#define __IRating_FWD_DEFINED__
typedef interface IRating IRating;
#endif 	/* __IRating_FWD_DEFINED__ */


#ifndef __IRatings_FWD_DEFINED__
#define __IRatings_FWD_DEFINED__
typedef interface IRatings IRatings;
#endif 	/* __IRatings_FWD_DEFINED__ */


#ifndef __IReference_FWD_DEFINED__
#define __IReference_FWD_DEFINED__
typedef interface IReference IReference;
#endif 	/* __IReference_FWD_DEFINED__ */


#ifndef __IRefinement_FWD_DEFINED__
#define __IRefinement_FWD_DEFINED__
typedef interface IRefinement IRefinement;
#endif 	/* __IRefinement_FWD_DEFINED__ */


#ifndef __IRegion_FWD_DEFINED__
#define __IRegion_FWD_DEFINED__
typedef interface IRegion IRegion;
#endif 	/* __IRegion_FWD_DEFINED__ */


#ifndef __IRetail_FWD_DEFINED__
#define __IRetail_FWD_DEFINED__
typedef interface IRetail IRetail;
#endif 	/* __IRetail_FWD_DEFINED__ */


#ifndef __IStatus_FWD_DEFINED__
#define __IStatus_FWD_DEFINED__
typedef interface IStatus IStatus;
#endif 	/* __IStatus_FWD_DEFINED__ */


#ifndef __IVarietal_FWD_DEFINED__
#define __IVarietal_FWD_DEFINED__
typedef interface IVarietal IVarietal;
#endif 	/* __IVarietal_FWD_DEFINED__ */


#ifndef __IVineyard_FWD_DEFINED__
#define __IVineyard_FWD_DEFINED__
typedef interface IVineyard IVineyard;
#endif 	/* __IVineyard_FWD_DEFINED__ */


#ifndef __IVintage_FWD_DEFINED__
#define __IVintage_FWD_DEFINED__
typedef interface IVintage IVintage;
#endif 	/* __IVintage_FWD_DEFINED__ */


#ifndef __IVintages_FWD_DEFINED__
#define __IVintages_FWD_DEFINED__
typedef interface IVintages IVintages;
#endif 	/* __IVintages_FWD_DEFINED__ */


#ifndef __IWineType_FWD_DEFINED__
#define __IWineType_FWD_DEFINED__
typedef interface IWineType IWineType;
#endif 	/* __IWineType_FWD_DEFINED__ */


#ifndef __Config_FWD_DEFINED__
#define __Config_FWD_DEFINED__

#ifdef __cplusplus
typedef class Config Config;
#else
typedef struct Config Config;
#endif /* __cplusplus */

#endif 	/* __Config_FWD_DEFINED__ */


#ifndef __CategoryMapService_FWD_DEFINED__
#define __CategoryMapService_FWD_DEFINED__

#ifdef __cplusplus
typedef class CategoryMapService CategoryMapService;
#else
typedef struct CategoryMapService CategoryMapService;
#endif /* __cplusplus */

#endif 	/* __CategoryMapService_FWD_DEFINED__ */


#ifndef __CatalogService_FWD_DEFINED__
#define __CatalogService_FWD_DEFINED__

#ifdef __cplusplus
typedef class CatalogService CatalogService;
#else
typedef struct CatalogService CatalogService;
#endif /* __cplusplus */

#endif 	/* __CatalogService_FWD_DEFINED__ */


#ifndef __ReferenceService_FWD_DEFINED__
#define __ReferenceService_FWD_DEFINED__

#ifdef __cplusplus
typedef class ReferenceService ReferenceService;
#else
typedef struct ReferenceService ReferenceService;
#endif /* __cplusplus */

#endif 	/* __ReferenceService_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_WineApi_0000 */
/* [local] */ 

typedef /* [uuid] */ 
enum ReturnCode
    {	ReturnCodeSuccess	= 0,
	ReturnCodeCriticalError	= 100,
	ReturnCodeUnableToAuthorize	= 200,
	ReturnCodeNoAccess	= 300
    }	ReturnCode;

typedef /* [uuid] */ 
enum SortOptions
    {	SortOptionPopularity	= 0,
	SortOptionRating	= SortOptionPopularity + 1,
	SortOptionVintage	= SortOptionRating + 1,
	SortOptionWinery	= SortOptionVintage + 1,
	SortOptionName	= SortOptionWinery + 1,
	SortOptionPrice	= SortOptionName + 1,
	SortOptionSaving	= SortOptionPrice + 1,
	SortOptionJustIn	= SortOptionSaving + 1
    }	SortOptions;

typedef /* [uuid] */ 
enum SortDirection
    {	SortDirectionAscending	= 0,
	SortDirectionDescending	= SortDirectionAscending + 1
    }	SortDirection;
































extern RPC_IF_HANDLE __MIDL_itf_WineApi_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WineApi_0000_v0_0_s_ifspec;

#ifndef __IAppellation_INTERFACE_DEFINED__
#define __IAppellation_INTERFACE_DEFINED__

/* interface IAppellation */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAppellation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5D0DEF55-F950-4F6E-8B74-2F2B586561A1")
    IAppellation : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Region( 
            /* [retval][out] */ IRegion __RPC_FAR *__RPC_FAR *Region) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAppellationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAppellation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAppellation __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAppellation __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAppellation __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAppellation __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAppellation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAppellation __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IAppellation __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IAppellation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IAppellation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Region )( 
            IAppellation __RPC_FAR * This,
            /* [retval][out] */ IRegion __RPC_FAR *__RPC_FAR *Region);
        
        END_INTERFACE
    } IAppellationVtbl;

    interface IAppellation
    {
        CONST_VTBL struct IAppellationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppellation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAppellation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAppellation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAppellation_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAppellation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAppellation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAppellation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAppellation_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IAppellation_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IAppellation_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IAppellation_get_Region(This,Region)	\
    (This)->lpVtbl -> get_Region(This,Region)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAppellation_get_Id_Proxy( 
    IAppellation __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IAppellation_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAppellation_get_Name_Proxy( 
    IAppellation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IAppellation_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAppellation_get_Url_Proxy( 
    IAppellation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IAppellation_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IAppellation_get_Region_Proxy( 
    IAppellation __RPC_FAR * This,
    /* [retval][out] */ IRegion __RPC_FAR *__RPC_FAR *Region);


void __RPC_STUB IAppellation_get_Region_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAppellation_INTERFACE_DEFINED__ */


#ifndef __IArea_INTERFACE_DEFINED__
#define __IArea_INTERFACE_DEFINED__

/* interface IArea */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IArea;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19BEA1BB-47CA-4814-9F95-1CFC07F99B5B")
    IArea : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Parent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAreaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IArea __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IArea __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IArea __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IArea __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IArea __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IArea __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IArea __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IArea __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IArea __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IArea __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Parent )( 
            IArea __RPC_FAR * This,
            /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Parent);
        
        END_INTERFACE
    } IAreaVtbl;

    interface IArea
    {
        CONST_VTBL struct IAreaVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArea_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IArea_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IArea_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IArea_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IArea_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IArea_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IArea_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IArea_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IArea_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IArea_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IArea_get_Parent(This,Parent)	\
    (This)->lpVtbl -> get_Parent(This,Parent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArea_get_Id_Proxy( 
    IArea __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IArea_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArea_get_Name_Proxy( 
    IArea __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IArea_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArea_get_Url_Proxy( 
    IArea __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IArea_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArea_get_Parent_Proxy( 
    IArea __RPC_FAR * This,
    /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Parent);


void __RPC_STUB IArea_get_Parent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IArea_INTERFACE_DEFINED__ */


#ifndef __IArticle_INTERFACE_DEFINED__
#define __IArticle_INTERFACE_DEFINED__

/* interface IArticle */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IArticle;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD1AD367-5C42-4126-872C-4908AF7A87F5")
    IArticle : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR __RPC_FAR *Title) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Abstract( 
            /* [retval][out] */ BSTR __RPC_FAR *Abstract) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR __RPC_FAR *Content) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Footnotes( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Footnotes) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IArticleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IArticle __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IArticle __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IArticle __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IArticle __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IArticle __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IArticle __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IArticle __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Title )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Title);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Abstract )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Abstract);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Content )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Content);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Footnotes )( 
            IArticle __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Footnotes);
        
        END_INTERFACE
    } IArticleVtbl;

    interface IArticle
    {
        CONST_VTBL struct IArticleVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArticle_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IArticle_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IArticle_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IArticle_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IArticle_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IArticle_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IArticle_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IArticle_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IArticle_get_Title(This,Title)	\
    (This)->lpVtbl -> get_Title(This,Title)

#define IArticle_get_Abstract(This,Abstract)	\
    (This)->lpVtbl -> get_Abstract(This,Abstract)

#define IArticle_get_Content(This,Content)	\
    (This)->lpVtbl -> get_Content(This,Content)

#define IArticle_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IArticle_get_Footnotes(This,Footnotes)	\
    (This)->lpVtbl -> get_Footnotes(This,Footnotes)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Id_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Id);


void __RPC_STUB IArticle_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Title_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Title);


void __RPC_STUB IArticle_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Abstract_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Abstract);


void __RPC_STUB IArticle_get_Abstract_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Content_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Content);


void __RPC_STUB IArticle_get_Content_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Url_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IArticle_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IArticle_get_Footnotes_Proxy( 
    IArticle __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Footnotes);


void __RPC_STUB IArticle_get_Footnotes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IArticle_INTERFACE_DEFINED__ */


#ifndef __IBook_INTERFACE_DEFINED__
#define __IBook_INTERFACE_DEFINED__

/* interface IBook */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87B85F54-8EB4-4356-9B78-95F5B66498B5")
    IBook : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR __RPC_FAR *Title) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Articles( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Articles) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBook __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBook __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBook __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IBook __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IBook __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IBook __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IBook __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IBook __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Title )( 
            IBook __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Title);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Articles )( 
            IBook __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Articles);
        
        END_INTERFACE
    } IBookVtbl;

    interface IBook
    {
        CONST_VTBL struct IBookVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBook_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBook_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBook_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBook_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBook_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBook_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBook_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBook_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IBook_get_Title(This,Title)	\
    (This)->lpVtbl -> get_Title(This,Title)

#define IBook_get_Articles(This,Articles)	\
    (This)->lpVtbl -> get_Articles(This,Articles)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBook_get_Id_Proxy( 
    IBook __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Id);


void __RPC_STUB IBook_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBook_get_Title_Proxy( 
    IBook __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Title);


void __RPC_STUB IBook_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBook_get_Articles_Proxy( 
    IBook __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Articles);


void __RPC_STUB IBook_get_Articles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBook_INTERFACE_DEFINED__ */


#ifndef __ICatalog_INTERFACE_DEFINED__
#define __ICatalog_INTERFACE_DEFINED__

/* interface ICatalog */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICatalog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB7DF7A5-211A-431E-83D2-3E42CA803F72")
    ICatalog : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Products( 
            /* [retval][out] */ IProducts __RPC_FAR *__RPC_FAR *Products) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICatalogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICatalog __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICatalog __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICatalog __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICatalog __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICatalog __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICatalog __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICatalog __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            ICatalog __RPC_FAR * This,
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Products )( 
            ICatalog __RPC_FAR * This,
            /* [retval][out] */ IProducts __RPC_FAR *__RPC_FAR *Products);
        
        END_INTERFACE
    } ICatalogVtbl;

    interface ICatalog
    {
        CONST_VTBL struct ICatalogVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICatalog_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICatalog_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICatalog_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICatalog_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICatalog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICatalog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICatalog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICatalog_get_Status(This,Status)	\
    (This)->lpVtbl -> get_Status(This,Status)

#define ICatalog_get_Products(This,Products)	\
    (This)->lpVtbl -> get_Products(This,Products)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICatalog_get_Status_Proxy( 
    ICatalog __RPC_FAR * This,
    /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);


void __RPC_STUB ICatalog_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICatalog_get_Products_Proxy( 
    ICatalog __RPC_FAR * This,
    /* [retval][out] */ IProducts __RPC_FAR *__RPC_FAR *Products);


void __RPC_STUB ICatalog_get_Products_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICatalog_INTERFACE_DEFINED__ */


#ifndef __ICategory_INTERFACE_DEFINED__
#define __ICategory_INTERFACE_DEFINED__

/* interface ICategory */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD72D908-3638-41AF-A4BF-C1BBE08C29C5")
    ICategory : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Refinements( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Refinements) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICategory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICategory __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICategory __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICategory __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICategory __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICategory __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICategory __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            ICategory __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            ICategory __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Refinements )( 
            ICategory __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Refinements);
        
        END_INTERFACE
    } ICategoryVtbl;

    interface ICategory
    {
        CONST_VTBL struct ICategoryVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategory_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICategory_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICategory_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICategory_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICategory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICategory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICategory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICategory_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ICategory_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define ICategory_get_Refinements(This,Refinements)	\
    (This)->lpVtbl -> get_Refinements(This,Refinements)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICategory_get_Id_Proxy( 
    ICategory __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB ICategory_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICategory_get_Name_Proxy( 
    ICategory __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB ICategory_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICategory_get_Refinements_Proxy( 
    ICategory __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Refinements);


void __RPC_STUB ICategory_get_Refinements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICategory_INTERFACE_DEFINED__ */


#ifndef __ICategoryMap_INTERFACE_DEFINED__
#define __ICategoryMap_INTERFACE_DEFINED__

/* interface ICategoryMap */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICategoryMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BFF6C9C-5CC3-4347-B249-1D09BB4E8B78")
    ICategoryMap : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Categories) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICategoryMap __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICategoryMap __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICategoryMap __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICategoryMap __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICategoryMap __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICategoryMap __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICategoryMap __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            ICategoryMap __RPC_FAR * This,
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Categories )( 
            ICategoryMap __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Categories);
        
        END_INTERFACE
    } ICategoryMapVtbl;

    interface ICategoryMap
    {
        CONST_VTBL struct ICategoryMapVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategoryMap_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICategoryMap_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICategoryMap_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICategoryMap_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICategoryMap_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICategoryMap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICategoryMap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICategoryMap_get_Status(This,Status)	\
    (This)->lpVtbl -> get_Status(This,Status)

#define ICategoryMap_get_Categories(This,Categories)	\
    (This)->lpVtbl -> get_Categories(This,Categories)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICategoryMap_get_Status_Proxy( 
    ICategoryMap __RPC_FAR * This,
    /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);


void __RPC_STUB ICategoryMap_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICategoryMap_get_Categories_Proxy( 
    ICategoryMap __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Categories);


void __RPC_STUB ICategoryMap_get_Categories_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICategoryMap_INTERFACE_DEFINED__ */


#ifndef __ICommunity_INTERFACE_DEFINED__
#define __ICommunity_INTERFACE_DEFINED__

/* interface ICommunity */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICommunity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5563693C-3FB4-4D22-A9F8-6AED9DD5C348")
    ICommunity : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Reviews( 
            /* [retval][out] */ ICommunityReviews __RPC_FAR *__RPC_FAR *Reviews) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommunityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommunity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommunity __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommunity __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICommunity __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICommunity __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICommunity __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICommunity __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            ICommunity __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Reviews )( 
            ICommunity __RPC_FAR * This,
            /* [retval][out] */ ICommunityReviews __RPC_FAR *__RPC_FAR *Reviews);
        
        END_INTERFACE
    } ICommunityVtbl;

    interface ICommunity
    {
        CONST_VTBL struct ICommunityVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommunity_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommunity_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommunity_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommunity_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICommunity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICommunity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICommunity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICommunity_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define ICommunity_get_Reviews(This,Reviews)	\
    (This)->lpVtbl -> get_Reviews(This,Reviews)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunity_get_Url_Proxy( 
    ICommunity __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB ICommunity_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunity_get_Reviews_Proxy( 
    ICommunity __RPC_FAR * This,
    /* [retval][out] */ ICommunityReviews __RPC_FAR *__RPC_FAR *Reviews);


void __RPC_STUB ICommunity_get_Reviews_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommunity_INTERFACE_DEFINED__ */


#ifndef __ICommunityReview_INTERFACE_DEFINED__
#define __ICommunityReview_INTERFACE_DEFINED__

/* interface ICommunityReview */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICommunityReview;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A545728-BE93-4B5D-A1EF-3F48FF2DBF6B")
    ICommunityReview : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Score( 
            /* [retval][out] */ long __RPC_FAR *Score) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR __RPC_FAR *Description) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommunityReviewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommunityReview __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommunityReview __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommunityReview __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICommunityReview __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICommunityReview __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICommunityReview __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICommunityReview __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            ICommunityReview __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            ICommunityReview __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Score )( 
            ICommunityReview __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Score);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Description )( 
            ICommunityReview __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Description);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            ICommunityReview __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } ICommunityReviewVtbl;

    interface ICommunityReview
    {
        CONST_VTBL struct ICommunityReviewVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommunityReview_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommunityReview_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommunityReview_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommunityReview_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICommunityReview_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICommunityReview_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICommunityReview_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICommunityReview_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ICommunityReview_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define ICommunityReview_get_Score(This,Score)	\
    (This)->lpVtbl -> get_Score(This,Score)

#define ICommunityReview_get_Description(This,Description)	\
    (This)->lpVtbl -> get_Description(This,Description)

#define ICommunityReview_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReview_get_Id_Proxy( 
    ICommunityReview __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB ICommunityReview_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReview_get_Name_Proxy( 
    ICommunityReview __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB ICommunityReview_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReview_get_Score_Proxy( 
    ICommunityReview __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Score);


void __RPC_STUB ICommunityReview_get_Score_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReview_get_Description_Proxy( 
    ICommunityReview __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Description);


void __RPC_STUB ICommunityReview_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReview_get_Url_Proxy( 
    ICommunityReview __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB ICommunityReview_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommunityReview_INTERFACE_DEFINED__ */


#ifndef __ICommunityReviews_INTERFACE_DEFINED__
#define __ICommunityReviews_INTERFACE_DEFINED__

/* interface ICommunityReviews */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICommunityReviews;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFB91875-D954-4D3D-8050-5AF85296CFA3")
    ICommunityReviews : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HighestScore( 
            /* [retval][out] */ long __RPC_FAR *HighestScore) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommunityReviewsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommunityReviews __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommunityReviews __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommunityReviews __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICommunityReviews __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICommunityReviews __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICommunityReviews __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICommunityReviews __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HighestScore )( 
            ICommunityReviews __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *HighestScore);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            ICommunityReviews __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            ICommunityReviews __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);
        
        END_INTERFACE
    } ICommunityReviewsVtbl;

    interface ICommunityReviews
    {
        CONST_VTBL struct ICommunityReviewsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommunityReviews_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommunityReviews_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommunityReviews_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommunityReviews_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICommunityReviews_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICommunityReviews_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICommunityReviews_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICommunityReviews_get_HighestScore(This,HighestScore)	\
    (This)->lpVtbl -> get_HighestScore(This,HighestScore)

#define ICommunityReviews_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define ICommunityReviews_get_List(This,List)	\
    (This)->lpVtbl -> get_List(This,List)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReviews_get_HighestScore_Proxy( 
    ICommunityReviews __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *HighestScore);


void __RPC_STUB ICommunityReviews_get_HighestScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReviews_get_Url_Proxy( 
    ICommunityReviews __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB ICommunityReviews_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ICommunityReviews_get_List_Proxy( 
    ICommunityReviews __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);


void __RPC_STUB ICommunityReviews_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommunityReviews_INTERFACE_DEFINED__ */


#ifndef __IFootnote_INTERFACE_DEFINED__
#define __IFootnote_INTERFACE_DEFINED__

/* interface IFootnote */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFootnote;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19BD583B-F9A5-4F0A-9636-B8A9B2F9320E")
    IFootnote : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR __RPC_FAR *Title) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFootnoteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFootnote __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFootnote __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFootnote __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFootnote __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFootnote __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFootnote __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFootnote __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IFootnote __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Title )( 
            IFootnote __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Title);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IFootnote __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IFootnoteVtbl;

    interface IFootnote
    {
        CONST_VTBL struct IFootnoteVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFootnote_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFootnote_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFootnote_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFootnote_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFootnote_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFootnote_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFootnote_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFootnote_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IFootnote_get_Title(This,Title)	\
    (This)->lpVtbl -> get_Title(This,Title)

#define IFootnote_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IFootnote_get_Id_Proxy( 
    IFootnote __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Id);


void __RPC_STUB IFootnote_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IFootnote_get_Title_Proxy( 
    IFootnote __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Title);


void __RPC_STUB IFootnote_get_Title_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IFootnote_get_Url_Proxy( 
    IFootnote __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IFootnote_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFootnote_INTERFACE_DEFINED__ */


#ifndef __IGeoLocation_INTERFACE_DEFINED__
#define __IGeoLocation_INTERFACE_DEFINED__

/* interface IGeoLocation */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IGeoLocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01809819-7A29-4FDB-8430-448EBC4FE9A3")
    IGeoLocation : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Latitude( 
            /* [retval][out] */ long __RPC_FAR *Latitude) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Longitude( 
            /* [retval][out] */ long __RPC_FAR *Longitude) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGeoLocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGeoLocation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGeoLocation __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGeoLocation __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IGeoLocation __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IGeoLocation __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IGeoLocation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IGeoLocation __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Latitude )( 
            IGeoLocation __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Latitude);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Longitude )( 
            IGeoLocation __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Longitude);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IGeoLocation __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IGeoLocationVtbl;

    interface IGeoLocation
    {
        CONST_VTBL struct IGeoLocationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGeoLocation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGeoLocation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGeoLocation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGeoLocation_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IGeoLocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IGeoLocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IGeoLocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IGeoLocation_get_Latitude(This,Latitude)	\
    (This)->lpVtbl -> get_Latitude(This,Latitude)

#define IGeoLocation_get_Longitude(This,Longitude)	\
    (This)->lpVtbl -> get_Longitude(This,Longitude)

#define IGeoLocation_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IGeoLocation_get_Latitude_Proxy( 
    IGeoLocation __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Latitude);


void __RPC_STUB IGeoLocation_get_Latitude_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IGeoLocation_get_Longitude_Proxy( 
    IGeoLocation __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Longitude);


void __RPC_STUB IGeoLocation_get_Longitude_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IGeoLocation_get_Url_Proxy( 
    IGeoLocation __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IGeoLocation_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGeoLocation_INTERFACE_DEFINED__ */


#ifndef __ILabel_INTERFACE_DEFINED__
#define __ILabel_INTERFACE_DEFINED__

/* interface ILabel */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ILabel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D89D3E74-681B-4B2F-8682-66EF2F925BBC")
    ILabel : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILabelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ILabel __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ILabel __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ILabel __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ILabel __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ILabel __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ILabel __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ILabel __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            ILabel __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            ILabel __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            ILabel __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } ILabelVtbl;

    interface ILabel
    {
        CONST_VTBL struct ILabelVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILabel_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILabel_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILabel_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILabel_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ILabel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ILabel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ILabel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ILabel_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define ILabel_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define ILabel_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILabel_get_Id_Proxy( 
    ILabel __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Id);


void __RPC_STUB ILabel_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILabel_get_Name_Proxy( 
    ILabel __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB ILabel_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILabel_get_Url_Proxy( 
    ILabel __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB ILabel_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILabel_INTERFACE_DEFINED__ */


#ifndef __IObjectCollection_INTERFACE_DEFINED__
#define __IObjectCollection_INTERFACE_DEFINED__

/* interface IObjectCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6494BD88-BB53-4867-9F9D-0C9F0EEDA937")
    IObjectCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *Count) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Item) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObjectCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObjectCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObjectCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IObjectCollection __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IObjectCollection __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IObjectCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IObjectCollection __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IObjectCollection __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IObjectCollection __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Item);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IObjectCollection __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum);
        
        END_INTERFACE
    } IObjectCollectionVtbl;

    interface IObjectCollection
    {
        CONST_VTBL struct IObjectCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObjectCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObjectCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObjectCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IObjectCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IObjectCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IObjectCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IObjectCollection_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define IObjectCollection_get_Item(This,Index,Item)	\
    (This)->lpVtbl -> get_Item(This,Index,Item)

#define IObjectCollection_get__NewEnum(This,Enum)	\
    (This)->lpVtbl -> get__NewEnum(This,Enum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IObjectCollection_get_Count_Proxy( 
    IObjectCollection __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Count);


void __RPC_STUB IObjectCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IObjectCollection_get_Item_Proxy( 
    IObjectCollection __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *Item);


void __RPC_STUB IObjectCollection_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IObjectCollection_get__NewEnum_Proxy( 
    IObjectCollection __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum);


void __RPC_STUB IObjectCollection_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObjectCollection_INTERFACE_DEFINED__ */


#ifndef __IProduct_INTERFACE_DEFINED__
#define __IProduct_INTERFACE_DEFINED__

/* interface IProduct */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProduct;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81BB218A-3DED-4941-8BDB-F773E82ED0F7")
    IProduct : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR __RPC_FAR *Description) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PriceMin( 
            /* [retval][out] */ double __RPC_FAR *PriceMin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PriceMax( 
            /* [retval][out] */ double __RPC_FAR *PriceMax) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PriceRetail( 
            /* [retval][out] */ double __RPC_FAR *PriceRetail) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *Type) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Year( 
            /* [retval][out] */ BSTR __RPC_FAR *Year) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoLocation( 
            /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Appellation( 
            /* [retval][out] */ IAppellation __RPC_FAR *__RPC_FAR *Appellation) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Varietal( 
            /* [retval][out] */ IVarietal __RPC_FAR *__RPC_FAR *Varietal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vineyard( 
            /* [retval][out] */ IVineyard __RPC_FAR *__RPC_FAR *Vineyard) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ratings( 
            /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Retail( 
            /* [retval][out] */ IRetail __RPC_FAR *__RPC_FAR *Retail) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Vintages( 
            /* [retval][out] */ IVintages __RPC_FAR *__RPC_FAR *Vintages) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Community( 
            /* [retval][out] */ ICommunity __RPC_FAR *__RPC_FAR *Community) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProductAttributes( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *ProductAttributes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Labels( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Labels) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProductVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProduct __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProduct __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProduct __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProduct __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProduct __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProduct __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProduct __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Description )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Description);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PriceMin )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *PriceMin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PriceMax )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *PriceMax);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PriceRetail )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *PriceRetail);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Type);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Year )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Year);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GeoLocation )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Appellation )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IAppellation __RPC_FAR *__RPC_FAR *Appellation);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Varietal )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IVarietal __RPC_FAR *__RPC_FAR *Varietal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Vineyard )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IVineyard __RPC_FAR *__RPC_FAR *Vineyard);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Ratings )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Retail )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IRetail __RPC_FAR *__RPC_FAR *Retail);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Vintages )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IVintages __RPC_FAR *__RPC_FAR *Vintages);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Community )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ ICommunity __RPC_FAR *__RPC_FAR *Community);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ProductAttributes )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *ProductAttributes);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Labels )( 
            IProduct __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Labels);
        
        END_INTERFACE
    } IProductVtbl;

    interface IProduct
    {
        CONST_VTBL struct IProductVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProduct_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProduct_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProduct_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProduct_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProduct_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProduct_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProduct_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProduct_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IProduct_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IProduct_get_Description(This,Description)	\
    (This)->lpVtbl -> get_Description(This,Description)

#define IProduct_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IProduct_get_PriceMin(This,PriceMin)	\
    (This)->lpVtbl -> get_PriceMin(This,PriceMin)

#define IProduct_get_PriceMax(This,PriceMax)	\
    (This)->lpVtbl -> get_PriceMax(This,PriceMax)

#define IProduct_get_PriceRetail(This,PriceRetail)	\
    (This)->lpVtbl -> get_PriceRetail(This,PriceRetail)

#define IProduct_get_Type(This,Type)	\
    (This)->lpVtbl -> get_Type(This,Type)

#define IProduct_get_Year(This,Year)	\
    (This)->lpVtbl -> get_Year(This,Year)

#define IProduct_get_GeoLocation(This,GeoLocation)	\
    (This)->lpVtbl -> get_GeoLocation(This,GeoLocation)

#define IProduct_get_Appellation(This,Appellation)	\
    (This)->lpVtbl -> get_Appellation(This,Appellation)

#define IProduct_get_Varietal(This,Varietal)	\
    (This)->lpVtbl -> get_Varietal(This,Varietal)

#define IProduct_get_Vineyard(This,Vineyard)	\
    (This)->lpVtbl -> get_Vineyard(This,Vineyard)

#define IProduct_get_Ratings(This,Ratings)	\
    (This)->lpVtbl -> get_Ratings(This,Ratings)

#define IProduct_get_Retail(This,Retail)	\
    (This)->lpVtbl -> get_Retail(This,Retail)

#define IProduct_get_Vintages(This,Vintages)	\
    (This)->lpVtbl -> get_Vintages(This,Vintages)

#define IProduct_get_Community(This,Community)	\
    (This)->lpVtbl -> get_Community(This,Community)

#define IProduct_get_ProductAttributes(This,ProductAttributes)	\
    (This)->lpVtbl -> get_ProductAttributes(This,ProductAttributes)

#define IProduct_get_Labels(This,Labels)	\
    (This)->lpVtbl -> get_Labels(This,Labels)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Id_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IProduct_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Name_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IProduct_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Description_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Description);


void __RPC_STUB IProduct_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Url_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IProduct_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_PriceMin_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *PriceMin);


void __RPC_STUB IProduct_get_PriceMin_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_PriceMax_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *PriceMax);


void __RPC_STUB IProduct_get_PriceMax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_PriceRetail_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *PriceRetail);


void __RPC_STUB IProduct_get_PriceRetail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Type_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Type);


void __RPC_STUB IProduct_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Year_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Year);


void __RPC_STUB IProduct_get_Year_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_GeoLocation_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation);


void __RPC_STUB IProduct_get_GeoLocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Appellation_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IAppellation __RPC_FAR *__RPC_FAR *Appellation);


void __RPC_STUB IProduct_get_Appellation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Varietal_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IVarietal __RPC_FAR *__RPC_FAR *Varietal);


void __RPC_STUB IProduct_get_Varietal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Vineyard_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IVineyard __RPC_FAR *__RPC_FAR *Vineyard);


void __RPC_STUB IProduct_get_Vineyard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Ratings_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings);


void __RPC_STUB IProduct_get_Ratings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Retail_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IRetail __RPC_FAR *__RPC_FAR *Retail);


void __RPC_STUB IProduct_get_Retail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Vintages_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IVintages __RPC_FAR *__RPC_FAR *Vintages);


void __RPC_STUB IProduct_get_Vintages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Community_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ ICommunity __RPC_FAR *__RPC_FAR *Community);


void __RPC_STUB IProduct_get_Community_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_ProductAttributes_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *ProductAttributes);


void __RPC_STUB IProduct_get_ProductAttributes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProduct_get_Labels_Proxy( 
    IProduct __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Labels);


void __RPC_STUB IProduct_get_Labels_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProduct_INTERFACE_DEFINED__ */


#ifndef __IProductAttribute_INTERFACE_DEFINED__
#define __IProductAttribute_INTERFACE_DEFINED__

/* interface IProductAttribute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProductAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B67475D6-8DD4-4C9B-BAD6-9271A1E8D3C4")
    IProductAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProductAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProductAttribute __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProductAttribute __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProductAttribute __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProductAttribute __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProductAttribute __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProductAttribute __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProductAttribute __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IProductAttribute __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IProductAttribute __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IProductAttribute __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IProductAttributeVtbl;

    interface IProductAttribute
    {
        CONST_VTBL struct IProductAttributeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProductAttribute_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProductAttribute_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProductAttribute_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProductAttribute_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProductAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProductAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProductAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProductAttribute_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IProductAttribute_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IProductAttribute_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductAttribute_get_Id_Proxy( 
    IProductAttribute __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IProductAttribute_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductAttribute_get_Name_Proxy( 
    IProductAttribute __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IProductAttribute_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductAttribute_get_Url_Proxy( 
    IProductAttribute __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IProductAttribute_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProductAttribute_INTERFACE_DEFINED__ */


#ifndef __IProducts_INTERFACE_DEFINED__
#define __IProducts_INTERFACE_DEFINED__

/* interface IProducts */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProducts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D96ADEE5-37CE-4B12-A354-F6E9D8626993")
    IProducts : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Total( 
            /* [retval][out] */ long __RPC_FAR *Total) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Offset( 
            /* [retval][out] */ long __RPC_FAR *Offset) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProductsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProducts __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProducts __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProducts __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProducts __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProducts __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProducts __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProducts __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Total )( 
            IProducts __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Total);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Offset )( 
            IProducts __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Offset);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IProducts __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            IProducts __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);
        
        END_INTERFACE
    } IProductsVtbl;

    interface IProducts
    {
        CONST_VTBL struct IProductsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProducts_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProducts_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProducts_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProducts_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProducts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProducts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProducts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProducts_get_Total(This,Total)	\
    (This)->lpVtbl -> get_Total(This,Total)

#define IProducts_get_Offset(This,Offset)	\
    (This)->lpVtbl -> get_Offset(This,Offset)

#define IProducts_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IProducts_get_List(This,List)	\
    (This)->lpVtbl -> get_List(This,List)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProducts_get_Total_Proxy( 
    IProducts __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Total);


void __RPC_STUB IProducts_get_Total_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProducts_get_Offset_Proxy( 
    IProducts __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Offset);


void __RPC_STUB IProducts_get_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProducts_get_Url_Proxy( 
    IProducts __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IProducts_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProducts_get_List_Proxy( 
    IProducts __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);


void __RPC_STUB IProducts_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProducts_INTERFACE_DEFINED__ */


#ifndef __IRating_INTERFACE_DEFINED__
#define __IRating_INTERFACE_DEFINED__

/* interface IRating */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRating;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5B0979D-14EE-4DA9-BC95-9EEE539D8B8C")
    IRating : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Score( 
            /* [retval][out] */ long __RPC_FAR *Score) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRatingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRating __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRating __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRating __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRating __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRating __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRating __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRating __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IRating __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IRating __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Score )( 
            IRating __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Score);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IRating __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IRatingVtbl;

    interface IRating
    {
        CONST_VTBL struct IRatingVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRating_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRating_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRating_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRating_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRating_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRating_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRating_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRating_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IRating_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IRating_get_Score(This,Score)	\
    (This)->lpVtbl -> get_Score(This,Score)

#define IRating_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRating_get_Id_Proxy( 
    IRating __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IRating_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRating_get_Name_Proxy( 
    IRating __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IRating_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRating_get_Score_Proxy( 
    IRating __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Score);


void __RPC_STUB IRating_get_Score_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRating_get_Url_Proxy( 
    IRating __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IRating_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRating_INTERFACE_DEFINED__ */


#ifndef __IRatings_INTERFACE_DEFINED__
#define __IRatings_INTERFACE_DEFINED__

/* interface IRatings */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRatings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07FAE185-EEBE-4C37-BFA6-A93F28990C1F")
    IRatings : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HighestScore( 
            /* [retval][out] */ long __RPC_FAR *HighestScore) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRatingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRatings __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRatings __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRatings __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRatings __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRatings __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRatings __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRatings __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_HighestScore )( 
            IRatings __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *HighestScore);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            IRatings __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);
        
        END_INTERFACE
    } IRatingsVtbl;

    interface IRatings
    {
        CONST_VTBL struct IRatingsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRatings_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRatings_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRatings_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRatings_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRatings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRatings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRatings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRatings_get_HighestScore(This,HighestScore)	\
    (This)->lpVtbl -> get_HighestScore(This,HighestScore)

#define IRatings_get_List(This,List)	\
    (This)->lpVtbl -> get_List(This,List)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRatings_get_HighestScore_Proxy( 
    IRatings __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *HighestScore);


void __RPC_STUB IRatings_get_HighestScore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRatings_get_List_Proxy( 
    IRatings __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);


void __RPC_STUB IRatings_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRatings_INTERFACE_DEFINED__ */


#ifndef __IReference_INTERFACE_DEFINED__
#define __IReference_INTERFACE_DEFINED__

/* interface IReference */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D148803C-A8AE-47E7-A984-E482746527BC")
    IReference : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Books( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Books) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IReference __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IReference __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IReference __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IReference __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IReference __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IReference __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IReference __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IReference __RPC_FAR * This,
            /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Books )( 
            IReference __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Books);
        
        END_INTERFACE
    } IReferenceVtbl;

    interface IReference
    {
        CONST_VTBL struct IReferenceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReference_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReference_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReference_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReference_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IReference_get_Status(This,Status)	\
    (This)->lpVtbl -> get_Status(This,Status)

#define IReference_get_Books(This,Books)	\
    (This)->lpVtbl -> get_Books(This,Books)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IReference_get_Status_Proxy( 
    IReference __RPC_FAR * This,
    /* [retval][out] */ IStatus __RPC_FAR *__RPC_FAR *Status);


void __RPC_STUB IReference_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IReference_get_Books_Proxy( 
    IReference __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *Books);


void __RPC_STUB IReference_get_Books_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReference_INTERFACE_DEFINED__ */


#ifndef __IRefinement_INTERFACE_DEFINED__
#define __IRefinement_INTERFACE_DEFINED__

/* interface IRefinement */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRefinement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE8D6329-FC4A-472A-BEE6-7F2B6D051B75")
    IRefinement : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRefinementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRefinement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRefinement __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRefinement __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRefinement __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRefinement __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRefinement __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRefinement __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IRefinement __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IRefinement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IRefinement __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IRefinementVtbl;

    interface IRefinement
    {
        CONST_VTBL struct IRefinementVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRefinement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRefinement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRefinement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRefinement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRefinement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRefinement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRefinement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRefinement_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IRefinement_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IRefinement_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRefinement_get_Id_Proxy( 
    IRefinement __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IRefinement_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRefinement_get_Name_Proxy( 
    IRefinement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IRefinement_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRefinement_get_Url_Proxy( 
    IRefinement __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IRefinement_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRefinement_INTERFACE_DEFINED__ */


#ifndef __IRegion_INTERFACE_DEFINED__
#define __IRegion_INTERFACE_DEFINED__

/* interface IRegion */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRegion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0BE22B32-DF39-47AD-B44C-A3DC8CD68C66")
    IRegion : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Area( 
            /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Area) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRegionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRegion __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRegion __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRegion __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRegion __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRegion __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRegion __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRegion __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IRegion __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IRegion __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IRegion __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Area )( 
            IRegion __RPC_FAR * This,
            /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Area);
        
        END_INTERFACE
    } IRegionVtbl;

    interface IRegion
    {
        CONST_VTBL struct IRegionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegion_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRegion_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRegion_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRegion_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRegion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRegion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRegion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRegion_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IRegion_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IRegion_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IRegion_get_Area(This,Area)	\
    (This)->lpVtbl -> get_Area(This,Area)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRegion_get_Id_Proxy( 
    IRegion __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IRegion_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRegion_get_Name_Proxy( 
    IRegion __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IRegion_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRegion_get_Url_Proxy( 
    IRegion __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IRegion_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRegion_get_Area_Proxy( 
    IRegion __RPC_FAR * This,
    /* [retval][out] */ IArea __RPC_FAR *__RPC_FAR *Area);


void __RPC_STUB IRegion_get_Area_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRegion_INTERFACE_DEFINED__ */


#ifndef __IRetail_INTERFACE_DEFINED__
#define __IRetail_INTERFACE_DEFINED__

/* interface IRetail */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IRetail;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78F07435-050F-4D02-B27D-C37D380A2602")
    IRetail : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sku( 
            /* [retval][out] */ BSTR __RPC_FAR *Sku) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InStock( 
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *InStock) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Price( 
            /* [retval][out] */ double __RPC_FAR *Price) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRetailVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRetail __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRetail __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRetail __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IRetail __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IRetail __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IRetail __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IRetail __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Sku )( 
            IRetail __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Sku);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InStock )( 
            IRetail __RPC_FAR * This,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *InStock);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Price )( 
            IRetail __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *Price);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IRetail __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IRetailVtbl;

    interface IRetail
    {
        CONST_VTBL struct IRetailVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRetail_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRetail_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRetail_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRetail_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IRetail_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IRetail_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IRetail_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IRetail_get_Sku(This,Sku)	\
    (This)->lpVtbl -> get_Sku(This,Sku)

#define IRetail_get_InStock(This,InStock)	\
    (This)->lpVtbl -> get_InStock(This,InStock)

#define IRetail_get_Price(This,Price)	\
    (This)->lpVtbl -> get_Price(This,Price)

#define IRetail_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRetail_get_Sku_Proxy( 
    IRetail __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Sku);


void __RPC_STUB IRetail_get_Sku_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRetail_get_InStock_Proxy( 
    IRetail __RPC_FAR * This,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *InStock);


void __RPC_STUB IRetail_get_InStock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRetail_get_Price_Proxy( 
    IRetail __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *Price);


void __RPC_STUB IRetail_get_Price_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IRetail_get_Url_Proxy( 
    IRetail __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IRetail_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRetail_INTERFACE_DEFINED__ */


#ifndef __IStatus_INTERFACE_DEFINED__
#define __IStatus_INTERFACE_DEFINED__

/* interface IStatus */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E06B4384-2B1F-4D5C-977B-F2D265679E20")
    IStatus : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReturnCode( 
            /* [retval][out] */ long __RPC_FAR *ReturnCode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Messages( 
            /* [retval][out] */ IStringCollection __RPC_FAR *__RPC_FAR *Messages) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStatus __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStatus __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStatus __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IStatus __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IStatus __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IStatus __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IStatus __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ReturnCode )( 
            IStatus __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *ReturnCode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Messages )( 
            IStatus __RPC_FAR * This,
            /* [retval][out] */ IStringCollection __RPC_FAR *__RPC_FAR *Messages);
        
        END_INTERFACE
    } IStatusVtbl;

    interface IStatus
    {
        CONST_VTBL struct IStatusVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStatus_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStatus_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStatus_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStatus_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IStatus_get_ReturnCode(This,ReturnCode)	\
    (This)->lpVtbl -> get_ReturnCode(This,ReturnCode)

#define IStatus_get_Messages(This,Messages)	\
    (This)->lpVtbl -> get_Messages(This,Messages)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStatus_get_ReturnCode_Proxy( 
    IStatus __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *ReturnCode);


void __RPC_STUB IStatus_get_ReturnCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStatus_get_Messages_Proxy( 
    IStatus __RPC_FAR * This,
    /* [retval][out] */ IStringCollection __RPC_FAR *__RPC_FAR *Messages);


void __RPC_STUB IStatus_get_Messages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStatus_INTERFACE_DEFINED__ */


#ifndef __IStringCollection_INTERFACE_DEFINED__
#define __IStringCollection_INTERFACE_DEFINED__

/* interface IStringCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStringCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8DBDB63-D035-4E3B-BB9F-611FAFFC2D2C")
    IStringCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *Count) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR __RPC_FAR *Item) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStringCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStringCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStringCollection __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStringCollection __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IStringCollection __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IStringCollection __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IStringCollection __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IStringCollection __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IStringCollection __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Count);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )( 
            IStringCollection __RPC_FAR * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR __RPC_FAR *Item);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IStringCollection __RPC_FAR * This,
            /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum);
        
        END_INTERFACE
    } IStringCollectionVtbl;

    interface IStringCollection
    {
        CONST_VTBL struct IStringCollectionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStringCollection_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStringCollection_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStringCollection_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStringCollection_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IStringCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IStringCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IStringCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IStringCollection_get_Count(This,Count)	\
    (This)->lpVtbl -> get_Count(This,Count)

#define IStringCollection_get_Item(This,Index,Item)	\
    (This)->lpVtbl -> get_Item(This,Index,Item)

#define IStringCollection_get__NewEnum(This,Enum)	\
    (This)->lpVtbl -> get__NewEnum(This,Enum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringCollection_get_Count_Proxy( 
    IStringCollection __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Count);


void __RPC_STUB IStringCollection_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringCollection_get_Item_Proxy( 
    IStringCollection __RPC_FAR * This,
    /* [in] */ long Index,
    /* [retval][out] */ BSTR __RPC_FAR *Item);


void __RPC_STUB IStringCollection_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStringCollection_get__NewEnum_Proxy( 
    IStringCollection __RPC_FAR * This,
    /* [retval][out] */ IUnknown __RPC_FAR *__RPC_FAR *Enum);


void __RPC_STUB IStringCollection_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStringCollection_INTERFACE_DEFINED__ */


#ifndef __IVarietal_INTERFACE_DEFINED__
#define __IVarietal_INTERFACE_DEFINED__

/* interface IVarietal */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVarietal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F75590F1-8FFB-4560-A680-163B2AF00BE0")
    IVarietal : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WineType( 
            /* [retval][out] */ IWineType __RPC_FAR *__RPC_FAR *WineType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVarietalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IVarietal __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IVarietal __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IVarietal __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IVarietal __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IVarietal __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IVarietal __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IVarietal __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IVarietal __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IVarietal __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IVarietal __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_WineType )( 
            IVarietal __RPC_FAR * This,
            /* [retval][out] */ IWineType __RPC_FAR *__RPC_FAR *WineType);
        
        END_INTERFACE
    } IVarietalVtbl;

    interface IVarietal
    {
        CONST_VTBL struct IVarietalVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVarietal_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVarietal_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVarietal_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVarietal_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVarietal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVarietal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVarietal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVarietal_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IVarietal_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IVarietal_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IVarietal_get_WineType(This,WineType)	\
    (This)->lpVtbl -> get_WineType(This,WineType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVarietal_get_Id_Proxy( 
    IVarietal __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IVarietal_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVarietal_get_Name_Proxy( 
    IVarietal __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IVarietal_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVarietal_get_Url_Proxy( 
    IVarietal __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IVarietal_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVarietal_get_WineType_Proxy( 
    IVarietal __RPC_FAR * This,
    /* [retval][out] */ IWineType __RPC_FAR *__RPC_FAR *WineType);


void __RPC_STUB IVarietal_get_WineType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVarietal_INTERFACE_DEFINED__ */


#ifndef __IVineyard_INTERFACE_DEFINED__
#define __IVineyard_INTERFACE_DEFINED__

/* interface IVineyard */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVineyard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A62234F2-AD0F-43BB-973E-8BE604602DCC")
    IVineyard : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GeoLocation( 
            /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVineyardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IVineyard __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IVineyard __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IVineyard __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IVineyard __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IVineyard __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IVineyard __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IVineyard __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IVineyard __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IVineyard __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IVineyard __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_GeoLocation )( 
            IVineyard __RPC_FAR * This,
            /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation);
        
        END_INTERFACE
    } IVineyardVtbl;

    interface IVineyard
    {
        CONST_VTBL struct IVineyardVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVineyard_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVineyard_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVineyard_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVineyard_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVineyard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVineyard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVineyard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVineyard_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IVineyard_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IVineyard_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IVineyard_get_GeoLocation(This,GeoLocation)	\
    (This)->lpVtbl -> get_GeoLocation(This,GeoLocation)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVineyard_get_Id_Proxy( 
    IVineyard __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IVineyard_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVineyard_get_Name_Proxy( 
    IVineyard __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IVineyard_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVineyard_get_Url_Proxy( 
    IVineyard __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IVineyard_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVineyard_get_GeoLocation_Proxy( 
    IVineyard __RPC_FAR * This,
    /* [retval][out] */ IGeoLocation __RPC_FAR *__RPC_FAR *GeoLocation);


void __RPC_STUB IVineyard_get_GeoLocation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVineyard_INTERFACE_DEFINED__ */


#ifndef __IVintage_INTERFACE_DEFINED__
#define __IVintage_INTERFACE_DEFINED__

/* interface IVintage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVintage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84D5E4AC-D3D6-4030-85AE-54D18CF9FA02")
    IVintage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ratings( 
            /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVintageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IVintage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IVintage __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IVintage __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IVintage __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IVintage __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IVintage __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IVintage __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IVintage __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IVintage __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IVintage __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Ratings )( 
            IVintage __RPC_FAR * This,
            /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings);
        
        END_INTERFACE
    } IVintageVtbl;

    interface IVintage
    {
        CONST_VTBL struct IVintageVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVintage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVintage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVintage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVintage_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVintage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVintage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVintage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVintage_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IVintage_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IVintage_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#define IVintage_get_Ratings(This,Ratings)	\
    (This)->lpVtbl -> get_Ratings(This,Ratings)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVintage_get_Id_Proxy( 
    IVintage __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IVintage_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVintage_get_Name_Proxy( 
    IVintage __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IVintage_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVintage_get_Url_Proxy( 
    IVintage __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IVintage_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVintage_get_Ratings_Proxy( 
    IVintage __RPC_FAR * This,
    /* [retval][out] */ IRatings __RPC_FAR *__RPC_FAR *Ratings);


void __RPC_STUB IVintage_get_Ratings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVintage_INTERFACE_DEFINED__ */


#ifndef __IVintages_INTERFACE_DEFINED__
#define __IVintages_INTERFACE_DEFINED__

/* interface IVintages */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IVintages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("647D676E-475E-4C15-9BB7-9A8DFAB902FD")
    IVintages : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_List( 
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVintagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IVintages __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IVintages __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IVintages __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IVintages __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IVintages __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IVintages __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IVintages __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_List )( 
            IVintages __RPC_FAR * This,
            /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);
        
        END_INTERFACE
    } IVintagesVtbl;

    interface IVintages
    {
        CONST_VTBL struct IVintagesVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVintages_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVintages_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVintages_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVintages_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVintages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVintages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVintages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVintages_get_List(This,List)	\
    (This)->lpVtbl -> get_List(This,List)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IVintages_get_List_Proxy( 
    IVintages __RPC_FAR * This,
    /* [retval][out] */ IObjectCollection __RPC_FAR *__RPC_FAR *List);


void __RPC_STUB IVintages_get_List_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVintages_INTERFACE_DEFINED__ */


#ifndef __IWineType_INTERFACE_DEFINED__
#define __IWineType_INTERFACE_DEFINED__

/* interface IWineType */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWineType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F596011D-FF0A-4E91-814E-AF7A9B5FAB9D")
    IWineType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long __RPC_FAR *Id) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR __RPC_FAR *Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR __RPC_FAR *Url) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWineTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IWineType __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IWineType __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IWineType __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IWineType __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IWineType __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IWineType __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IWineType __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Id )( 
            IWineType __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *Id);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Name )( 
            IWineType __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Url )( 
            IWineType __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Url);
        
        END_INTERFACE
    } IWineTypeVtbl;

    interface IWineType
    {
        CONST_VTBL struct IWineTypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWineType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWineType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWineType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWineType_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWineType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWineType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWineType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWineType_get_Id(This,Id)	\
    (This)->lpVtbl -> get_Id(This,Id)

#define IWineType_get_Name(This,Name)	\
    (This)->lpVtbl -> get_Name(This,Name)

#define IWineType_get_Url(This,Url)	\
    (This)->lpVtbl -> get_Url(This,Url)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWineType_get_Id_Proxy( 
    IWineType __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *Id);


void __RPC_STUB IWineType_get_Id_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWineType_get_Name_Proxy( 
    IWineType __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Name);


void __RPC_STUB IWineType_get_Name_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IWineType_get_Url_Proxy( 
    IWineType __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Url);


void __RPC_STUB IWineType_get_Url_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWineType_INTERFACE_DEFINED__ */


#ifndef __IConfig_INTERFACE_DEFINED__
#define __IConfig_INTERFACE_DEFINED__

/* interface IConfig */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BACF1BE0-7A6D-4DEE-BBEE-38C0CCB3BFE9")
    IConfig : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ApiKey( 
            /* [retval][out] */ BSTR __RPC_FAR *ApiKey) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ApiKey( 
            /* [in] */ BSTR ApiKey) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR __RPC_FAR *Version) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR Version) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IConfig __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IConfig __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IConfig __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IConfig __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IConfig __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IConfig __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IConfig __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ApiKey )( 
            IConfig __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *ApiKey);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ApiKey )( 
            IConfig __RPC_FAR * This,
            /* [in] */ BSTR ApiKey);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Version )( 
            IConfig __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *Version);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Version )( 
            IConfig __RPC_FAR * This,
            /* [in] */ BSTR Version);
        
        END_INTERFACE
    } IConfigVtbl;

    interface IConfig
    {
        CONST_VTBL struct IConfigVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfig_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IConfig_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IConfig_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IConfig_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IConfig_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IConfig_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IConfig_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IConfig_get_ApiKey(This,ApiKey)	\
    (This)->lpVtbl -> get_ApiKey(This,ApiKey)

#define IConfig_put_ApiKey(This,ApiKey)	\
    (This)->lpVtbl -> put_ApiKey(This,ApiKey)

#define IConfig_get_Version(This,Version)	\
    (This)->lpVtbl -> get_Version(This,Version)

#define IConfig_put_Version(This,Version)	\
    (This)->lpVtbl -> put_Version(This,Version)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConfig_get_ApiKey_Proxy( 
    IConfig __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *ApiKey);


void __RPC_STUB IConfig_get_ApiKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConfig_put_ApiKey_Proxy( 
    IConfig __RPC_FAR * This,
    /* [in] */ BSTR ApiKey);


void __RPC_STUB IConfig_put_ApiKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IConfig_get_Version_Proxy( 
    IConfig __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *Version);


void __RPC_STUB IConfig_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IConfig_put_Version_Proxy( 
    IConfig __RPC_FAR * This,
    /* [in] */ BSTR Version);


void __RPC_STUB IConfig_put_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IConfig_INTERFACE_DEFINED__ */


#ifndef __ICategoryMapService_INTERFACE_DEFINED__
#define __ICategoryMapService_INTERFACE_DEFINED__

/* interface ICategoryMapService */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICategoryMapService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("618D119B-366C-486B-89C0-72B357837DE8")
    ICategoryMapService : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ ICategoryMap __RPC_FAR *__RPC_FAR *CategoryMap) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter1( 
            /* [in] */ long Id1,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter2( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter3( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter4( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter5( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter( 
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search1( 
            /* [in] */ BSTR Term1,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search2( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search3( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search4( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search5( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [in] */ BSTR Term5,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [in] */ SAFEARRAY __RPC_FAR * Terms,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ long Id,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryMapServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICategoryMapService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICategoryMapService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICategoryMapService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            ICategoryMapService __RPC_FAR * This,
            /* [retval][out] */ ICategoryMap __RPC_FAR *__RPC_FAR *CategoryMap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter1 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter2 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter3 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter4 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter5 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search1 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search2 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search3 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search4 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search5 )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [in] */ BSTR Term5,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Terms,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Show )( 
            ICategoryMapService __RPC_FAR * This,
            /* [in] */ long Id,
            /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);
        
        END_INTERFACE
    } ICategoryMapServiceVtbl;

    interface ICategoryMapService
    {
        CONST_VTBL struct ICategoryMapServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategoryMapService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICategoryMapService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICategoryMapService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICategoryMapService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICategoryMapService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICategoryMapService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICategoryMapService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICategoryMapService_Execute(This,CategoryMap)	\
    (This)->lpVtbl -> Execute(This,CategoryMap)

#define ICategoryMapService_CategoryFilter1(This,Id1,Self)	\
    (This)->lpVtbl -> CategoryFilter1(This,Id1,Self)

#define ICategoryMapService_CategoryFilter2(This,Id1,Id2,Self)	\
    (This)->lpVtbl -> CategoryFilter2(This,Id1,Id2,Self)

#define ICategoryMapService_CategoryFilter3(This,Id1,Id2,Id3,Self)	\
    (This)->lpVtbl -> CategoryFilter3(This,Id1,Id2,Id3,Self)

#define ICategoryMapService_CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)	\
    (This)->lpVtbl -> CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)

#define ICategoryMapService_CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)	\
    (This)->lpVtbl -> CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)

#define ICategoryMapService_CategoryFilter(This,Categories,Self)	\
    (This)->lpVtbl -> CategoryFilter(This,Categories,Self)

#define ICategoryMapService_Search1(This,Term1,Self)	\
    (This)->lpVtbl -> Search1(This,Term1,Self)

#define ICategoryMapService_Search2(This,Term1,Term2,Self)	\
    (This)->lpVtbl -> Search2(This,Term1,Term2,Self)

#define ICategoryMapService_Search3(This,Term1,Term2,Term3,Self)	\
    (This)->lpVtbl -> Search3(This,Term1,Term2,Term3,Self)

#define ICategoryMapService_Search4(This,Term1,Term2,Term3,Term4,Self)	\
    (This)->lpVtbl -> Search4(This,Term1,Term2,Term3,Term4,Self)

#define ICategoryMapService_Search5(This,Term1,Term2,Term3,Term4,Term5,Self)	\
    (This)->lpVtbl -> Search5(This,Term1,Term2,Term3,Term4,Term5,Self)

#define ICategoryMapService_Search(This,Terms,Self)	\
    (This)->lpVtbl -> Search(This,Terms,Self)

#define ICategoryMapService_Show(This,Id,Self)	\
    (This)->lpVtbl -> Show(This,Id,Self)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Execute_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [retval][out] */ ICategoryMap __RPC_FAR *__RPC_FAR *CategoryMap);


void __RPC_STUB ICategoryMapService_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter1_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter2_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter3_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter4_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter5_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [in] */ long Id5,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_CategoryFilter_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Categories,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_CategoryFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search1_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search2_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search3_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search4_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [in] */ BSTR Term4,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search5_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [in] */ BSTR Term4,
    /* [in] */ BSTR Term5,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Search_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Terms,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Search_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICategoryMapService_Show_Proxy( 
    ICategoryMapService __RPC_FAR * This,
    /* [in] */ long Id,
    /* [retval][out] */ ICategoryMapService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICategoryMapService_Show_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICategoryMapService_INTERFACE_DEFINED__ */


#ifndef __ICatalogService_INTERFACE_DEFINED__
#define __ICatalogService_INTERFACE_DEFINED__

/* interface ICatalogService */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICatalogService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32DBCC18-E5F2-47F2-9394-08164842CBF8")
    ICatalogService : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ ICatalog __RPC_FAR *__RPC_FAR *Catalog) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Offset( 
            /* [in] */ long Offset,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Size( 
            /* [in] */ long Size,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search1( 
            /* [in] */ BSTR Term1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search2( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search3( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search4( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search5( 
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [in] */ BSTR Term5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [in] */ SAFEARRAY __RPC_FAR * Terms,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter1( 
            /* [in] */ long Id1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter2( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter3( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter4( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter5( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter( 
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RatingFromFilter( 
            /* [in] */ long From,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RatingFromToFilter( 
            /* [in] */ long From,
            /* [in] */ long To,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PriceFromFilter( 
            /* [in] */ double From,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PriceFromToFilter( 
            /* [in] */ double From,
            /* [in] */ double To,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter1( 
            /* [in] */ long Id1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter2( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter3( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter4( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter5( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ProductFilter( 
            /* [in] */ SAFEARRAY __RPC_FAR * Products,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE State( 
            /* [in] */ BSTR State,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SortBy( 
            /* [in] */ enum SortOptions SortOption,
            /* [in] */ enum SortDirection SortDirection,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InStock( 
            /* [in] */ VARIANT_BOOL InStock,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICatalogServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICatalogService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICatalogService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICatalogService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            ICatalogService __RPC_FAR * This,
            /* [retval][out] */ ICatalog __RPC_FAR *__RPC_FAR *Catalog);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Offset )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Offset,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Size )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Size,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search1 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search2 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search3 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search4 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search5 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR Term1,
            /* [in] */ BSTR Term2,
            /* [in] */ BSTR Term3,
            /* [in] */ BSTR Term4,
            /* [in] */ BSTR Term5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Search )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Terms,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter1 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter2 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter3 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter4 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter5 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RatingFromFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long From,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RatingFromToFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long From,
            /* [in] */ long To,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PriceFromFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ double From,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PriceFromToFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ double From,
            /* [in] */ double To,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter1 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter2 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter3 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter4 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter5 )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ProductFilter )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Products,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *State )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ BSTR State,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SortBy )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ enum SortOptions SortOption,
            /* [in] */ enum SortDirection SortDirection,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InStock )( 
            ICatalogService __RPC_FAR * This,
            /* [in] */ VARIANT_BOOL InStock,
            /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);
        
        END_INTERFACE
    } ICatalogServiceVtbl;

    interface ICatalogService
    {
        CONST_VTBL struct ICatalogServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICatalogService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICatalogService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICatalogService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICatalogService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICatalogService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICatalogService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICatalogService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICatalogService_Execute(This,Catalog)	\
    (This)->lpVtbl -> Execute(This,Catalog)

#define ICatalogService_Offset(This,Offset,Self)	\
    (This)->lpVtbl -> Offset(This,Offset,Self)

#define ICatalogService_Size(This,Size,Self)	\
    (This)->lpVtbl -> Size(This,Size,Self)

#define ICatalogService_Search1(This,Term1,Self)	\
    (This)->lpVtbl -> Search1(This,Term1,Self)

#define ICatalogService_Search2(This,Term1,Term2,Self)	\
    (This)->lpVtbl -> Search2(This,Term1,Term2,Self)

#define ICatalogService_Search3(This,Term1,Term2,Term3,Self)	\
    (This)->lpVtbl -> Search3(This,Term1,Term2,Term3,Self)

#define ICatalogService_Search4(This,Term1,Term2,Term3,Term4,Self)	\
    (This)->lpVtbl -> Search4(This,Term1,Term2,Term3,Term4,Self)

#define ICatalogService_Search5(This,Term1,Term2,Term3,Term4,Term5,Self)	\
    (This)->lpVtbl -> Search5(This,Term1,Term2,Term3,Term4,Term5,Self)

#define ICatalogService_Search(This,Terms,Self)	\
    (This)->lpVtbl -> Search(This,Terms,Self)

#define ICatalogService_CategoryFilter1(This,Id1,Self)	\
    (This)->lpVtbl -> CategoryFilter1(This,Id1,Self)

#define ICatalogService_CategoryFilter2(This,Id1,Id2,Self)	\
    (This)->lpVtbl -> CategoryFilter2(This,Id1,Id2,Self)

#define ICatalogService_CategoryFilter3(This,Id1,Id2,Id3,Self)	\
    (This)->lpVtbl -> CategoryFilter3(This,Id1,Id2,Id3,Self)

#define ICatalogService_CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)	\
    (This)->lpVtbl -> CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)

#define ICatalogService_CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)	\
    (This)->lpVtbl -> CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)

#define ICatalogService_CategoryFilter(This,Categories,Self)	\
    (This)->lpVtbl -> CategoryFilter(This,Categories,Self)

#define ICatalogService_RatingFromFilter(This,From,Self)	\
    (This)->lpVtbl -> RatingFromFilter(This,From,Self)

#define ICatalogService_RatingFromToFilter(This,From,To,Self)	\
    (This)->lpVtbl -> RatingFromToFilter(This,From,To,Self)

#define ICatalogService_PriceFromFilter(This,From,Self)	\
    (This)->lpVtbl -> PriceFromFilter(This,From,Self)

#define ICatalogService_PriceFromToFilter(This,From,To,Self)	\
    (This)->lpVtbl -> PriceFromToFilter(This,From,To,Self)

#define ICatalogService_ProductFilter1(This,Id1,Self)	\
    (This)->lpVtbl -> ProductFilter1(This,Id1,Self)

#define ICatalogService_ProductFilter2(This,Id1,Id2,Self)	\
    (This)->lpVtbl -> ProductFilter2(This,Id1,Id2,Self)

#define ICatalogService_ProductFilter3(This,Id1,Id2,Id3,Self)	\
    (This)->lpVtbl -> ProductFilter3(This,Id1,Id2,Id3,Self)

#define ICatalogService_ProductFilter4(This,Id1,Id2,Id3,Id4,Self)	\
    (This)->lpVtbl -> ProductFilter4(This,Id1,Id2,Id3,Id4,Self)

#define ICatalogService_ProductFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)	\
    (This)->lpVtbl -> ProductFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)

#define ICatalogService_ProductFilter(This,Products,Self)	\
    (This)->lpVtbl -> ProductFilter(This,Products,Self)

#define ICatalogService_State(This,State,Self)	\
    (This)->lpVtbl -> State(This,State,Self)

#define ICatalogService_SortBy(This,SortOption,SortDirection,Self)	\
    (This)->lpVtbl -> SortBy(This,SortOption,SortDirection,Self)

#define ICatalogService_InStock(This,InStock,Self)	\
    (This)->lpVtbl -> InStock(This,InStock,Self)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Execute_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [retval][out] */ ICatalog __RPC_FAR *__RPC_FAR *Catalog);


void __RPC_STUB ICatalogService_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Offset_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Offset,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Offset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Size_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Size,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search1_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search2_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search3_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search4_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [in] */ BSTR Term4,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search5_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR Term1,
    /* [in] */ BSTR Term2,
    /* [in] */ BSTR Term3,
    /* [in] */ BSTR Term4,
    /* [in] */ BSTR Term5,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_Search_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Terms,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_Search_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter1_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter2_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter3_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter4_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter5_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [in] */ long Id5,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_CategoryFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Categories,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_CategoryFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_RatingFromFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long From,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_RatingFromFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_RatingFromToFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long From,
    /* [in] */ long To,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_RatingFromToFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_PriceFromFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ double From,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_PriceFromFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_PriceFromToFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ double From,
    /* [in] */ double To,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_PriceFromToFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter1_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter2_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter3_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter4_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter5_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [in] */ long Id5,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_ProductFilter_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Products,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_ProductFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_State_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ BSTR State,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_State_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_SortBy_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ enum SortOptions SortOption,
    /* [in] */ enum SortDirection SortDirection,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_SortBy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICatalogService_InStock_Proxy( 
    ICatalogService __RPC_FAR * This,
    /* [in] */ VARIANT_BOOL InStock,
    /* [retval][out] */ ICatalogService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB ICatalogService_InStock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICatalogService_INTERFACE_DEFINED__ */


#ifndef __IReferenceService_INTERFACE_DEFINED__
#define __IReferenceService_INTERFACE_DEFINED__

/* interface IReferenceService */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IReferenceService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49A4F778-ECC9-40D1-BFBA-A64763AF276B")
    IReferenceService : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ IReference __RPC_FAR *__RPC_FAR *Reference) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter1( 
            /* [in] */ long Id1,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter2( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter3( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter4( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter5( 
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
        virtual /* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE CategoryFilter( 
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReferenceServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IReferenceService __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IReferenceService __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IReferenceService __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Execute )( 
            IReferenceService __RPC_FAR * This,
            /* [retval][out] */ IReference __RPC_FAR *__RPC_FAR *Reference);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter1 )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter2 )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter3 )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter4 )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter5 )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [in] */ long Id5,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        /* [vararg][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CategoryFilter )( 
            IReferenceService __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * Categories,
            /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);
        
        END_INTERFACE
    } IReferenceServiceVtbl;

    interface IReferenceService
    {
        CONST_VTBL struct IReferenceServiceVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReferenceService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReferenceService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReferenceService_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IReferenceService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IReferenceService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IReferenceService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IReferenceService_Execute(This,Reference)	\
    (This)->lpVtbl -> Execute(This,Reference)

#define IReferenceService_CategoryFilter1(This,Id1,Self)	\
    (This)->lpVtbl -> CategoryFilter1(This,Id1,Self)

#define IReferenceService_CategoryFilter2(This,Id1,Id2,Self)	\
    (This)->lpVtbl -> CategoryFilter2(This,Id1,Id2,Self)

#define IReferenceService_CategoryFilter3(This,Id1,Id2,Id3,Self)	\
    (This)->lpVtbl -> CategoryFilter3(This,Id1,Id2,Id3,Self)

#define IReferenceService_CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)	\
    (This)->lpVtbl -> CategoryFilter4(This,Id1,Id2,Id3,Id4,Self)

#define IReferenceService_CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)	\
    (This)->lpVtbl -> CategoryFilter5(This,Id1,Id2,Id3,Id4,Id5,Self)

#define IReferenceService_CategoryFilter(This,Categories,Self)	\
    (This)->lpVtbl -> CategoryFilter(This,Categories,Self)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_Execute_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [retval][out] */ IReference __RPC_FAR *__RPC_FAR *Reference);


void __RPC_STUB IReferenceService_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter1_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter2_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter3_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter4_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter5_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ long Id1,
    /* [in] */ long Id2,
    /* [in] */ long Id3,
    /* [in] */ long Id4,
    /* [in] */ long Id5,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [vararg][helpstring][id] */ HRESULT STDMETHODCALLTYPE IReferenceService_CategoryFilter_Proxy( 
    IReferenceService __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * Categories,
    /* [retval][out] */ IReferenceService __RPC_FAR *__RPC_FAR *Self);


void __RPC_STUB IReferenceService_CategoryFilter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReferenceService_INTERFACE_DEFINED__ */



#ifndef __WineApi_LIBRARY_DEFINED__
#define __WineApi_LIBRARY_DEFINED__

/* library WineApi */
/* [helpstring][version][uuid] */ 
































EXTERN_C const IID LIBID_WineApi;

EXTERN_C const CLSID CLSID_Config;

#ifdef __cplusplus

class DECLSPEC_UUID("DE19ADA9-9E50-482C-B055-ECF7E51355C0")
Config;
#endif

EXTERN_C const CLSID CLSID_CategoryMapService;

#ifdef __cplusplus

class DECLSPEC_UUID("AF59A41C-084E-45B6-905E-29232E541B86")
CategoryMapService;
#endif

EXTERN_C const CLSID CLSID_CatalogService;

#ifdef __cplusplus

class DECLSPEC_UUID("C54236C1-15ED-4F59-86C5-5CBF1C1B096F")
CatalogService;
#endif

EXTERN_C const CLSID CLSID_ReferenceService;

#ifdef __cplusplus

class DECLSPEC_UUID("287E784F-BD1F-458E-8A3D-58907F71E5EB")
ReferenceService;
#endif
#endif /* __WineApi_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long __RPC_FAR *, unsigned long            , LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
