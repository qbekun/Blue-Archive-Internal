#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopCashBlockType; }

#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0xFE4A00)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE4A10)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE4A20)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_CASHPRODUCTID_OFFSET UNITYSDK_OFFSET(0xFE4A30)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_MARKETBLOCKTYPE_OFFSET UNITYSDK_OFFSET(0xFE4A40)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_BEGINDATE_OFFSET UNITYSDK_OFFSET(0xFE4A60)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_CASHPRODUCTID_OFFSET UNITYSDK_OFFSET(0xFE4A70)
#define MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE4A80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int BlockedProductDB_TypeDefinitionIndex = 12495;

	class BlockedProductDB : public Il2CppObject
	{
	public:
		::System::Int64 _CashProductId_k__BackingField; // 0x10
		::System::DateTime* _BeginDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20

		::System::Void set_BeginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_BEGINDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CashProductId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_CASHPRODUCTID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopCashBlockType* get_MarketBlockType()
		{
			return ((::MX::GameLogic::DBModel::ShopCashBlockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_MARKETBLOCKTYPE_OFFSET))(nullptr);
		}

		::System::DateTime* get_BeginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_GET_BEGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_CashProductId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_CASHPRODUCTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BLOCKEDPRODUCTDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

	};
}

