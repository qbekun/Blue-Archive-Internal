#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class NotMoveEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x141F270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_IMMUNEKNOCKBACK_OFFSET UNITYSDK_OFFSET(0x141F280)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_ABILITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x141F290)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141F330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_INCLUDEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x141F340)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x141F350)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x141F410)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141F420)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int NotMoveEffect_TypeDefinitionIndex = 14783;

	class NotMoveEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::System::Boolean _IncludeRootMotion_k__BackingField; // 0xD9
		::System::Boolean _ImmuneKnockback_k__BackingField; // 0xDA
		::MX::Logic::Battles::Battle* battle; // 0xE0
		Il2CppObject* dotAbility; // 0xE8

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_ImmuneKnockback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_IMMUNEKNOCKBACK_OFFSET))(nullptr);
		}

		::System::Void Ability_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_ABILITY_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IncludeRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_INCLUDEROOTMOTION_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::NotMoveEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::NotMoveEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_NOTMOVEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

