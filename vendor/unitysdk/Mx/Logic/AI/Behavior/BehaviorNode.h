#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_BEHAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x13D8ED0)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x13D8EE0)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D8D00)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorNode_TypeDefinitionIndex = 14503;

	class BehaviorNode : public Il2CppObject
	{
	public:
		::MX::Logic::AI::Behavior::BehaviorResult* _Result_k__BackingField; // 0x10

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_BEHAVE_OFFSET))(nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* get_Result()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Result(::MX::Logic::AI::Behavior::BehaviorResult* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

