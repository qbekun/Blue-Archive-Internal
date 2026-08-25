#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class HealByHitEffectValue; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Data { class HealEffectValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace FlatData { class StatType; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1419BC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_MAKEHEALEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1419E80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x141A0C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x141A040)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_LOGICEFFECTPROCESSOR_HEALED_OFFSET UNITYSDK_OFFSET(0x141A0F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ADDHEALMODIFIER_OFFSET UNITYSDK_OFFSET(0x141A250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x141A360)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x141A380)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ISREMOVECONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1419D60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x141A3B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_HEALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x141A3D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141A3E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x141A480)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x141A080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_SET_HEALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x141A490)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x141A060)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x141A020)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x141A4B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141A540)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x141A560)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x141A0A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x141A390)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x141A570)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x141A6D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x141A940)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int HealByHitEffect_TypeDefinitionIndex = 14754;

	class HealByHitEffect : public Il2CppObject
	{
	public:
		::System::Boolean _ApplyHealRate_k__BackingField; // 0xD0
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0xD1
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0xD2
		Il2CppObject* _HealModifiers_k__BackingField; // 0xD8
		::MX::Logic::Data::HealByHitEffectValue* _value_k__BackingField; // 0xE0
		::MX::Logic::Battles::Battle* battle; // 0xE8
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* logicEffectProcessor; // 0xF0
		Il2CppObject* ability; // 0xF8
		::MX::Logic::Data::HealEffectValue* healEffectValue; // 0x100
		::System::Int32 CurrentCount; // 0x108

		::System::Void Apply(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::MX::Logic::BattleEntities::Entity* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_APPLY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Data::HealEffectValue* MakeHealEffectValue()
		{
			return ((::MX::Logic::Data::HealEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_MAKEHEALEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_Healed(::System::Object* arg, ::MX::Logic::Battles::LifeGainEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_LOGICEFFECTPROCESSOR_HEALED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHealModifier(::MX::Logic::Data::AbilityModifier* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::AbilityModifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ADDHEALMODIFIER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::HealByHitTriggerType* get_TriggerType()
		{
			return ((::MX::Logic::Data::HealByHitTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ISREMOVECONDITIONMET_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_HealModifiers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_HEALMODIFIERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::HealByHitEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::HealByHitEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_HealModifiers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_SET_HEALMODIFIERS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::HealByHitRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::HealByHitEffectValue* get_value()
		{
			return ((::MX::Logic::Data::HealByHitEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALBYHITEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

