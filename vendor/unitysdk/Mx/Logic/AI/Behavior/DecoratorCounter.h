#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D9230)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x13D9330)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9340)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int DecoratorCounter_TypeDefinitionIndex = 14509;

	class DecoratorCounter : public Il2CppObject
	{
	public:
		::System::Int32 _maxCount; // 0x18
		::System::Int32 _counter; // 0x1C
		::MX::Logic::AI::Behavior::BehaviorNode* _behavior; // 0x20

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_BEHAVE_OFFSET))(nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorNode* get_Behavior()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::Logic::AI::Behavior::BehaviorNode* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORCOUNTER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

