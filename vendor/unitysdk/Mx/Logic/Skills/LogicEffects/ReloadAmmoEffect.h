#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_RELOADAMMOEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141F9D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RELOADAMMOEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141F9F0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ReloadAmmoEffect_TypeDefinitionIndex = 14786;

	class ReloadAmmoEffect : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Skills::SkillSpecification* arg, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RELOADAMMOEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RELOADAMMOEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

