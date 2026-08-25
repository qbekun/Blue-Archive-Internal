#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_BEHAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_GETACTIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorAction`1_TypeDefinitionIndex = 14500;

	class BehaviorAction`1 : public Il2CppObject
	{
	public:
		Il2CppObject* action; // 0x0
		Il2CppObject* arg; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_BEHAVE_OFFSET))(nullptr);
		}

		::System::String* GetActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_GETACTIONNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION`1_TOSTRING_OFFSET))(nullptr);
		}

	};
}

