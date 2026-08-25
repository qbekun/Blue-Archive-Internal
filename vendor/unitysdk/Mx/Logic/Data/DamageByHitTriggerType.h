#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DamageByHitTriggerType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageByHitTriggerType_TypeDefinitionIndex = 13517;

	class DamageByHitTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::DamageByHitTriggerType* None; // 0x0
		::MX::Logic::Data::DamageByHitTriggerType* Damaged; // 0x0
		::MX::Logic::Data::DamageByHitTriggerType* Healed; // 0x0

	};
}

