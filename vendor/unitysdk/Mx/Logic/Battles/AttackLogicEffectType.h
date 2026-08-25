#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AttackLogicEffectType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AttackLogicEffectType_TypeDefinitionIndex = 13990;

	class AttackLogicEffectType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::AttackLogicEffectType* Damage; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* DeadlyAttack; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* TransferredDamage; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* DamageOverTime; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* ChangeDamageOverTime; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* DamageByHit; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* ExtraStatDamage; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* AccumulateDamage; // 0x0
		::MX::Logic::Battles::AttackLogicEffectType* MaxHPCapGauge; // 0x0

	};
}

