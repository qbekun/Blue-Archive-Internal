#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HealByHitTriggerType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealByHitTriggerType_TypeDefinitionIndex = 13523;

	class HealByHitTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::HealByHitTriggerType* None; // 0x0
		::MX::Logic::Data::HealByHitTriggerType* Damaged; // 0x0
		::MX::Logic::Data::HealByHitTriggerType* Healed; // 0x0

	};
}

