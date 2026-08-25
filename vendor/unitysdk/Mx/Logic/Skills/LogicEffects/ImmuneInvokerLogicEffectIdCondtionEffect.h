#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ImmuneInvokerLogicEffectIdCondtionEffectValue; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class FontType; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x141B550)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B6A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x141B700)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT__HASIMMUNE_B__6_0_OFFSET UNITYSDK_OFFSET(0x141B720)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_GET_EFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x141B750)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ImmuneInvokerLogicEffectIdCondtionEffect_TypeDefinitionIndex = 14762;

	class ImmuneInvokerLogicEffectIdCondtionEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ImmuneInvokerLogicEffectIdCondtionEffectValue* _EffectValue_k__BackingField; // 0xE0

		::System::Boolean HasImmune(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_HASIMMUNE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ImmuneInvokerLogicEffectIdCondtionEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ImmuneInvokerLogicEffectIdCondtionEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean _HasImmune_b__6_0(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT__HASIMMUNE_B__6_0_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ImmuneInvokerLogicEffectIdCondtionEffectValue* get_EffectValue()
		{
			return ((::MX::Logic::Data::ImmuneInvokerLogicEffectIdCondtionEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECT_GET_EFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

