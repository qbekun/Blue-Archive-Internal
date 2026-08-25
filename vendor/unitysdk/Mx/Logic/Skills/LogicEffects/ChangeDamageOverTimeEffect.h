#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeDamageOverTimeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140AFD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_MAXCHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x140B120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x140B140)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_CHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x140B150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_MINCHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x140B170)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeDamageOverTimeEffect_TypeDefinitionIndex = 14707;

	class ChangeDamageOverTimeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ChangeDamageOverTimeEffectValue* _value_k__BackingField; // 0xF0

		::System::Void .ctor(::MX::Logic::Data::ChangeDamageOverTimeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeDamageOverTimeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_MaxChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_MAXCHANGEDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ChangeDamageOverTimeEffectValue* get_value()
		{
			return ((::MX::Logic::Data::ChangeDamageOverTimeEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_CHANGEDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEDAMAGEOVERTIMEEFFECT_GET_MINCHANGEDAMAGERATE_OFFSET))(nullptr);
		}

	};
}

