#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class MaxHPCapGaugeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x141DED0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141DEE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_ABILITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x141DEF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_REDUCEVALUEPERHEALPOINT_OFFSET UNITYSDK_OFFSET(0x141DFA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x141DFB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x141DFC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x141DFD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_PROCESSHEALAPPLIED_OFFSET UNITYSDK_OFFSET(0x141DFE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_SET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x141E120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141E130)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x141E1C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_CHANGEGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x141E910)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_COAPPLYMAXHPCAP_OFFSET UNITYSDK_OFFSET(0x141E370)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int MaxHPCapGaugeEffect_TypeDefinitionIndex = 14778;

	class MaxHPCapGaugeEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::System::Int32 _MaxValue_k__BackingField; // 0xDC
		::System::Int32 _ReduceValuePerHealPoint_k__BackingField; // 0xE0
		::System::Int32 _CurrentGaugeValue_k__BackingField; // 0xE4
		::MX::Logic::Battles::Battle* battle; // 0xE8
		Il2CppObject* dotAbility; // 0xF0
		::System::String* capOverDeadlyAttackGroupId; // 0xF8

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void Ability_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_ABILITY_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_ReduceValuePerHealPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_REDUCEVALUEPERHEALPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentGaugeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_GET_CURRENTGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Void ProcessHealApplied(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_PROCESSHEALAPPLIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentGaugeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_SET_CURRENTGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::MaxHPCapGaugeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::MaxHPCapGaugeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangeGaugeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_CHANGEGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoApplyMaxHPCap()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_MAXHPCAPGAUGEEFFECT_COAPPLYMAXHPCAP_OFFSET))(nullptr);
		}

	};
}

