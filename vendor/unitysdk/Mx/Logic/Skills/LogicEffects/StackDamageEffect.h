#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class StackDamageEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421A80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1421AD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_GET_STACKDAMAGEEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1421AE0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StackDamageEffect_TypeDefinitionIndex = 14803;

	class StackDamageEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::StackDamageEffectValue* _StackDamageEffectValue_k__BackingField; // 0xD0

		::System::Void .ctor(::MX::Logic::Data::StackDamageEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StackDamageEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::StackDamageEffectValue* get_StackDamageEffectValue()
		{
			return ((::MX::Logic::Data::StackDamageEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STACKDAMAGEEFFECT_GET_STACKDAMAGEEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

