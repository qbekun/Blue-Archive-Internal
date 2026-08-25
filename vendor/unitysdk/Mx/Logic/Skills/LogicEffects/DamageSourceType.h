#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class DamageSourceType; }

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DamageSourceType_TypeDefinitionIndex = 14732;

	class DamageSourceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::LogicEffects::DamageSourceType* None; // 0x0
		::MX::Logic::Skills::LogicEffects::DamageSourceType* DamageOverTime; // 0x0
		::MX::Logic::Skills::LogicEffects::DamageSourceType* ChangeDamageOverTime; // 0x0
		::MX::Logic::Skills::LogicEffects::DamageSourceType* DamageByHit; // 0x0
		::MX::Logic::Skills::LogicEffects::DamageSourceType* ExtraStatDamage; // 0x0

	};
}

