#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class GaugeChargeConditionType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int GaugeChargeConditionType_TypeDefinitionIndex = 13521;

	class GaugeChargeConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::GaugeChargeConditionType* None; // 0x0
		::MX::Logic::Data::GaugeChargeConditionType* Period; // 0x0
		::MX::Logic::Data::GaugeChargeConditionType* UseSkill; // 0x0

	};
}

