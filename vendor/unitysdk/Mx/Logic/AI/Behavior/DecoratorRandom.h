#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_DECORATORRANDOM_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D94B0)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORRANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D95C0)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int DecoratorRandom_TypeDefinitionIndex = 14511;

	class DecoratorRandom : public Il2CppObject
	{
	public:
		::System::Single _probability; // 0x18
		Il2CppObject* _randomFunc; // 0x20
		::MX::Logic::AI::Behavior::BehaviorNode* _behavior; // 0x28

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORRANDOM_BEHAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, Il2CppObject* arg2, ::MX::Logic::AI::Behavior::BehaviorNode* arg3)
		{
			((::System::Void(*)(::System::Single, Il2CppObject*, ::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORRANDOM_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

