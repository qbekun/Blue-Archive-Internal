#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class MaxHPCapGaugeValueEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEVALUEEFFECT_GET_MAXHPCAPGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x141EF10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEVALUEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141EF20)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int MaxHPCapGaugeValueEffect_TypeDefinitionIndex = 14779;

	class MaxHPCapGaugeValueEffect : public Il2CppObject
	{
	public:
		::System::Int32 _MaxHPCapGaugeValue_k__BackingField; // 0xD0

		::System::Int32 get_MaxHPCapGaugeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEVALUEEFFECT_GET_MAXHPCAPGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::MaxHPCapGaugeValueEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::MaxHPCapGaugeValueEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEVALUEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

