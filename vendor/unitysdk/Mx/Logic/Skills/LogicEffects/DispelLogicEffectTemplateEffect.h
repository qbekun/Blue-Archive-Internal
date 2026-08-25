#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DispelLogicEffectTemplateEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_LOGICEFFECTTEMPLATEHASHTODISPEL_OFFSET UNITYSDK_OFFSET(0x1415310)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1415320)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_DISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x1415330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1415340)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DispelLogicEffectTemplateEffect_TypeDefinitionIndex = 14737;

	class DispelLogicEffectTemplateEffect : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _LogicEffectTemplateHashToDispel_k__BackingField; // 0xD0
		::System::Int32 _DispelCount_k__BackingField; // 0xD8

		::Il2CppArray<::System::Object*>* get_LogicEffectTemplateHashToDispel()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_LOGICEFFECTTEMPLATEHASHTODISPEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Int32 get_DispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_GET_DISPELCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DispelLogicEffectTemplateEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DispelLogicEffectTemplateEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DISPELLOGICEFFECTTEMPLATEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

