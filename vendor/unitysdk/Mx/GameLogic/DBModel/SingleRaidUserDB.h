#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace MX::GameLogic::DBModel { class RaidUserDB; }

#define MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_SET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x1008490)
#define MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10084A0)
#define MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1008610)
#define MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_GET_RAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x1008780)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SingleRaidUserDB_TypeDefinitionIndex = 12694;

	class SingleRaidUserDB : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidTeamSettingDB* _RaidTeamSettingDB_k__BackingField; // 0x60

		::System::Void set_RaidTeamSettingDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_SET_RAIDTEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidUserDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_CLONE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidTeamSettingDB* get_RaidTeamSettingDB()
		{
			return ((::MX::GameLogic::DBModel::RaidTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDUSERDB_GET_RAIDTEAMSETTINGDB_OFFSET))(nullptr);
		}

	};
}

