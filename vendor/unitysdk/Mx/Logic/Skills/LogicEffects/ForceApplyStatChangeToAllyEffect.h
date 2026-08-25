#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Data { class ForceApplyStatChangeToAllyEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT__LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_B__36_0_OFFSET UNITYSDK_OFFSET(0x1417D20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x1417D50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_APPLYSTATCHANGELAYER_OFFSET UNITYSDK_OFFSET(0x1417D60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1417D70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1417D80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14180A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_STATCHANGESOURCE_DIED_OFFSET UNITYSDK_OFFSET(0x14180B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x1418100)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_SHOWFORCEAPPLIEDEFFECTSKILLVISUAL_OFFSET UNITYSDK_OFFSET(0x1418110)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1418120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_SHOWFORCEAPPLIEDEFFECTCOMMONVISUAL_OFFSET UNITYSDK_OFFSET(0x14181D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1418030)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1418200)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_CATEGORYCONDITION_OFFSET UNITYSDK_OFFSET(0x1418BD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_UPDATESTATCHANGEALWAYS_OFFSET UNITYSDK_OFFSET(0x1418BE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x1418BF0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ForceApplyStatChangeToAllyEffect_TypeDefinitionIndex = 14748;

	class ForceApplyStatChangeToAllyEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Range_k__BackingField; // 0xD0
		::FlatData::LogicEffectCategory* _CategoryCondition_k__BackingField; // 0xD8
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xDC
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0xE0
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0xE8
		::System::Boolean _Dispellable_k__BackingField; // 0xF0
		::System::Boolean _UpdateStatChangeAlways_k__BackingField; // 0xF1
		::System::Boolean _ApplyStatChangeLayer_k__BackingField; // 0xF2
		::System::Boolean _ShowForceAppliedEffectSkillVisual_k__BackingField; // 0xF3
		::System::Boolean _ShowForceAppliedEffectCommonVisual_k__BackingField; // 0xF4
		::MX::Logic::Battles::Battle* battle; // 0xF8
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* logicEffectProcessor; // 0x100
		Il2CppObject* ability; // 0x108

		::System::Int32 _LogicEffectProcessor_LogicEffectHit_b__36_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT__LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_B__36_0_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStatChangeLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_APPLYSTATCHANGELAYER_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void StatChangeSource_Died(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_STATCHANGESOURCE_DIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Range()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_RANGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowForceAppliedEffectSkillVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_SHOWFORCEAPPLIEDEFFECTSKILLVISUAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ForceApplyStatChangeToAllyEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ForceApplyStatChangeToAllyEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_ShowForceAppliedEffectCommonVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_SHOWFORCEAPPLIEDEFFECTCOMMONVISUAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LogicEffectCategory* get_CategoryCondition()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_CATEGORYCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_UpdateStatChangeAlways()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_UPDATESTATCHANGEALWAYS_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_FORCEAPPLYSTATCHANGETOALLYEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

	};
}

