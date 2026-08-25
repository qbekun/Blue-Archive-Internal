#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ExSkillCardRedrawGaugeEffectDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::Data { class ExSkillCardRedrawGaugeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class BattleEntitySkillTriggeredEventArgs; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::BattleEntities { class SkillCardRedrawedEvent; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1415460)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTREDRAWSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x14157B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_MAXGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x14157C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_PROCESSADDGAUGE_OFFSET UNITYSDK_OFFSET(0x1415590)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_COCHECKPERIOD_OFFSET UNITYSDK_OFFSET(0x14157F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTREDRAWTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1415880)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_REDRAWENABLE_OFFSET UNITYSDK_OFFSET(0x1415890)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x14158E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x14158F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_BATTLE_BATTLEENTITYSKILLTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1415900)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTREDRAWTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1415E40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_CHECKREDRAWSLOT_OFFSET UNITYSDK_OFFSET(0x1415E50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_BATTLE_SKILLCARDREDRAWED_OFFSET UNITYSDK_OFFSET(0x1415FA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTREDRAWSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1416150)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_MAXREDRAWSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1416160)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1416190)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_PARSESKILLTYPECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x14163C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_MATCHTARGETSIDE_OFFSET UNITYSDK_OFFSET(0x1415BE0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ExSkillCardRedrawGaugeEffect_TypeDefinitionIndex = 14740;

	class ExSkillCardRedrawGaugeEffect : public Il2CppObject
	{
	public:
		::System::Action* OnExpired; // 0xD0
		Il2CppObject* OnGaugeChanged; // 0xD8
		::MX::GameData::DAO::Battle::ExSkillCardRedrawGaugeEffectDAO* EffectData; // 0xE0
		::System::Int64 _CurrentGaugeValue_k__BackingField; // 0xE8
		::System::Int64 _CurrentRedrawStackCount_k__BackingField; // 0xF0
		::System::Int64 _CurrentRedrawTriggerCount_k__BackingField; // 0xF8
		::System::Int64 currentTryCount; // 0x100
		Il2CppObject* skillTypeConstraints; // 0x108
		::MX::Logic::Battles::Battle* battle; // 0x110
		::MX::Logic::Data::LogicEffectValue* LogicEffectValueOnStackCountIncresed; // 0x118

		::System::Void .ctor(::MX::Logic::Data::ExSkillCardRedrawGaugeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ExSkillCardRedrawGaugeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_CurrentRedrawStackCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTREDRAWSTACKCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxGaugeValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_MAXGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Void ProcessAddGauge(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_PROCESSADDGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckPeriod()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_COCHECKPERIOD_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentRedrawTriggerCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTREDRAWTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_RedrawEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_REDRAWENABLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentGaugeValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTGAUGEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentGaugeValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_CURRENTGAUGEVALUE_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySkillTriggered(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySkillTriggeredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySkillTriggeredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_BATTLE_BATTLEENTITYSKILLTRIGGERED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentRedrawTriggerCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTREDRAWTRIGGERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckRedrawSlot(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_CHECKREDRAWSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_SkillCardRedrawed(::System::Object* arg, ::MX::Logic::BattleEntities::SkillCardRedrawedEvent* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::SkillCardRedrawedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_BATTLE_SKILLCARDREDRAWED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CurrentRedrawStackCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_SET_CURRENTREDRAWSTACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxRedrawStackCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_GET_MAXREDRAWSTACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseSkillTypeConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_PARSESKILLTYPECONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Boolean MatchTargetSide(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXSKILLCARDREDRAWGAUGEEFFECT_MATCHTARGETSIDE_OFFSET))(arg, nullptr);
		}

	};
}

