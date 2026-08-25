#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class DotAbilityValue; }
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ConfrontationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace MX::Logic::Skills::LogicEffects { class MaxHPCapGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedMultiplierbyDamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class NotMoveEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeSkillCardToCopiedCardEffect; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Skills::LogicEffects { class TargetSlotExSkillCostOverrideEffect; }
namespace MX::Logic::Skills::LogicEffects { class OverrideBulletArmorDamageFactorEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldEffect; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11D3C60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x11D3CC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11D3D30)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x11D3D90)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11D3DB0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTHITSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11D3DC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x11D3DD0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x11D3DE0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x11D3DF0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x11D3E00)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x11D3E10)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x11D3E20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DAMAGEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x11D3E30)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ISADDITIONALTICK_OFFSET UNITYSDK_OFFSET(0x11D3E40)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ADDITIONALTICKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x11D3E50)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x11D3E60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x11D3E70)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x11D3E80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x11D3E90)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTTODISPEL_OFFSET UNITYSDK_OFFSET(0x11D3EA0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x11D3EB0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DOTINVOKERENTITYID_OFFSET UNITYSDK_OFFSET(0x11D3EC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_DOTINVOKERENTITYID_OFFSET UNITYSDK_OFFSET(0x11D3ED0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x11D3EE0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_EXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x11D3EF0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIRATIONCHECKOWNER_OFFSET UNITYSDK_OFFSET(0x11D3F10)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_EXPIRATIONCHECKOWNER_OFFSET UNITYSDK_OFFSET(0x11D3F20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x11D3F40)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x11D3F50)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D3F60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D4660)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D4A20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D4C60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5060)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D52A0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5500)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5750)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5980)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5B80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5D80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D5F80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D6170)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D63A0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D65B0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D66C0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D6920)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11D6B40)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11D42E0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_CALCPERIODMODIFIERRATE_OFFSET UNITYSDK_OFFSET(0x11D6D60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SETEXPIRATIONCHECK_OFFSET UNITYSDK_OFFSET(0x11D6DD0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_SETINTERVAL_OFFSET UNITYSDK_OFFSET(0x11D6E20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_ADDADDITIONALTICK_OFFSET UNITYSDK_OFFSET(0x11D6E80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11D6FC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_ISHITFRAME_OFFSET UNITYSDK_OFFSET(0x11D7320)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_APPLY_OFFSET UNITYSDK_OFFSET(0x11D73A0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_ONSTABILITYRATEAPPLIED_OFFSET UNITYSDK_OFFSET(0x11D7AA0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_HASTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11D7AB0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7B00)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7B60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7BC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7C20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7C80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7CE0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7D40)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7DA0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7E00)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7E60)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7EC0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7F20)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7F80)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D7FE0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D8040)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET UNITYSDK_OFFSET(0x11D80A0)
#define MX_LOGIC_BATTLEENTITIES_DOTABILITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11D8100)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DotAbility_TypeDefinitionIndex = 13377;

	class DotAbility : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* _LogicEffectHitSpecification_k__BackingField; // 0x18
		::System::Int64 _damageDistributeRate_k__BackingField; // 0x20
		::System::Int32 _StartDelay_k__BackingField; // 0x28
		::System::Int32 _Interval_k__BackingField; // 0x2C
		::System::Int32 _TotalCount_k__BackingField; // 0x30
		::System::Int32 _Channel_k__BackingField; // 0x34
		Il2CppObject* LogicEffectValues; // 0x38
		Il2CppObject* LogicEffectTemplateHashes; // 0x40
		Il2CppObject* _DamageModifiers_k__BackingField; // 0x48
		Il2CppObject* abilityModifiers; // 0x50
		Il2CppObject* AdditionalTicks; // 0x58
		::System::Boolean _IsAdditionalTick_k__BackingField; // 0x60
		::System::Int64 _AdditionalTickDamageRate_k__BackingField; // 0x68
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x70
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x74
		::System::Int32 _CurrentCount_k__BackingField; // 0x78
		::MX::Logic::Skills::LogicEffects::LogicEffect* _LogicEffectToDispel_k__BackingField; // 0x80
		::System::Boolean _IsDispellable_k__BackingField; // 0x88
		::MX::Logic::BattleEntities::EntityId* _DotInvokerEntityId_k__BackingField; // 0x8C
		Il2CppObject* _ExpirationCheck_k__BackingField; // 0x90
		::MX::Logic::BattleEntities::Entity* _ExpirationCheckOwner_k__BackingField; // 0x98
		::System::Int32 _StackSameEffectCount_k__BackingField; // 0xA0
		::System::Boolean _ExpireOldIfStackCountOver_k__BackingField; // 0xA4
		::System::Int64 ApplyPeriodRate; // 0xA8
		::System::Int64 PeriodMaxRate; // 0xB0
		::System::Int64 PeriodMinRate; // 0xB8
		::System::Boolean useFixedStabilityRate; // 0xC0
		::MX::Core::Math::BasisPoint* fixedStabilityRate; // 0xC8

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_TemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CATEGORY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* get_LogicEffectHitSpecification()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTHITSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Int64 get_damageDistributeRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DAMAGEDISTRIBUTERATE_OFFSET))(nullptr);
		}

		::System::Int32 get_StartDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_STARTDELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Interval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_INTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_Interval(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_INTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CHANNEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_DamageModifiers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DAMAGEMODIFIERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAdditionalTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ISADDITIONALTICK_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalTickDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ADDITIONALTICKDAMAGERATE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_CURRENTCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffect* get_LogicEffectToDispel()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_LOGICEFFECTTODISPEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_DotInvokerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_DOTINVOKERENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_DotInvokerEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_DOTINVOKERENTITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpirationCheck()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIRATIONCHECK_OFFSET))(nullptr);
		}

		::System::Void set_ExpirationCheck(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_EXPIRATIONCHECK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_ExpirationCheckOwner()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIRATIONCHECKOWNER_OFFSET))(nullptr);
		}

		::System::Void set_ExpirationCheckOwner(::MX::Logic::BattleEntities::Entity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SET_EXPIRATIONCHECKOWNER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DotAbilityValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Data::DotAbilityValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DummyEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DummyEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::NotMoveEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::NotMoveEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::DotAbility* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ShieldEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int64 CalcPeriodModifierRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_CALCPERIODMODIFIERRATE_OFFSET))(nullptr);
		}

		::System::Void SetExpirationCheck(Il2CppObject* arg, ::MX::Logic::BattleEntities::Entity* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SETEXPIRATIONCHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetInterval(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_SETINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddAdditionalTick(::System::Int32 arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_ADDADDITIONALTICK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_UPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsHitFrame(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_ISHITFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void OnStabilityRateApplied(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_ONSTABILITYRATEAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTemplateId(::MX::Core::Services::Hash64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_HASTEMPLATEID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::DummyEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::DummyEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::NotMoveEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::NotMoveEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect* arg, ::MX::Logic::BattleEntities::EntityId* arg2)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::DotAbility* ToDotAbility(::MX::Logic::Skills::LogicEffects::ShieldEffect* arg)
		{
			return ((::MX::Logic::BattleEntities::DotAbility*(*)(::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TODOTABILITY_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTABILITY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

