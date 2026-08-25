#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AddCurrentAmmoEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141FA00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141FA10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_GET_AMMOCOUNTTOADD_OFFSET UNITYSDK_OFFSET(0x141FA50)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AddCurrentAmmoEffect_TypeDefinitionIndex = 14787;

	class AddCurrentAmmoEffect : public Il2CppObject
	{
	public:
		::System::Int32 _AmmoCountToAdd_k__BackingField; // 0xD0

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AddCurrentAmmoEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AddCurrentAmmoEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_AmmoCountToAdd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDCURRENTAMMOEFFECT_GET_AMMOCOUNTTOADD_OFFSET))(nullptr);
		}

	};
}

