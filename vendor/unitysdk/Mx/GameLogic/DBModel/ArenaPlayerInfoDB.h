#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE22E0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0xFE22F0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CUMULATIVETIMEREWARD_OFFSET UNITYSDK_OFFSET(0xFE2300)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0xFE2310)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_SEASONRECORD_OFFSET UNITYSDK_OFFSET(0xFE2320)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_DAILYREWARDACTIVETIME_OFFSET UNITYSDK_OFFSET(0xFE2330)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_PLAYERGROUPID_OFFSET UNITYSDK_OFFSET(0xFE2340)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_DAILYREWARDACTIVETIME_OFFSET UNITYSDK_OFFSET(0xFE2350)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_ALLTIMERECORD_OFFSET UNITYSDK_OFFSET(0xFE2360)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_TIMEREWARDLASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFE2370)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_ALLTIMERECORD_OFFSET UNITYSDK_OFFSET(0xFE2380)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_BATTLEENTERACTIVETIME_OFFSET UNITYSDK_OFFSET(0xFE2390)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CURRENTSEASONID_OFFSET UNITYSDK_OFFSET(0xFE23A0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_TIMEREWARDLASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFE23B0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_BATTLEENTERACTIVETIME_OFFSET UNITYSDK_OFFSET(0xFE23C0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CURRENTSEASONID_OFFSET UNITYSDK_OFFSET(0xFE23D0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_SEASONRECORD_OFFSET UNITYSDK_OFFSET(0xFE23E0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_PLAYERGROUPID_OFFSET UNITYSDK_OFFSET(0xFE23F0)
#define MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CUMULATIVETIMEREWARD_OFFSET UNITYSDK_OFFSET(0xFE2400)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaPlayerInfoDB_TypeDefinitionIndex = 12479;

	class ArenaPlayerInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentSeasonId_k__BackingField; // 0x10
		::System::Int64 _PlayerGroupId_k__BackingField; // 0x18
		::System::Int64 _CurrentRank_k__BackingField; // 0x20
		::System::Int64 _SeasonRecord_k__BackingField; // 0x28
		::System::Int64 _AllTimeRecord_k__BackingField; // 0x30
		::System::Int64 _CumulativeTimeReward_k__BackingField; // 0x38
		::System::DateTime* _TimeRewardLastUpdateTime_k__BackingField; // 0x40
		::System::DateTime* _BattleEnterActiveTime_k__BackingField; // 0x48
		::System::DateTime* _DailyRewardActiveTime_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CURRENTRANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_CumulativeTimeReward(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CUMULATIVETIMEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CURRENTRANK_OFFSET))(nullptr);
		}

		::System::Void set_SeasonRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_SEASONRECORD_OFFSET))(arg, nullptr);
		}

		::System::Void set_DailyRewardActiveTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_DAILYREWARDACTIVETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayerGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_PLAYERGROUPID_OFFSET))(nullptr);
		}

		::System::DateTime* get_DailyRewardActiveTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_DAILYREWARDACTIVETIME_OFFSET))(nullptr);
		}

		::System::Int64 get_AllTimeRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_ALLTIMERECORD_OFFSET))(nullptr);
		}

		::System::DateTime* get_TimeRewardLastUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_TIMEREWARDLASTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_AllTimeRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_ALLTIMERECORD_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BattleEnterActiveTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_BATTLEENTERACTIVETIME_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_CURRENTSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimeRewardLastUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_TIMEREWARDLASTUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleEnterActiveTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_BATTLEENTERACTIVETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CURRENTSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_SEASONRECORD_OFFSET))(nullptr);
		}

		::System::Void set_PlayerGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_SET_PLAYERGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CumulativeTimeReward()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAPLAYERINFODB_GET_CUMULATIVETIMEREWARD_OFFSET))(nullptr);
		}

	};
}

