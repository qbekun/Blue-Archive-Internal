#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_BEHAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorAction`3_TypeDefinitionIndex = 14502;

	class BehaviorAction`3 : public Il2CppObject
	{
	public:
		Il2CppObject* action; // 0x0
		Il2CppObject* arg01; // 0x0
		Il2CppObject* arg02; // 0x0
		Il2CppObject* arg03; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_BEHAVE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`3_TOSTRING_OFFSET))(nullptr);
		}

	};
}

