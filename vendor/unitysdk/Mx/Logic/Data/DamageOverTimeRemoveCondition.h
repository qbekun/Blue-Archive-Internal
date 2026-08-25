#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageOverTimeRemoveCondition_TypeDefinitionIndex = 13518;

	class DamageOverTimeRemoveCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::DamageOverTimeRemoveCondition* None; // 0x0
		::MX::Logic::Data::DamageOverTimeRemoveCondition* HpRateOver; // 0x0
		::MX::Logic::Data::DamageOverTimeRemoveCondition* HpRateUnder; // 0x0

	};
}

