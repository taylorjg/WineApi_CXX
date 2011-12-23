#include "stdafx.h"
#include "PrintObjects.h"

//*****************************************************************************
//* Function Name: PrintStatus
//*   Description: 
//*****************************************************************************
void PrintStatus (const WineApi::IStatusPtr& p_spStatus)
{
	long l_lReturnCode = p_spStatus->ReturnCode;
	(void) _tprintf (_T("Return Code: %ld\n"), l_lReturnCode);

	long l_lMessageCount = p_spStatus->Messages->Count;
	(void) _tprintf (_T("Message Count: %ld\n"), l_lMessageCount);

	for (long l_lMessageIndex = 0; l_lMessageIndex < l_lMessageCount; l_lMessageIndex++) {
		_bstr_t l_sbstrMessage = p_spStatus->Messages->Item[l_lMessageIndex];
		(void) _tprintf (_T("Message: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrMessage));
	}
}


//*****************************************************************************
//* Function Name: PrintStatusEnum
//*   Description: 
//*****************************************************************************
void PrintStatusEnum (const WineApi::IStatusPtr& p_spStatus)
{
	long l_lReturnCode = p_spStatus->ReturnCode;
	(void) _tprintf (_T("Return Code: %ld\n"), l_lReturnCode);

	if (l_lReturnCode != WineApi::ReturnCodeSuccess) {

		WineApi::IWineApiStringCollectionPtr l_spWineApiStringCollection = p_spStatus->Messages;

		IUnknownPtr l_spUnknown = l_spWineApiStringCollection->_NewEnum;
		IEnumVARIANTPtr l_spEnumVARIANT (l_spUnknown);

		if (l_spEnumVARIANT) {
			for (;;) {
				_variant_t l_svarItem;
				ULONG l_pCountFetched = 0;
				if (l_spEnumVARIANT->Next (1, &l_svarItem, &l_pCountFetched) != S_OK) {
					break;
				}
				_bstr_t l_sbstrMessage (l_svarItem);
				(void) _tprintf (_T("Message: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrMessage));
			}
		}
	}
}


//*****************************************************************************
//* Function Name: PrintCategoryMap
//*   Description: 
//*****************************************************************************
void PrintCategoryMap (const WineApi::ICategoryMapPtr& p_spCategoryMap)
{
	WineApi::IStatusPtr l_spStatus = p_spCategoryMap->Status;
	PrintStatus (l_spStatus);

	long l_lCategoryCount = p_spCategoryMap->Categories->Count;
	(void) _tprintf (_T("Category Count: %ld\n"), l_lCategoryCount);

	for (long l_lCategoryIndex = 0; l_lCategoryIndex < l_lCategoryCount; l_lCategoryIndex++) {
		WineApi::ICategoryPtr l_spCategory = p_spCategoryMap->Categories->Item[l_lCategoryIndex];
		PrintCategory (l_spCategory);
	}
}


//*****************************************************************************
//* Function Name: PrintCategoryMapEnum
//*   Description: 
//*****************************************************************************
void PrintCategoryMapEnum (const WineApi::ICategoryMapPtr& p_spCategoryMap)
{
	WineApi::IStatusPtr l_spStatus = p_spCategoryMap->Status;
	PrintStatus (l_spStatus);

	WineApi::IWineApiObjectCollectionPtr l_spWineApiObjectCollection = p_spCategoryMap->Categories;

	IUnknownPtr l_spUnknown = l_spWineApiObjectCollection->_NewEnum;
	IEnumVARIANTPtr l_spEnumVARIANT (l_spUnknown);

	if (l_spEnumVARIANT) {
		for (;;) {
			_variant_t l_svarItem;
			ULONG l_pCountFetched = 0;
			if (l_spEnumVARIANT->Next (1, &l_svarItem, &l_pCountFetched) != S_OK) {
				break;
			}
			WineApi::ICategoryPtr l_spCategory (l_svarItem);
			PrintCategoryEnum (l_spCategory);
		}
	}
}


//*****************************************************************************
//* Function Name: PrintCategory
//*   Description: 
//*****************************************************************************
void PrintCategory (const WineApi::ICategoryPtr& p_spCategory)
{
	long l_lId = p_spCategory->Id;
	(void) _tprintf (_T("Category Id: %ld\n"), l_lId);

	_bstr_t l_sbstrName = p_spCategory->Name;
	(void) _tprintf (_T("Category Name: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrName));

	long l_lRefinementCount = p_spCategory->Refinements->Count;
	(void) _tprintf (_T("Refinement Count: %ld\n"), l_lRefinementCount);

	for (long l_lRefinementIndex = 0; l_lRefinementIndex < l_lRefinementCount; l_lRefinementIndex++) {
		WineApi::IRefinementPtr l_spRefinement = p_spCategory->Refinements->Item[l_lRefinementIndex];
		PrintRefinement (l_spRefinement);
	}
}


//*****************************************************************************
//* Function Name: PrintCategoryEnum
//*   Description: 
//*****************************************************************************
void PrintCategoryEnum (const WineApi::ICategoryPtr& p_spCategory)
{
	long l_lId = p_spCategory->Id;
	(void) _tprintf (_T("Category Id: %ld\n"), l_lId);

	_bstr_t l_sbstrName = p_spCategory->Name;
	(void) _tprintf (_T("Category Name: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrName));

	WineApi::IWineApiObjectCollectionPtr l_spWineApiObjectCollection = p_spCategory->Refinements;

	IUnknownPtr l_spUnknown = l_spWineApiObjectCollection->_NewEnum;
	IEnumVARIANTPtr l_spEnumVARIANT (l_spUnknown);

	if (l_spEnumVARIANT) {
		for (;;) {
			_variant_t l_svarItem;
			ULONG l_pCountFetched = 0;
			if (l_spEnumVARIANT->Next (1, &l_svarItem, &l_pCountFetched) != S_OK) {
				break;
			}
			WineApi::IRefinementPtr l_spRefinement (l_svarItem);
			PrintRefinement (l_spRefinement);
		}
	}
}


//*****************************************************************************
//* Function Name: PrintRefinement
//*   Description: 
//*****************************************************************************
void PrintRefinement (const WineApi::IRefinementPtr& p_spRefinement)
{
	long l_lId = p_spRefinement->Id;
	(void) _tprintf (_T("Refinement Id: %ld\n"), l_lId);

	_bstr_t l_sbstrName = p_spRefinement->Name;
	(void) _tprintf (_T("Refinement Name: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrName));

	_bstr_t l_sbstrUrl = p_spRefinement->Url;
	(void) _tprintf (_T("Refinement Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));
}


//*****************************************************************************
//* Function Name: PrintCatalog
//*   Description: 
//*****************************************************************************
void PrintCatalog (const WineApi::ICatalogPtr& p_spCatalog)
{
	WineApi::IStatusPtr l_spStatus = p_spCatalog->Status;
	PrintStatus (l_spStatus);

	WineApi::IProductsPtr l_spProducts = p_spCatalog->Products;
	PrintProducts (l_spProducts);
}


//*****************************************************************************
//* Function Name: PrintProducts
//*   Description: 
//*****************************************************************************
void PrintProducts (const WineApi::IProductsPtr& p_spProducts)
{
	long l_lTotal = p_spProducts->Total;
	(void) _tprintf (_T("Products Total: %ld\n"), l_lTotal);

	long l_lOffset = p_spProducts->Offset;
	(void) _tprintf (_T("Products Offset: %ld\n"), l_lOffset);

	_bstr_t l_sbstrUrl = p_spProducts->Url;
	(void) _tprintf (_T("Product Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));

	long l_lProductCount = p_spProducts->List->Count;
	(void) _tprintf (_T("Product Count: %ld\n"), l_lProductCount);

	for (long l_lProductIndex = 0; l_lProductIndex < l_lProductCount; l_lProductIndex++) {
		WineApi::IProductPtr l_spProduct = p_spProducts->List->Item[l_lProductIndex];
		PrintProduct (l_spProduct);
	}
}


//*****************************************************************************
//* Function Name: PrintProduct
//*   Description: 
//*****************************************************************************
void PrintProduct (const WineApi::IProductPtr& p_spProduct)
{
	long l_lId = p_spProduct->Id;
	(void) _tprintf (_T("Product Id: %ld\n"), l_lId);

	_bstr_t l_sbstrName = p_spProduct->Name;
	(void) _tprintf (_T("Product Name: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrName));

	_bstr_t l_sbstrDescription = p_spProduct->Description;
	(void) _tprintf (_T("Product Description: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrDescription));

	_bstr_t l_sbstrUrl = p_spProduct->Url;
	(void) _tprintf (_T("Product Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));

	double l_dblPriceMin = p_spProduct->PriceMin;
	(void) _tprintf (_T("Product PriceMin: %f\n"), l_dblPriceMin);

	double l_dblPriceMax = p_spProduct->PriceMax;
	(void) _tprintf (_T("Product PriceMax: %f\n"), l_dblPriceMax);

	double l_dblPriceRetail = p_spProduct->PriceRetail;
	(void) _tprintf (_T("Product PriceRetail: %f\n"), l_dblPriceRetail);

	_bstr_t l_sbstrType = p_spProduct->Type;
	(void) _tprintf (_T("Product Type: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrType));

	_bstr_t l_sbstrYear = p_spProduct->Year;
	(void) _tprintf (_T("Product Year: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrYear));

	WineApi::IRatingsPtr l_spRatings = p_spProduct->Ratings;
	if (l_spRatings) {
		PrintRatings (l_spRatings);
	}

	WineApi::IRetailPtr l_spRetail = p_spProduct->Retail;
	if (l_spRetail) {
		PrintRetail (l_spRetail);
	}
}


//*****************************************************************************
//* Function Name: PrintRetail
//*   Description: 
//*****************************************************************************
void PrintRetail (const WineApi::IRetailPtr& p_spRetail)
{
	_bstr_t l_sbstrSku = p_spRetail->Sku;
	(void) _tprintf (_T("Retail Sku: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrSku));

	VARIANT_BOOL l_vbInStock = p_spRetail->InStock;
	(void) _tprintf (_T("Retail InStock: \"%s\"\n"), (l_vbInStock == VARIANT_TRUE) ? _T("Yes") : _T("No"));

	double l_dblPrice = p_spRetail->Price;
	(void) _tprintf (_T("Retail Price: %f\n"), l_dblPrice);

	_bstr_t l_sbstrUrl = p_spRetail->Url;
	(void) _tprintf (_T("Retail Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));
}


//*****************************************************************************
//* Function Name: PrintRatings
//*   Description: 
//*****************************************************************************
void PrintRatings (const WineApi::IRatingsPtr& p_spRatings)
{
	long l_lHighestScore = p_spRatings->HighestScore;
	(void) _tprintf (_T("Ratings HighestScore: %ld\n"), l_lHighestScore);

	long l_lRatingCount = p_spRatings->List->Count;
	(void) _tprintf (_T("Rating Count: %ld\n"), l_lRatingCount);

	for (long l_lRatingIndex = 0; l_lRatingIndex < l_lRatingCount; l_lRatingIndex++) {
		WineApi::IRatingPtr l_spRating = p_spRatings->List->Item[l_lRatingIndex];
		PrintRating (l_spRating);
	}
}


//*****************************************************************************
//* Function Name: PrintRating
//*   Description: 
//*****************************************************************************
void PrintRating (const WineApi::IRatingPtr& p_spRating)
{
	long l_lId = p_spRating->Id;
	(void) _tprintf (_T("Rating Id: %ld\n"), l_lId);

	_bstr_t l_sbstrName = p_spRating->Name;
	(void) _tprintf (_T("Rating Name: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrName));

	long l_lScore = p_spRating->Score;
	(void) _tprintf (_T("Rating Score: %ld\n"), l_lScore);

	_bstr_t l_sbstrUrl = p_spRating->Url;
	(void) _tprintf (_T("Rating Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));
}


//*****************************************************************************
//* Function Name: PrintReference
//*   Description: 
//*****************************************************************************
void PrintReference (const WineApi::IReferencePtr& p_spReference)
{
	WineApi::IStatusPtr l_spStatus = p_spReference->Status;
	PrintStatus (l_spStatus);

	long l_lBookCount = p_spReference->Books->Count;
	(void) _tprintf (_T("Book Count: %ld\n"), l_lBookCount);

	for (long l_lBookIndex = 0; l_lBookIndex < l_lBookCount; l_lBookIndex++) {
		WineApi::IBookPtr l_spBook = p_spReference->Books->Item[l_lBookIndex];
		PrintBook (l_spBook);
	}
}


//*****************************************************************************
//* Function Name: PrintBook
//*   Description: 
//*****************************************************************************
void PrintBook (const WineApi::IBookPtr& p_spBook)
{
	_bstr_t l_sbstrId = p_spBook->Id;
	(void) _tprintf (_T("Book Id: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrId));

	_bstr_t l_sbstrTitle = p_spBook->Title;
	(void) _tprintf (_T("Book Title: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrTitle));

	long l_lArticleCount = p_spBook->Articles->Count;
	(void) _tprintf (_T("Article Count: %ld\n"), l_lArticleCount);

	for (long l_lArticleIndex = 0; l_lArticleIndex < l_lArticleCount; l_lArticleIndex++) {
		WineApi::IArticlePtr l_spArticle = p_spBook->Articles->Item[l_lArticleIndex];
		PrintArticle (l_spArticle);
	}
}


//*****************************************************************************
//* Function Name: PrintArticle
//*   Description: 
//*****************************************************************************
void PrintArticle (const WineApi::IArticlePtr& p_spArticle)
{
	_bstr_t l_sbstrId = p_spArticle->Id;
	(void) _tprintf (_T("Article Id: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrId));

	_bstr_t l_sbstrTitle = p_spArticle->Title;
	(void) _tprintf (_T("Article Title: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrTitle));

	_bstr_t l_sbstrAbstract = p_spArticle->Abstract;
	(void) _tprintf (_T("Article Abstract: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrAbstract));

	_bstr_t l_sbstrContent = p_spArticle->Content;
	(void) _tprintf (_T("Article Content: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrContent));

	_bstr_t l_sbstrUrl = p_spArticle->Url;
	(void) _tprintf (_T("Article Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));

	long l_lFootnoteCount = p_spArticle->Footnotes->Count;
	(void) _tprintf (_T("Footnote Count: %ld\n"), l_lFootnoteCount);

	for (long l_lFootnoteIndex = 0; l_lFootnoteIndex < l_lFootnoteCount; l_lFootnoteIndex++) {
		WineApi::IFootnotePtr l_spFootnote = p_spArticle->Footnotes->Item[l_lFootnoteIndex];
		PrintFootnote (l_spFootnote);
	}
}


//*****************************************************************************
//* Function Name: PrintFootnote
//*   Description: 
//*****************************************************************************
void PrintFootnote (const WineApi::IFootnotePtr& p_spFootnote)
{
	_bstr_t l_sbstrId = p_spFootnote->Id;
	(void) _tprintf (_T("Footnote Id: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrId));

	_bstr_t l_sbstrTitle = p_spFootnote->Title;
	(void) _tprintf (_T("Footnote Title: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrTitle));

	_bstr_t l_sbstrUrl = p_spFootnote->Url;
	(void) _tprintf (_T("Footnote Url: \"%s\"\n"), static_cast<LPCTSTR>(l_sbstrUrl));
}
