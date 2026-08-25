#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLEENDTIME_OFFSET UNITYSDK_OFFSET(0xFE2410)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xFE2420)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_DEFENDINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE2430)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_SEED_OFFSET UNITYSDK_OFFSET(0xFE2440)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_ARENABATTLESERVERID_OFFSET UNITYSDK_OFFSET(0xFE2450)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_ARENABATTLESERVERID_OFFSET UNITYSDK_OFFSET(0xFE2460)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xFE2470)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_ATTACKINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE2480)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLESTARTTIME_OFFSET UNITYSDK_OFFSET(0xFE2490)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_SEED_OFFSET UNITYSDK_OFFSET(0xFE24A0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xFE24B0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_ATTACKINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE24C0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLEENDTIME_OFFSET UNITYSDK_OFFSET(0xFE24D0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_DEFENDINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE24E0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE24F0)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xFE2500)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_GROUP_OFFSET UNITYSDK_OFFSET(0xFE2510)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_GROUP_OFFSET UNITYSDK_OFFSET(0xFE2520)
#define MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLESTARTTIME_OFFSET UNITYSDK_OFFSET(0xFE2530)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaBattleDB_TypeDefinitionIndex = 12480;

	class ArenaBattleDB : public Il2CppObject
	{
	public:
		::System::Int64 _ArenaBattleServerId_k__BackingField; // 0x10
		::System::Int64 _Season_k__BackingField; // 0x18
		::System::Int64 _Group_k__BackingField; // 0x20
		::System::DateTime* _BattleStartTime_k__BackingField; // 0x28
		::System::DateTime* _BattleEndTime_k__BackingField; // 0x30
		::System::Int64 _Seed_k__BackingField; // 0x38
		::MX::GameLogic::DBModel::ArenaUserDB* _AttackingUserDB_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ArenaUserDB* _DefendingUserDB_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x50

		::System::DateTime* get_BattleEndTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLEENDTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_Season()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_SEASON_OFFSET))(nullptr);
		}

		::System::Void set_DefendingUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_DEFENDINGUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_Seed(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ArenaBattleServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_ARENABATTLESERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ArenaBattleServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_ARENABATTLESERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_AttackingUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_ATTACKINGUSERDB_OFFSET))(nullptr);
		}

		::System::DateTime* get_BattleStartTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLESTARTTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_Seed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Season(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_SEASON_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttackingUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_ATTACKINGUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleEndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLEENDTIME_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_DefendingUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_DEFENDINGUSERDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_Group()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void set_Group(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_GROUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleStartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENABATTLEDB_SET_BATTLESTARTTIME_OFFSET))(arg, nullptr);
		}

	};
}

