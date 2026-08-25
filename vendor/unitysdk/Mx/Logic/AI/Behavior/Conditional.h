#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_GETCONDITIONNAME_OFFSET UNITYSDK_OFFSET(0x13D9060)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D90A0)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9180)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13D91B0)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int Conditional_TypeDefinitionIndex = 14506;

	class Conditional : public Il2CppObject
	{
	public:
		Il2CppObject* condition; // 0x18

		::System::String* GetConditionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_GETCONDITIONNAME_OFFSET))(nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_BEHAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL_TOSTRING_OFFSET))(nullptr);
		}

	};
}

