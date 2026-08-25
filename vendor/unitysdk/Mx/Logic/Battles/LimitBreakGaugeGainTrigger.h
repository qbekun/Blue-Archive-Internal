#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class LimitBreakGaugeGainTrigger; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LimitBreakGaugeGainTrigger_TypeDefinitionIndex = 14213;

	class LimitBreakGaugeGainTrigger : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* Invalid; // 0x0
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* PerDamagedSum; // 0x0
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* PerDamagingSum; // 0x0
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* PerKilled; // 0x0
		::MX::Logic::Battles::LimitBreakGaugeGainTrigger* PerKilling; // 0x0

	};
}

