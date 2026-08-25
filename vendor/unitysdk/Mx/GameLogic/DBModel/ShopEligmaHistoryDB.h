#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x100B150)
#define MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100B160)
#define MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100B170)
#define MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100B180)
#define MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x100B190)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopEligmaHistoryDB_TypeDefinitionIndex = 12723;

	class ShopEligmaHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x10
		::System::Int64 _PurchaseCount_k__BackingField; // 0x18

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPELIGMAHISTORYDB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

	};
}

