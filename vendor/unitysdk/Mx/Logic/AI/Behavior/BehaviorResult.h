#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int BehaviorResult_TypeDefinitionIndex = 14504;

	class BehaviorResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::AI::Behavior::BehaviorResult* Failure; // 0x0
		::MX::Logic::AI::Behavior::BehaviorResult* Success; // 0x0
		::MX::Logic::AI::Behavior::BehaviorResult* Running; // 0x0

	};
}

