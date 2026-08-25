#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D9380)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x13D9470)
#define MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9480)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int DecoratorInverter_TypeDefinitionIndex = 14510;

	class DecoratorInverter : public Il2CppObject
	{
	public:
		::MX::Logic::AI::Behavior::BehaviorNode* _behavior; // 0x18

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_BEHAVE_OFFSET))(nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorNode* get_Behavior()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::AI::Behavior::BehaviorNode* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_DECORATORINVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

