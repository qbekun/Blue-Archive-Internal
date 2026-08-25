#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ImmuneToLogicEffectTemplateIdEffectValue; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class FontType; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x141B760)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B7C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x141B980)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ImmuneToLogicEffectTemplateIdEffect_TypeDefinitionIndex = 14763;

	class ImmuneToLogicEffectTemplateIdEffect : public Il2CppObject
	{
	public:
		Il2CppObject* TargetLogicEffectTemplateIds; // 0xE0
		::MX::Logic::Data::ImmuneToLogicEffectTemplateIdEffectValue* immuneToLogicEffectTemplateIdEffectValue; // 0xE8

		::System::Boolean HasImmune(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_HASIMMUNE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ImmuneToLogicEffectTemplateIdEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ImmuneToLogicEffectTemplateIdEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNETOLOGICEFFECTTEMPLATEIDEFFECT_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

	};
}

