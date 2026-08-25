#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class LogicEffectType; }

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int LogicEffectType_TypeDefinitionIndex = 14773;

	class LogicEffectType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::LogicEffects::LogicEffectType* None; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* Damage; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* Heal; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* StatChange; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* StatusChange; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* KnockBack; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* StatusRemove; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* ModifyCoolTime; // 0x0
		::MX::Logic::Skills::LogicEffects::LogicEffectType* Revive; // 0x0

	};
}

