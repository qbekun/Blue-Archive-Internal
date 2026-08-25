#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_SELECTOR_GET_BEHAVIORS_OFFSET UNITYSDK_OFFSET(0x13DA490)
#define MX_LOGIC_AI_BEHAVIOR_SELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x13DA4A0)
#define MX_LOGIC_AI_BEHAVIOR_SELECTOR_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13DA540)
#define MX_LOGIC_AI_BEHAVIOR_SELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA690)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int Selector_TypeDefinitionIndex = 14517;

	class Selector : public Il2CppObject
	{
	public:
		Il2CppObject* _behaviors; // 0x18

		Il2CppObject* get_Behaviors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SELECTOR_GET_BEHAVIORS_OFFSET))(nullptr);
		}

		::System::Void Add(::MX::Logic::AI::Behavior::BehaviorNode* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SELECTOR_ADD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SELECTOR_BEHAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

