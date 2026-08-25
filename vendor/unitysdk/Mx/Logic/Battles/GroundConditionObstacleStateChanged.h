#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ObstacleState; }
namespace MX::Logic::Battles { class ObstacleEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1364870)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1364B30)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x13656C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_END_OFFSET UNITYSDK_OFFSET(0x1365710)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_BATTLE_OBSTACLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13657A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_START_OFFSET UNITYSDK_OFFSET(0x1365830)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13658C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13658D0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionObstacleStateChanged_TypeDefinitionIndex = 14345;

	class GroundConditionObstacleStateChanged : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ObstacleState* State; // 0x28

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_END_OFFSET))(nullptr);
		}

		::System::Void Battle_ObstacleStateChanged(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_BATTLE_OBSTACLESTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_START_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionObstacleStateChanged&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONOBSTACLESTATECHANGED_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

