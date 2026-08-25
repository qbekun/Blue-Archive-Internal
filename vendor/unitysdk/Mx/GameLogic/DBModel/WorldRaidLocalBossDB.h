#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x10135A0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_TACTICMSCSUM_OFFSET UNITYSDK_OFFSET(0x10135B0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISCLEARDEVER_OFFSET UNITYSDK_OFFSET(0x10135C0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_ISCLEARDEVER_OFFSET UNITYSDK_OFFSET(0x10135D0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_CLONE_OFFSET UNITYSDK_OFFSET(0x10135E0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_ACCUMULATECLEARTIME_OFFSET UNITYSDK_OFFSET(0x10136A0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10136B0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013690)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_TACTICMSCSUM_OFFSET UNITYSDK_OFFSET(0x10136C0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10136D0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10136E0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0x10136F0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1013700)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013710)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISSCENARIO_OFFSET UNITYSDK_OFFSET(0x1013720)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_RAIDBATTLEDB_OFFSET UNITYSDK_OFFSET(0x1013730)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1013740)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1013750)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_ISSCENARIO_OFFSET UNITYSDK_OFFSET(0x1013760)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISCONTINUE_OFFSET UNITYSDK_OFFSET(0x1013770)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidLocalBossDB_TypeDefinitionIndex = 12754;

	class WorldRaidLocalBossDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::System::Boolean _IsScenario_k__BackingField; // 0x30
		::System::Boolean _IsCleardEver_k__BackingField; // 0x31
		::System::Int64 _TacticMscSum_k__BackingField; // 0x38
		::MX::GameLogic::DBModel::RaidBattleDB* _RaidBattleDB_k__BackingField; // 0x40

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_TacticMscSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_TACTICMSCSUM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCleardEver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISCLEARDEVER_OFFSET))(nullptr);
		}

		::System::Void set_IsCleardEver(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_ISCLEARDEVER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::WorldRaidLocalBossDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void AccumulateClearTime(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_ACCUMULATECLEARTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TacticMscSum(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_TACTICMSCSUM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidBattleDB(::MX::GameLogic::DBModel::RaidBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_RAIDBATTLEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISSCENARIO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidBattleDB* get_RaidBattleDB()
		{
			return ((::MX::GameLogic::DBModel::RaidBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_RAIDBATTLEDB_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsScenario(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_SET_ISSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDLOCALBOSSDB_GET_ISCONTINUE_OFFSET))(nullptr);
		}

	};
}

