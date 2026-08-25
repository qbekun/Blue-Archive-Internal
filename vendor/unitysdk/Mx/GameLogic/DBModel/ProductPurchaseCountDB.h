#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PurchaseCountResetType; }

#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x10065A0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x10065B0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0x10065C0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_LASTPURCHASEDATE_OFFSET UNITYSDK_OFFSET(0x10065D0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x10065E0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_LASTPURCHASEDATE_OFFSET UNITYSDK_OFFSET(0x10065F0)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_RESETDATE_OFFSET UNITYSDK_OFFSET(0x1006600)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1006610)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_RESETDATE_OFFSET UNITYSDK_OFFSET(0x1006620)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006630)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1006640)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1006650)
#define MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0x1006660)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ProductPurchaseCountDB_TypeDefinitionIndex = 12680;

	class ProductPurchaseCountDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _ShopExcelId_k__BackingField; // 0x18
		::System::Int32 _PurchaseCount_k__BackingField; // 0x20
		::System::DateTime* _LastPurchaseDate_k__BackingField; // 0x28
		::FlatData::PurchaseCountResetType* _PurchaseCountResetType_k__BackingField; // 0x30
		::System::DateTime* _ResetDate_k__BackingField; // 0x38

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::PurchaseCountResetType* get_PurchaseCountResetType()
		{
			return ((::FlatData::PurchaseCountResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_PURCHASECOUNTRESETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopExcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_SHOPEXCELID_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastPurchaseDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_LASTPURCHASEDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastPurchaseDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_LASTPURCHASEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ResetDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_RESETDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_PurchaseCountResetType(::FlatData::PurchaseCountResetType* arg)
		{
			((::System::Void(*)(::FlatData::PurchaseCountResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_PURCHASECOUNTRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ResetDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_RESETDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_PurchaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopExcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PRODUCTPURCHASECOUNTDB_SET_SHOPEXCELID_OFFSET))(arg, nullptr);
		}

	};
}

