#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_RESET_OFFSET UNITYSDK_OFFSET(0xFFC430)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_SEED_OFFSET UNITYSDK_OFFSET(0xFFC520)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC530)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xFFC540)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFC550)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFC560)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFFC570)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xFFC580)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFC590)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_SEED_OFFSET UNITYSDK_OFFSET(0xFFC5A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentBoxGachaDB_TypeDefinitionIndex = 12596;

	class EventContentBoxGachaDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _Seed_k__BackingField; // 0x18
		::System::Int64 _Round_k__BackingField; // 0x20
		::System::Int32 _PurchaseCount_k__BackingField; // 0x28

		::System::Void Reset(::System::DateTime* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Seed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PurchaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Round()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTBOXGACHADB_SET_SEED_OFFSET))(arg, nullptr);
		}

	};
}

