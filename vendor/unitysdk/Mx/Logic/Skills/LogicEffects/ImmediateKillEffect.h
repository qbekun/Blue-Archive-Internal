#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ImmediateKillEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_IGNOREIMMORTAL_OFFSET UNITYSDK_OFFSET(0x141B460)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B480)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x141B4C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_IGNOREAPPLIEDCHEAT_OFFSET UNITYSDK_OFFSET(0x141B4D0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ImmediateKillEffect_TypeDefinitionIndex = 14760;

	class ImmediateKillEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ImmediateKillEffectValue* _value_k__BackingField; // 0xD0

		::System::Boolean get_IgnoreImmortal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_IGNOREIMMORTAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ImmediateKillEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ImmediateKillEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::ImmediateKillEffectValue* get_value()
		{
			return ((::MX::Logic::Data::ImmediateKillEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreAppliedCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMEDIATEKILLEFFECT_GET_IGNOREAPPLIEDCHEAT_OFFSET))(nullptr);
		}

	};
}

