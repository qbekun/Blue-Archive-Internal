#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class Rarity; }

#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEA700)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEA710)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEA720)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xFEA730)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xFEA740)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xFEA750)
#define MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xFEA760)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CardShopPurchaseHistoryDB_TypeDefinitionIndex = 12516;

	class CardShopPurchaseHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x18
		::System::Int64 _PurchaseCount_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_SET_RARITY_OFFSET))(arg, nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CARDSHOPPURCHASEHISTORYDB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

	};
}

