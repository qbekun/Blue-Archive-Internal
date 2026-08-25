#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_GETCONDITIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_BEHAVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int Conditional`2_TypeDefinitionIndex = 14508;

	class Conditional`2 : public Il2CppObject
	{
	public:
		Il2CppObject* condition; // 0x0
		Il2CppObject* arg01; // 0x0
		Il2CppObject* arg02; // 0x0

		::System::String* GetConditionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_GETCONDITIONNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_CONDITIONAL`2_BEHAVE_OFFSET))(nullptr);
		}

	};
}

