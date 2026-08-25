#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class RootSelector; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x13D8EF0)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x13D8F00)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D8F10)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9010)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x13D9040)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x13D9050)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorTree_TypeDefinitionIndex = 14505;

	class BehaviorTree : public Il2CppObject
	{
	public:
		::MX::Logic::AI::Behavior::RootSelector* _Root_k__BackingField; // 0x10
		::MX::Logic::AI::Behavior::BehaviorResult* _Result_k__BackingField; // 0x18

		::System::Void set_Result(::MX::Logic::AI::Behavior::BehaviorResult* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Root(::MX::Logic::AI::Behavior::RootSelector* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::RootSelector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_SET_ROOT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_BEHAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::AI::Behavior::RootSelector* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::RootSelector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* get_Result()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_GET_RESULT_OFFSET))(nullptr);
		}

		::MX::Logic::AI::Behavior::RootSelector* get_Root()
		{
			return ((::MX::Logic::AI::Behavior::RootSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORTREE_GET_ROOT_OFFSET))(nullptr);
		}

	};
}

