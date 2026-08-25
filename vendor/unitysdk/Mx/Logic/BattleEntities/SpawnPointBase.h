#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11C3E30)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_SET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x11C4030)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_GET_SPAWNED_OFFSET UNITYSDK_OFFSET(0x11C4040)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11C4050)
#define MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C4060)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SpawnPointBase_TypeDefinitionIndex = 13348;

	class SpawnPointBase : public Il2CppObject
	{
	public:
		::System::Char SpawnAIGroupId; // 0x48
		Il2CppObject* SpawnConditionIdList; // 0x50
		Il2CppObject* SpawnCommandIdList; // 0x58
		Il2CppObject* MovePoints; // 0x60
		::System::Boolean _Spawned_k__BackingField; // 0x68

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void set_Spawned(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_SET_SPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Spawned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_GET_SPAWNED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNPOINTBASE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

