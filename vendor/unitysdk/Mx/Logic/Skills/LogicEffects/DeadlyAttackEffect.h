#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DeadlyAttackEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x14150B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x14150C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x14150D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14150E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14151D0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DeadlyAttackEffect_TypeDefinitionIndex = 14734;

	class DeadlyAttackEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0xD0

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DeadlyAttackEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DeadlyAttackEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DeadlyAttackEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Data::DeadlyAttackEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEADLYATTACKEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

