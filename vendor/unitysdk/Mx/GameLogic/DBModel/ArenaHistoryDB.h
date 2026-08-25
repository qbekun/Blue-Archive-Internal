#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::Logic::Battles::Summary { class GroupSummary; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }

#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_BATTLEENDTIME_OFFSET UNITYSDK_OFFSET(0xFE1D90)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_DEFENDINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE1DB0)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_SET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xFE1DD0)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_OPPONENTGROUPSUMMARY_OFFSET UNITYSDK_OFFSET(0xFE1DE0)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_MYARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xFE1ED0)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_WINNERACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFE1F80)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_OPPONENTARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xFE2050)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_ISWINNER_OFFSET UNITYSDK_OFFSET(0xFE2110)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_ATTACKINGUSERDB_OFFSET UNITYSDK_OFFSET(0xFE2130)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xFE2150)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_ISATTACKER_OFFSET UNITYSDK_OFFSET(0xFE2160)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xFE1EB0)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE2200)
#define MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_MYGROUPSUMMARY_OFFSET UNITYSDK_OFFSET(0xFE2210)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaHistoryDB_TypeDefinitionIndex = 12478;

	class ArenaHistoryDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaBattleDB* _ArenaBattleDB_k__BackingField; // 0x10

		::System::DateTime* get_BattleEndTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_BATTLEENDTIME_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_DefendingUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_DEFENDINGUSERDB_OFFSET))(nullptr);
		}

		::System::Void set_ArenaBattleDB(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_SET_ARENABATTLEDB_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* OpponentGroupSummary(::System::Int64 arg)
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_OPPONENTGROUPSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* MyArenaUserDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_MYARENAUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WinnerAccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_WINNERACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* OpponentArenaUserDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_OPPONENTARENAUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWinner(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_ISWINNER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_AttackingUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_ATTACKINGUSERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_ArenaBattleDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_ARENABATTLEDB_OFFSET))(nullptr);
		}

		::System::Boolean IsAttacker(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_ISATTACKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::GroupSummary* MyGroupSummary(::System::Int64 arg)
		{
			return ((::MX::Logic::Battles::Summary::GroupSummary*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAHISTORYDB_MYGROUPSUMMARY_OFFSET))(arg, nullptr);
		}

	};
}

