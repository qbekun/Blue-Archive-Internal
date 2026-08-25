#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Data { class CrowdControlGaugeApplyType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::Data { class CrowdControlGaugeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class LogicEffectImmuneEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x140CE40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEREDUCEVALUEPERSECOND_OFFSET UNITYSDK_OFFSET(0x140D190)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_PROCESSADDGAUGE_OFFSET UNITYSDK_OFFSET(0x140D1A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_CURRENTGAUGE_OFFSET UNITYSDK_OFFSET(0x140FEA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x140FEB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140FEC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEFILLCAP_OFFSET UNITYSDK_OFFSET(0x14100F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_MAXGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1410100)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1410110)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1410120)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x140D100)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTIMMUNE_OFFSET UNITYSDK_OFFSET(0x1410150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_SET_MAXGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x1410380)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_SET_CURRENTGAUGE_OFFSET UNITYSDK_OFFSET(0x1410390)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x14103A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEREDUCESTARTDELAY_OFFSET UNITYSDK_OFFSET(0x1410510)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CrowdControlGaugeEffect_TypeDefinitionIndex = 14725;

	class CrowdControlGaugeEffect : public Il2CppObject
	{
	public:
		::System::Int32 _DurationFrame_k__BackingField; // 0xD0
		::System::Action* OnExpired; // 0xD8
		Il2CppObject* OnAddGauge; // 0xE0
		::MX::Logic::Battles::Battle* battle; // 0xE8
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* O7e6b8e57d9e3572f2609cdeda8cd08b4692f4376c3157e92ee59095ede2853b7; // 0xF0
		::System::Boolean isCalculateOppression; // 0xF8
		::MX::Logic::Data::CrowdControlGaugeApplyType* applyCrowdControlType; // 0xFC
		Il2CppObject* maxGaugeLogicEffectValueList; // 0x100
		Il2CppObject* ignoreLogicEffectTemplateIdList; // 0x108
		::System::Int32 _MaxGaugeValue_k__BackingField; // 0x110
		::System::Int32 _CurrentGauge_k__BackingField; // 0x114
		::System::Int64 _GaugeReduceValuePerSecond_k__BackingField; // 0x118
		::System::Int64 _GaugeReduceStartDelay_k__BackingField; // 0x120
		::System::Int32 _GaugeFillCap_k__BackingField; // 0x128
		::System::Boolean _Dispellable_k__BackingField; // 0x12C
		::System::Int64 lastGaugeAddedFrame; // 0x130
		::System::Int64 crowdControlFactor; // 0x138
		::System::Int32 gaugeReducePerFrame; // 0x140
		::System::Int64 gaugeReduceDelayFrame; // 0x148

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_GaugeReduceValuePerSecond()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEREDUCEVALUEPERSECOND_OFFSET))(nullptr);
		}

		::System::Void ProcessAddGauge(::System::Int32 arg, ::System::Int64 arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::MX::Logic::BattleEntities::Entity* arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_PROCESSADDGAUGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int32 get_CurrentGauge()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_CURRENTGAUGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::CrowdControlGaugeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::CrowdControlGaugeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_GaugeFillCap()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEFILLCAP_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxGaugeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_MAXGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_CHECKEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectImmune(::System::Object* arg, ::MX::Logic::Battles::LogicEffectImmuneEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectImmuneEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTIMMUNE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_MaxGaugeValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_SET_MAXGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentGauge(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_SET_CURRENTGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_GaugeReduceStartDelay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CROWDCONTROLGAUGEEFFECT_GET_GAUGEREDUCESTARTDELAY_OFFSET))(nullptr);
		}

	};
}

