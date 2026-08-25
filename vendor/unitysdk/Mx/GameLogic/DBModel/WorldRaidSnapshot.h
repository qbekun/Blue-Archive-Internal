#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_GET_WORLDRAIDLOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1013490)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_SET_WORLDRAIDLOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0x10134A0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_GET_WORLDRAIDCLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x10134B0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10134C0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_SET_WORLDRAIDCLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1013590)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidSnapshot_TypeDefinitionIndex = 12753;

	class WorldRaidSnapshot : public Il2CppObject
	{
	public:
		Il2CppObject* _WorldRaidLocalBossDBs_k__BackingField; // 0x10
		Il2CppObject* _WorldRaidClearHistoryDBs_k__BackingField; // 0x18

		Il2CppObject* get_WorldRaidLocalBossDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_GET_WORLDRAIDLOCALBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidLocalBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_SET_WORLDRAIDLOCALBOSSDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WorldRaidClearHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_GET_WORLDRAIDCLEARHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_WorldRaidClearHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDSNAPSHOT_SET_WORLDRAIDCLEARHISTORYDBS_OFFSET))(arg, nullptr);
		}

	};
}

