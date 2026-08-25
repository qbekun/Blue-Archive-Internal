#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_RECEIVEDATETIME_OFFSET UNITYSDK_OFFSET(0x1009F90)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_SEASONSERVERID_OFFSET UNITYSDK_OFFSET(0x1009FA0)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_SEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1009FB0)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009FC0)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_RECEIVEDATETIME_OFFSET UNITYSDK_OFFSET(0x1009FD0)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_SEASONSERVERID_OFFSET UNITYSDK_OFFSET(0x1009FE0)
#define MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_SEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1009FF0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidSeasonHistoryDB_TypeDefinitionIndex = 12708;

	class RaidSeasonHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonServerId_k__BackingField; // 0x10
		::System::DateTime* _ReceiveDateTime_k__BackingField; // 0x18
		::System::Int64 _SeasonRewardGauage_k__BackingField; // 0x20

		::System::Void set_ReceiveDateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_RECEIVEDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_SEASONSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonRewardGauage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_SEASONREWARDGAUAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_ReceiveDateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_GET_RECEIVEDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_SeasonServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_SEASONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonRewardGauage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSEASONHISTORYDB_SET_SEASONREWARDGAUAGE_OFFSET))(arg, nullptr);
		}

	};
}

