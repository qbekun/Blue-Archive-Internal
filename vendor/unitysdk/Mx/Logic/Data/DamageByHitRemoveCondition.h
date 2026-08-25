#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DamageByHitRemoveCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageByHitRemoveCondition_TypeDefinitionIndex = 13516;

	class DamageByHitRemoveCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::DamageByHitRemoveCondition* None; // 0x0
		::MX::Logic::Data::DamageByHitRemoveCondition* HpRateOver; // 0x0
		::MX::Logic::Data::DamageByHitRemoveCondition* HpRateUnder; // 0x0
		::MX::Logic::Data::DamageByHitRemoveCondition* TriggerCountOver; // 0x0

	};
}

