#pragma once
#include "unitysdk.h"

class ItemFilterInventory;
class ItemFilterShopResource;
class ItemFilterShopCategory;
class ItemFilterNormalCraft;
class ItemFilterShiftingCraft;
class ItemFilterShiftingCraftMaterial;
class ItemFilterShiftingCraftFavorite;
namespace MX::SaveData { class ShiftingCraftRecipeFavorites; }
class ItemFilterTrophyCollectionBossCategory;
class ItemFilterTrophyCollectionOwned;
class AssetObjectBase;
namespace MX::Data::Excel { class ShopFilterClassifiedExcel; }
class ItemObject;
class ItemFilters;
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define ITEMFILTERS_SAVEINVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCAC60)
#define ITEMFILTERS_RESTORESHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCADC0)
#define ITEMFILTERS_SAVETROPHYCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FCAE10)
#define ITEMFILTERS_ISINNORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB000)
#define ITEMFILTERS_GET_SHOPCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB030)
#define ITEMFILTERS_GET_TROPHYCOLLECTIONBOSSCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB040)
#define ITEMFILTERS_RESETINVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB050)
#define ITEMFILTERS_SET_TROPHYCOLLECTIONOWNEDFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB0A0)
#define ITEMFILTERS_GET_INVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB0B0)
#define ITEMFILTERS_ISINSHOPFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB0C0)
#define ITEMFILTERS_RESTOREITEMSHOPFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB3C0)
#define ITEMFILTERS_GET_NORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB430)
#define ITEMFILTERS_RESETSHOPFILTERLOCALLY_OFFSET UNITYSDK_OFFSET(0x1FCB440)
#define ITEMFILTERS_ISININVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB5D0)
#define ITEMFILTERS_LOADINVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB600)
#define ITEMFILTERS_ITEMINVENTORYFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCB700)
#define ITEMFILTERS_ITEMTROPHYCOLLECTIONFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCB750)
#define ITEMFILTERS_SET_NORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB7D0)
#define ITEMFILTERS_RESTORENORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCB7E0)
#define ITEMFILTERS_ITEMSHOPFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCB830)
#define ITEMFILTERS_SET_INVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBA30)
#define ITEMFILTERS_LOADSHOPFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBA40)
#define ITEMFILTERS_RESTORESHIFTINGCRAFTFLITER_OFFSET UNITYSDK_OFFSET(0x1FCBB90)
#define ITEMFILTERS_RESETTROPHYCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBC00)
#define ITEMFILTERS_RESTORETROPHYCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBC70)
#define ITEMFILTERS_GET_SHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBCE0)
#define ITEMFILTERS_GET_TROPHYCOLLECTIONOWNEDFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBCF0)
#define ITEMFILTERS_SAVEITEMSHOPFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBD00)
#define ITEMFILTERS_SET_SHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBE50)
#define ITEMFILTERS_SAVESHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCBE60)
#define ITEMFILTERS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FCBFC0)
#define ITEMFILTERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FCC010)
#define ITEMFILTERS_RESTOREINVENTORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC680)
#define ITEMFILTERS_LOADTROPHYCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC6D0)
#define ITEMFILTERS_RESETNORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC7F0)
#define ITEMFILTERS_ITEMSHIFTINGCRAFTFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCC840)
#define ITEMFILTERS_ISINSHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC8C0)
#define ITEMFILTERS_SET_SHIFTINGCRAFTFAVORITEFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC920)
#define ITEMFILTERS_GET_SHOPRESOURCEFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC930)
#define ITEMFILTERS_LOADSHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCC940)
#define ITEMFILTERS_RESETSHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCB00)
#define ITEMFILTERS_ISINSHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCB70)
#define ITEMFILTERS_GET_RECIPEFAVORITESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1FCCBA0)
#define ITEMFILTERS_SET_TROPHYCOLLECTIONBOSSCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCC60)
#define ITEMFILTERS_ITEMNORMALCRAFTFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCCC70)
#define ITEMFILTERS_RESETSHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCCC0)
#define ITEMFILTERS_LOADNORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCD10)
#define ITEMFILTERS_SET_SHOPRESOURCEFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCE10)
#define ITEMFILTERS_CLEARSHOPFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCE20)
#define ITEMFILTERS_SET_SHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCE90)
#define ITEMFILTERS_ISINTROPHYCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCEA0)
#define ITEMFILTERS_SET_SHOPCATEGORYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCF00)
#define ITEMFILTERS_ITEMSHIFTINGCRAFTMATERIALFILTERON_OFFSET UNITYSDK_OFFSET(0x1FCCF10)
#define ITEMFILTERS_SAVENORMALCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCCF60)
#define ITEMFILTERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0C0)
#define ITEMFILTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD230)
#define ITEMFILTERS_SAVESHIFTINGCRAFTFILTER_OFFSET UNITYSDK_OFFSET(0x1FCD240)
#define ITEMFILTERS_GET_SHIFTINGCRAFTFAVORITEFILTER_OFFSET UNITYSDK_OFFSET(0x1FCD430)
#define ITEMFILTERS_GET_SHIFTINGCRAFTMATERIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FCD440)

	inline static constexpr unsigned int ItemFilters_TypeDefinitionIndex = 2990;

	class ItemFilters : public Il2CppObject
	{
	public:
		ItemFilterInventory* _InventoryFilter_k__BackingField; // 0x10
		ItemFilterShopResource* _ShopResourceFilter_k__BackingField; // 0x18
		ItemFilterShopCategory* _ShopCategoryFilter_k__BackingField; // 0x20
		ItemFilterNormalCraft* _NormalCraftFilter_k__BackingField; // 0x28
		ItemFilterShiftingCraft* _ShiftingCraftFilter_k__BackingField; // 0x30
		ItemFilterShiftingCraftMaterial* _ShiftingCraftMaterialFilter_k__BackingField; // 0x38
		ItemFilterShiftingCraftFavorite* _ShiftingCraftFavoriteFilter_k__BackingField; // 0x40
		::MX::SaveData::ShiftingCraftRecipeFavorites* recipeFavoriteSaveData; // 0x48
		ItemFilterTrophyCollectionBossCategory* _TrophyCollectionBossCategoryFilter_k__BackingField; // 0x50
		ItemFilterTrophyCollectionOwned* _TrophyCollectionOwnedFilter_k__BackingField; // 0x58
		Il2CppObject* TagToLocalization; // 0x0

		::System::Void SaveInventoryFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVEINVENTORYFILTER_OFFSET))(nullptr);
		}

		::System::Void RestoreShiftingCraftMaterialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTORESHIFTINGCRAFTMATERIALFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveTrophyCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVETROPHYCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Boolean IsInNormalCraftFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISINNORMALCRAFTFILTER_OFFSET))(arg, nullptr);
		}

		ItemFilterShopCategory* get_ShopCategoryFilter()
		{
			return ((ItemFilterShopCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_SHOPCATEGORYFILTER_OFFSET))(nullptr);
		}

		ItemFilterTrophyCollectionBossCategory* get_TrophyCollectionBossCategoryFilter()
		{
			return ((ItemFilterTrophyCollectionBossCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_TROPHYCOLLECTIONBOSSCATEGORYFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetInventoryFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETINVENTORYFILTER_OFFSET))(nullptr);
		}

		::System::Void set_TrophyCollectionOwnedFilter(ItemFilterTrophyCollectionOwned* arg)
		{
			((::System::Void(*)(ItemFilterTrophyCollectionOwned*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_TROPHYCOLLECTIONOWNEDFILTER_OFFSET))(arg, nullptr);
		}

		ItemFilterInventory* get_InventoryFilter()
		{
			return ((ItemFilterInventory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_INVENTORYFILTER_OFFSET))(nullptr);
		}

		::System::Boolean IsInShopFilter(::MX::Data::Excel::ShopFilterClassifiedExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopFilterClassifiedExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISINSHOPFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreItemShopFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTOREITEMSHOPFILTER_OFFSET))(nullptr);
		}

		ItemFilterNormalCraft* get_NormalCraftFilter()
		{
			return ((ItemFilterNormalCraft*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_NORMALCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetShopFilterLocally()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETSHOPFILTERLOCALLY_OFFSET))(nullptr);
		}

		::System::Boolean IsInInventoryFilter(ItemObject* arg)
		{
			return ((::System::Boolean(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISININVENTORYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void LoadInventoryFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_LOADINVENTORYFILTER_OFFSET))(nullptr);
		}

		::System::Boolean ItemInventoryFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMINVENTORYFILTERON_OFFSET))(nullptr);
		}

		::System::Boolean ItemTrophyCollectionFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMTROPHYCOLLECTIONFILTERON_OFFSET))(nullptr);
		}

		::System::Void set_NormalCraftFilter(ItemFilterNormalCraft* arg)
		{
			((::System::Void(*)(ItemFilterNormalCraft*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_NORMALCRAFTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void RestoreNormalCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTORENORMALCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Boolean ItemShopFilterOn(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMSHOPFILTERON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_InventoryFilter(ItemFilterInventory* arg)
		{
			((::System::Void(*)(ItemFilterInventory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_INVENTORYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void LoadShopFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_LOADSHOPFILTER_OFFSET))(nullptr);
		}

		::System::Void RestoreShiftingCraftFliter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTORESHIFTINGCRAFTFLITER_OFFSET))(nullptr);
		}

		::System::Void ResetTrophyCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETTROPHYCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Void RestoreTrophyCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTORETROPHYCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		ItemFilterShiftingCraft* get_ShiftingCraftFilter()
		{
			return ((ItemFilterShiftingCraft*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_SHIFTINGCRAFTFILTER_OFFSET))(nullptr);
		}

		ItemFilterTrophyCollectionOwned* get_TrophyCollectionOwnedFilter()
		{
			return ((ItemFilterTrophyCollectionOwned*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_TROPHYCOLLECTIONOWNEDFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveItemShopFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVEITEMSHOPFILTER_OFFSET))(nullptr);
		}

		::System::Void set_ShiftingCraftFilter(ItemFilterShiftingCraft* arg)
		{
			((::System::Void(*)(ItemFilterShiftingCraft*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_SHIFTINGCRAFTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void SaveShiftingCraftMaterialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVESHIFTINGCRAFTMATERIALFILTER_OFFSET))(nullptr);
		}

		ItemFilters* get_Instance()
		{
			return ((ItemFilters*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RestoreInventoryFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESTOREINVENTORYFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadTrophyCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_LOADTROPHYCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetNormalCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETNORMALCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Boolean ItemShiftingCraftFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMSHIFTINGCRAFTFILTERON_OFFSET))(nullptr);
		}

		::System::Boolean IsInShiftingCraftFilter(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISINSHIFTINGCRAFTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShiftingCraftFavoriteFilter(ItemFilterShiftingCraftFavorite* arg)
		{
			((::System::Void(*)(ItemFilterShiftingCraftFavorite*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_SHIFTINGCRAFTFAVORITEFILTER_OFFSET))(arg, nullptr);
		}

		ItemFilterShopResource* get_ShopResourceFilter()
		{
			return ((ItemFilterShopResource*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_SHOPRESOURCEFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadShiftingCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_LOADSHIFTINGCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetShiftingCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETSHIFTINGCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Boolean IsInShiftingCraftMaterialFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISINSHIFTINGCRAFTMATERIALFILTER_OFFSET))(arg, nullptr);
		}

		::MX::SaveData::ShiftingCraftRecipeFavorites* get_RecipeFavoriteSaveData()
		{
			return ((::MX::SaveData::ShiftingCraftRecipeFavorites*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_RECIPEFAVORITESAVEDATA_OFFSET))(nullptr);
		}

		::System::Void set_TrophyCollectionBossCategoryFilter(ItemFilterTrophyCollectionBossCategory* arg)
		{
			((::System::Void(*)(ItemFilterTrophyCollectionBossCategory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_TROPHYCOLLECTIONBOSSCATEGORYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ItemNormalCraftFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMNORMALCRAFTFILTERON_OFFSET))(nullptr);
		}

		::System::Void ResetShiftingCraftMaterialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_RESETSHIFTINGCRAFTMATERIALFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadNormalCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_LOADNORMALCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Void set_ShopResourceFilter(ItemFilterShopResource* arg)
		{
			((::System::Void(*)(ItemFilterShopResource*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_SHOPRESOURCEFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ClearShopFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_CLEARSHOPFILTER_OFFSET))(nullptr);
		}

		::System::Void set_ShiftingCraftMaterialFilter(ItemFilterShiftingCraftMaterial* arg)
		{
			((::System::Void(*)(ItemFilterShiftingCraftMaterial*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_SHIFTINGCRAFTMATERIALFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInTrophyCollectionFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ISINTROPHYCOLLECTIONFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopCategoryFilter(ItemFilterShopCategory* arg)
		{
			((::System::Void(*)(ItemFilterShopCategory*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SET_SHOPCATEGORYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ItemShiftingCraftMaterialFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_ITEMSHIFTINGCRAFTMATERIALFILTERON_OFFSET))(nullptr);
		}

		::System::Void SaveNormalCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVENORMALCRAFTFILTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveShiftingCraftFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_SAVESHIFTINGCRAFTFILTER_OFFSET))(nullptr);
		}

		ItemFilterShiftingCraftFavorite* get_ShiftingCraftFavoriteFilter()
		{
			return ((ItemFilterShiftingCraftFavorite*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_SHIFTINGCRAFTFAVORITEFILTER_OFFSET))(nullptr);
		}

		ItemFilterShiftingCraftMaterial* get_ShiftingCraftMaterialFilter()
		{
			return ((ItemFilterShiftingCraftMaterial*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERS_GET_SHIFTINGCRAFTMATERIALFILTER_OFFSET))(nullptr);
		}

	};

