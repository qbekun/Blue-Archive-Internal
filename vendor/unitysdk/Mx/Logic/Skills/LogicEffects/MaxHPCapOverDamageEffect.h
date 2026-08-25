#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DeadlyAttackEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPOVERDAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141EE70)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int MaxHPCapOverDamageEffect_TypeDefinitionIndex = 14780;

	class MaxHPCapOverDamageEffect : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Data::DeadlyAttackEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Data::DeadlyAttackEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPOVERDAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

