#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D8CF0)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D8D10)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D8D40)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_GETACTIONNAME_OFFSET UNITYSDK_OFFSET(0x13D8E10)
#define MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13D8E50)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorAction_TypeDefinitionIndex = 14499;

	class BehaviorAction : public Il2CppObject
	{
	public:
		Il2CppObject* action; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_BEHAVE_OFFSET))(nullptr);
		}

		::System::String* GetActionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_GETACTIONNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_BEHAVIORACTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

