#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_DECORATORTIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9620)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORTIMER_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D96C0)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int DecoratorTimer_TypeDefinitionIndex = 14512;

	class DecoratorTimer : public Il2CppObject
	{
	public:
		::MX::Logic::AI::Behavior::BehaviorNode* _behavior; // 0x18
		::System::TimeSpan* waitTime; // 0x20
		::System::TimeSpan* lastBehaveTime; // 0x28
		Il2CppObject* totalTimeFunction; // 0x30

		::System::Void .ctor(::System::TimeSpan* arg, Il2CppObject* arg2, ::MX::Logic::AI::Behavior::BehaviorNode* arg3)
		{
			((::System::Void(*)(::System::TimeSpan*, Il2CppObject*, ::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORTIMER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORTIMER_BEHAVE_OFFSET))(nullptr);
		}

	};
}

