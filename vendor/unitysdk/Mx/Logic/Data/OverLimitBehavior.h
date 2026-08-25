#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class OverLimitBehavior; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OverLimitBehavior_TypeDefinitionIndex = 13531;

	class OverLimitBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::OverLimitBehavior* None; // 0x0
		::MX::Logic::Data::OverLimitBehavior* Kill; // 0x0
		::MX::Logic::Data::OverLimitBehavior* Retreat; // 0x0
		::MX::Logic::Data::OverLimitBehavior* OverLimitAbility; // 0x0
		::MX::Logic::Data::OverLimitBehavior* ApplyAbilityAndRemoveFromGroup; // 0x0

	};
}

