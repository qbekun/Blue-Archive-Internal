#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_GET_OPENEDBOSSGROUPS_OFFSET UNITYSDK_OFFSET(0x1008240)
#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_GET_BESTRANKINGPOINTPERBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1008250)
#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_SET_BESTRANKINGPOINTPERBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1008260)
#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_SET_OPENEDBOSSGROUPS_OFFSET UNITYSDK_OFFSET(0x1008280)
#define MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10082A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EliminateRaidLobbyInfoDB_TypeDefinitionIndex = 12691;

	class EliminateRaidLobbyInfoDB : public Il2CppObject
	{
	public:
		Il2CppObject* _OpenedBossGroups_k__BackingField; // 0xC8
		Il2CppObject* _BestRankingPointPerBossGroup_k__BackingField; // 0xD0

		Il2CppObject* get_OpenedBossGroups()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_GET_OPENEDBOSSGROUPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_BestRankingPointPerBossGroup()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_GET_BESTRANKINGPOINTPERBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPointPerBossGroup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_SET_BESTRANKINGPOINTPERBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_OpenedBossGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_SET_OPENEDBOSSGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ELIMINATERAIDLOBBYINFODB_.CTOR_OFFSET))(nullptr);
		}

	};
}

