#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_PURCHASEDATE_OFFSET UNITYSDK_OFFSET(0x1006700)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_MANUALRESETDATE_OFFSET UNITYSDK_OFFSET(0x1006710)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1006720)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_MANUALRESETDATE_OFFSET UNITYSDK_OFFSET(0x1006730)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1006740)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1006750)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006760)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_RESETDATE_OFFSET UNITYSDK_OFFSET(0x1006770)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_PURCHASEDATE_OFFSET UNITYSDK_OFFSET(0x1006780)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_RESETDATE_OFFSET UNITYSDK_OFFSET(0x1006790)
#define MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x10067A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PurchaseCountDB_TypeDefinitionIndex = 12682;

	class PurchaseCountDB : public Il2CppObject
	{
	public:
		::System::Int64 _ShopCashId_k__BackingField; // 0x10
		::System::Int32 _PurchaseCount_k__BackingField; // 0x18
		::System::DateTime* _ResetDate_k__BackingField; // 0x20
		Il2CppObject* _PurchaseDate_k__BackingField; // 0x28
		Il2CppObject* _ManualResetDate_k__BackingField; // 0x38

		::System::Void set_PurchaseDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_PURCHASEDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ManualResetDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_MANUALRESETDATE_OFFSET))(nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ManualResetDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_MANUALRESETDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PurchaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_ResetDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_RESETDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_PurchaseDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_PURCHASEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ResetDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_SET_RESETDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASECOUNTDB_GET_SHOPCASHID_OFFSET))(nullptr);
		}

	};
}

