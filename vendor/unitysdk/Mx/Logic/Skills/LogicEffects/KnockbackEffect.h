#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class KnockbackDirection; }
namespace MX::Logic::Data { class KnockbackEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_KNOCKBACKEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BC20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_KNOCKBACKEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141BC70)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int KnockbackEffect_TypeDefinitionIndex = 14766;

	class KnockbackEffect : public Il2CppObject
	{
	public:
		::System::Int64 MoveDuration; // 0xD0
		::System::Int64 MoveDistance; // 0xD8
		::FlatData::KnockbackDirection* KnockbackDirection; // 0xE0

		::System::Void .ctor(::MX::Logic::Data::KnockbackEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::KnockbackEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_KNOCKBACKEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_KNOCKBACKEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

