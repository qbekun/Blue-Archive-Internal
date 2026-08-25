#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HealByHitRemoveCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealByHitRemoveCondition_TypeDefinitionIndex = 13522;

	class HealByHitRemoveCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::HealByHitRemoveCondition* None; // 0x0
		::MX::Logic::Data::HealByHitRemoveCondition* HpRateOver; // 0x0
		::MX::Logic::Data::HealByHitRemoveCondition* HpRateUnder; // 0x0
		::MX::Logic::Data::HealByHitRemoveCondition* TriggerCountOver; // 0x0

	};
}

