#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class HealByHitTriggerType; }
namespace MX::Logic::Data { class HealByHitRemoveCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Data { class ShieldHealEffectValue; }
namespace MX::Logic::Battles { class CharacterShieldHealEventArgs; }
namespace MX::Logic::Data { class ShieldHealByHitEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1420690)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_MAKESHIELDHEALEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14206A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x14207E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_LOGICEFFECTPROCESSOR_SHIELDHEALED_OFFSET UNITYSDK_OFFSET(0x1420AD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_TRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x1420D60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_ADDTRIGGERVALUERATE_OFFSET UNITYSDK_OFFSET(0x1420D70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1420D80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1420D90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x1420A60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x1420BF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x1421060)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_ISREMOVECONDITIONMET_OFFSET UNITYSDK_OFFSET(0x1420EA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1421070)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x1421080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x1421090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x14211B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x14211C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x14211D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x14211E0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ShieldHealByHitEffect_TypeDefinitionIndex = 14795;

	class ShieldHealByHitEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0xD0
		::FlatData::StatType* _BonusSource_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0xE0
		::System::Int32 _DurationFrame_k__BackingField; // 0xE8
		::System::Boolean _IsDispellable_k__BackingField; // 0xEC
		::MX::Logic::Data::HealByHitTriggerType* _TriggerType_k__BackingField; // 0xF0
		::MX::Logic::Data::HealByHitRemoveCondition* _RemoveCondition_k__BackingField; // 0xF4
		::System::Int32 _RemoveConditionArgument_k__BackingField; // 0xF8
		Il2CppObject* _TriggerArgument_k__BackingField; // 0x100
		::System::Int64 _AddTriggerValueRate_k__BackingField; // 0x108
		::System::String* _ShieldId_k__BackingField; // 0x110
		::MX::Logic::Battles::Battle* battle; // 0x118
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* owner; // 0x120
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* logicEffectProcessor; // 0x128
		Il2CppObject* ability; // 0x130
		::MX::Logic::Data::ShieldHealEffectValue* shieldHealEffectValue; // 0x138
		::System::Int32 CurrentCount; // 0x140

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ShieldHealEffectValue* MakeShieldHealEffectValue()
		{
			return ((::MX::Logic::Data::ShieldHealEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_MAKESHIELDHEALEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_ACTIVATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LogicEffectProcessor_ShieldHealed(::System::Object* arg, ::MX::Logic::Battles::CharacterShieldHealEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterShieldHealEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_LOGICEFFECTPROCESSOR_SHIELDHEALED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_TriggerArgument()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_TRIGGERARGUMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_AddTriggerValueRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_ADDTRIGGERVALUERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ShieldHealByHitEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ShieldHealByHitEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Void Apply(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::MX::Logic::BattleEntities::Entity* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::Entity*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_APPLY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Data::HealByHitTriggerType* get_TriggerType()
		{
			return ((::MX::Logic::Data::HealByHitTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsRemoveConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_ISREMOVECONDITIONMET_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_SHIELDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealByHitRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::HealByHitRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDHEALBYHITEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

	};
}

