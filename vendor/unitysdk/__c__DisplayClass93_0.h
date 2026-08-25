#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class Aura; }
namespace MX::Logic::Data { class DotAbilityValue; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define <>C__DISPLAYCLASS93_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1197F80)
#define <>C__DISPLAYCLASS93_0__APPLYABILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1199470)

	inline static constexpr unsigned int <>c__DisplayClass93_0_TypeDefinitionIndex = 13298;

	class <>c__DisplayClass93_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::Aura* __4__this; // 0x10
		::MX::Logic::Data::DotAbilityValue* _dotAbility_5__2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS93_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ApplyAbility_b__0(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS93_0__APPLYABILITY_B__0_OFFSET))(arg, nullptr);
		}

	};

