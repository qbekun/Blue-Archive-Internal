#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace FlatData { class StageTopography; }
namespace MX::Logic::Data { class OverrideStageTopographyEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141F900)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x141F980)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x141F990)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x141F9A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x141F9B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x141F9C0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int OverrideStageTopographyEffect_TypeDefinitionIndex = 14785;

	class OverrideStageTopographyEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0xD8
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0xE0
		::FlatData::StageTopography* _StageTopography_k__BackingField; // 0xE8

		::System::Void .ctor(::MX::Logic::Data::OverrideStageTopographyEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::OverrideStageTopographyEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDESTAGETOPOGRAPHYEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

	};
}

