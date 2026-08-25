#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::GameLogic::DBModel { class ShopProductType; }
namespace MX::Data { class ShopExcelData; }
namespace MX::Data { class ShopRefreshExcelData; }
namespace MX::GameLogic::DBModel { class ShopProductDB; }

#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100B760)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100B770)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0x100B780)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0x100B790)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x100B7A0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x100B7B0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x100B7C0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x100B7D0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x100B7E0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x100B7F0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_SOLDOUT_OFFSET UNITYSDK_OFFSET(0x100B800)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x100B820)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x100B830)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x100B840)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x100B850)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PRODUCTTYPE_OFFSET UNITYSDK_OFFSET(0x100B860)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PRODUCTTYPE_OFFSET UNITYSDK_OFFSET(0x100B870)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B880)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B890)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B8F0)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_O7F9ADE151038791C2CCCAA800291F6D41939839B78E2E453D7063794361AAB76_OFFSET UNITYSDK_OFFSET(0x100B950)
#define MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_CLONE_OFFSET UNITYSDK_OFFSET(0x100B640)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopProductDB_TypeDefinitionIndex = 12727;

	class ShopProductDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _ShopExcelId_k__BackingField; // 0x18
		::FlatData::ShopCategoryType* _Category_k__BackingField; // 0x20
		::System::Int64 _DisplayOrder_k__BackingField; // 0x28
		::System::Int64 _PurchaseCount_k__BackingField; // 0x30
		::System::Int64 _PurchaseCountLimit_k__BackingField; // 0x38
		::System::Int64 _Price_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ShopProductType* _ProductType_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopExcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_SHOPEXCELID_OFFSET))(nullptr);
		}

		::System::Void set_ShopExcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_SHOPEXCELID_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_Category()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_Category(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_SOLDOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCountLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PURCHASECOUNTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Price()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PRICE_OFFSET))(nullptr);
		}

		::System::Void set_Price(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PRICE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ShopProductType* get_ProductType()
		{
			return ((::MX::GameLogic::DBModel::ShopProductType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_GET_PRODUCTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ProductType(::MX::GameLogic::DBModel::ShopProductType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_SET_PRODUCTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::ShopExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ShopExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::ShopRefreshExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ShopRefreshExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 O7f9ade151038791c2cccaa800291f6d41939839b78e2e453d7063794361aab76(::System::Boolean arg)
		{
			return ((::System::Int64(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_O7F9ADE151038791C2CCCAA800291F6D41939839B78E2E453D7063794361AAB76_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ShopProductDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ShopProductDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPPRODUCTDB_CLONE_OFFSET))(nullptr);
		}

	};
}

