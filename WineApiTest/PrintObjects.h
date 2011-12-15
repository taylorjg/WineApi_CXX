#ifndef _PrintObjects_h_
#define _PrintObjects_h_

extern void PrintStatus (const WineApi::IStatusPtr& p_spStatus);
extern void PrintStatusEnum (const WineApi::IStatusPtr& p_spStatus);

extern void PrintCategoryMap (const WineApi::ICategoryMapPtr& p_spCategoryMap);
extern void PrintCategoryMapEnum (const WineApi::ICategoryMapPtr& p_spCategoryMap);

extern void PrintCategory (const WineApi::ICategoryPtr& p_spCategory);
extern void PrintCategoryEnum (const WineApi::ICategoryPtr& p_spCategory);

extern void PrintRefinement (const WineApi::IRefinementPtr& p_spRefinement);

extern void PrintCatalog (const WineApi::ICatalogPtr& p_spCatalog);
extern void PrintProducts (const WineApi::IProductsPtr& p_spProducts);
extern void PrintProduct (const WineApi::IProductPtr& p_spProduct);
extern void PrintGeoLocation (const WineApi::IGeoLocationPtr& p_spGeoLocation);
extern void PrintAppellation (const WineApi::IAppellationPtr& p_spAppellation);
extern void PrintRetail (const WineApi::IRetailPtr& p_spRetail);
extern void PrintRatings (const WineApi::IRatingsPtr& p_spRatings);
extern void PrintRating (const WineApi::IRatingPtr& p_spRating);

extern void PrintReference (const WineApi::IReferencePtr& p_spReference);
extern void PrintBook (const WineApi::IBookPtr& p_spBook);
extern void PrintArticle (const WineApi::IArticlePtr& p_spArticle);
extern void PrintFootnote (const WineApi::IFootnotePtr& p_spFootnote);

#endif
