#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define <>C__DISPLAYCLASS107_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D7A90)
#define <>C__DISPLAYCLASS107_0__APPLY_B__0_OFFSET UNITYSDK_OFFSET(0x11D8450)

	inline static constexpr unsigned int <>c__DisplayClass107_0_TypeDefinitionIndex = 13376;

	class <>c__DisplayClass107_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Data::LogicEffectValue* value; // 0x10
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS107_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Apply_b__0(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS107_0__APPLY_B__0_OFFSET))(arg, nullptr);
		}

	};

