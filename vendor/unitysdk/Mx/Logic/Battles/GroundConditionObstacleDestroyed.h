#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class ObstacleEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_START_OFFSET UNITYSDK_OFFSET(0x1363060)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_END_OFFSET UNITYSDK_OFFSET(0x13630F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1363180)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_.CTOR_OFFSET UNITYSDK_OFFSET(0x1363380)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13633D0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1363EA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_BATTLE_OBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1364740)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13647C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionObstacleDestroyed_TypeDefinitionIndex = 14343;

	class GroundConditionObstacleDestroyed : public Il2CppObject
	{
	public:
		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_END_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionObstacleDestroyed&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_ObstacleDestroyed(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_BATTLE_OBSTACLEDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLEDESTROYED_.CCTOR_OFFSET))(nullptr);
		}

	};
}

