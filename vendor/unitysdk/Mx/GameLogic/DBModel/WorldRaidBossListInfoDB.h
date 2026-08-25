#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidWorldBossDB; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013890)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10138A0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_WORLDBOSSDB_OFFSET UNITYSDK_OFFSET(0x10138B0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_LOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x10138C0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_LOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x10138D0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10138E0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_WORLDBOSSDB_OFFSET UNITYSDK_OFFSET(0x10138F0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidBossListInfoDB_TypeDefinitionIndex = 12757;

	class WorldRaidBossListInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::WorldRaidWorldBossDB* _WorldBossDB_k__BackingField; // 0x18
		Il2CppObject* _LocalBossDBs_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_WorldBossDB(::MX::GameLogic::DBModel::WorldRaidWorldBossDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidWorldBossDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_WORLDBOSSDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LocalBossDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_LOCALBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_LocalBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_SET_LOCALBOSSDBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_GROUPID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidWorldBossDB* get_WorldBossDB()
		{
			return ((::MX::GameLogic::DBModel::WorldRaidWorldBossDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSLISTINFODB_GET_WORLDBOSSDB_OFFSET))(nullptr);
		}

	};
}

