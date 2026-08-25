#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }
namespace FlatData { class EndCondition; }
class IAmplifyDoTEffect;
namespace MX::Logic::Skills::LogicEffects { class DamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ConfrontationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class MaxHPCapGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldHealOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class HealedLimitEffect; }
namespace MX::Logic::Skills::LogicEffects { class DamagedMultiplierbyDamageOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffect; }
namespace MX::Logic::Skills::LogicEffects { class DummyEffect; }
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class NotMoveEffect; }
namespace MX::Logic::Skills::LogicEffects { class ChangeSkillCardToCopiedCardEffect; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills::LogicEffects { class TargetSlotExSkillCostOverrideEffect; }
namespace MX::Logic::Skills::LogicEffects { class OverrideBulletArmorDamageFactorEffect; }
namespace MX::Logic::Skills::LogicEffects { class ShieldEffect; }
namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Core::Services { class Hash64; }
namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_EXPIRABLEABILITIES_OFFSET UNITYSDK_OFFSET(0x115E510)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_ATTACHEDEFFECTAREAS_OFFSET UNITYSDK_OFFSET(0x115E520)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_ATTACHEDAMPLIFYDOTEFFECTS_OFFSET UNITYSDK_OFFSET(0x115E530)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x115E540)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115E660)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115EBD0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11514C0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_REGISTERAMPLIFYDOT_OFFSET UNITYSDK_OFFSET(0x115F100)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_UNREGISTERAMPLIFYDOT_OFFSET UNITYSDK_OFFSET(0x115F1A0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HANDLEDUPLICATESAMEEFFECT_OFFSET UNITYSDK_OFFSET(0x115EFA0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_TRYAMPLIFYDOT_OFFSET UNITYSDK_OFFSET(0x115EA40)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151910)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11519D0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115F290)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115F2D0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151A60)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115F310)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115F6C0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FA70)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FE10)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1151AF0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FE50)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FEA0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FF00)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FF40)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FF80)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x115FFE0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x1160020)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET UNITYSDK_OFFSET(0x11604C0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACHAREA_OFFSET UNITYSDK_OFFSET(0x1151B50)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_EXPIREDOTABILITY_OFFSET UNITYSDK_OFFSET(0x1160500)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1159F20)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x11501A0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1155650)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1158F80)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1159150)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET UNITYSDK_OFFSET(0x1159360)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECTBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1160990)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152880)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152160)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1152360)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1152A60)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1160AB0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1160B80)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MATCHESANY_OFFSET UNITYSDK_OFFSET(0x11605E0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_COUNTMATCHES_OFFSET UNITYSDK_OFFSET(0x11607C0)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MARKREMOVE_OFFSET UNITYSDK_OFFSET(0x1151E30)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MARKREMOVEBYLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1152D10)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR__HANDLEDUPLICATESAMEEFFECT_G__ISSAMEDOTABILITY|15_1_OFFSET UNITYSDK_OFFSET(0x1160C50)
#define MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR__ATTACH_G__EXTRAATTACHPREDICATE|33_0_OFFSET UNITYSDK_OFFSET(0x11603C0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int DotProcessor_TypeDefinitionIndex = 13161;

	class DotProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* _ExpirableAbilities_k__BackingField; // 0x10
		Il2CppObject* _attachedEffectAreas_k__BackingField; // 0x18
		Il2CppObject* _attachedAmplifyDoTEffects_k__BackingField; // 0x20

		Il2CppObject* get_ExpirableAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_EXPIRABLEABILITIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_attachedEffectAreas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_ATTACHEDEFFECTAREAS_OFFSET))(nullptr);
		}

		Il2CppObject* get_attachedAmplifyDoTEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GET_ATTACHEDAMPLIFYDOTEFFECTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, ::MX::Logic::Data::DamageOverTimeRemoveCondition* arg3, ::System::Int32 arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, ::MX::Logic::Data::DamageOverTimeRemoveCondition*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, ::FlatData::EndCondition* arg3, ::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, str, str2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::DotAbility* arg2, ::System::Boolean arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::DotAbility*, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void RegisterAmplifyDoT(IAmplifyDoTEffect* arg)
		{
			((::System::Void(*)(IAmplifyDoTEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_REGISTERAMPLIFYDOT_OFFSET))(arg, nullptr);
		}

		::System::Void UnRegisterAmplifyDoT(IAmplifyDoTEffect* arg)
		{
			((::System::Void(*)(IAmplifyDoTEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_UNREGISTERAMPLIFYDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleDuplicateSameEffect(Il2CppObject* arg, ::MX::Logic::BattleEntities::DotAbility* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HANDLEDUPLICATESAMEEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryAmplifyDoT(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_TRYAMPLIFYDOT_OFFSET))(arg, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ConfrontationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ShieldHealOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamagedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::HealedLimitEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DamagedMultiplierbyDamageOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ChangeStatLogicApplicationGaugeRecoverOverTimeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::System::Boolean arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, ::FlatData::EndCondition* arg3, ::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, str, str2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::NotMoveEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::NotMoveEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect* arg2, ::MX::Logic::BattleEntities::EntityId* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ChangeSkillCardToCopiedCardEffect*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::TargetSlotExSkillCostOverrideEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::OverrideBulletArmorDamageFactorEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::ShieldEffect* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::ShieldEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Attach(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::LogicEffects::DummyEffect* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::LogicEffects::DummyEffect*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AttachArea(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_ATTACHAREA_OFFSET))(arg, nullptr);
		}

		::System::Void ExpireDotAbility(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_EXPIREDOTABILITY_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveExpired(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_REMOVEEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasLogicEffectTemplateId(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECTTEMPLATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTemplateIdCount(::MX::Core::Services::Hash64* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTTEMPLATEIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectGroupIdCount(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTGROUPIDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindLogicEffect(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindLogicEffects(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindLogicEffectByGroupId(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_FINDLOGICEFFECTBYGROUPID_OFFSET))(str, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean HasLogicEffect(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectCategoryCount(::FlatData::LogicEffectCategory* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::FlatData::LogicEffectCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTCATEGORYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasLogicEffectType(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_HASLOGICEFFECTTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetLogicEffectTypeCount(::System::Type* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_GETLOGICEFFECTTYPECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MatchesAny(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MATCHESANY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CountMatches(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Int32(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_COUNTMATCHES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MarkRemove(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MARKREMOVE_OFFSET))(str, nullptr);
		}

		::System::Void MarkRemoveByLogicEffectGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR_MARKREMOVEBYLOGICEFFECTGROUPID_OFFSET))(str, nullptr);
		}

		::System::Boolean _HandleDuplicateSameEffect_g__IsSameDotAbility|15_1(::MX::Logic::BattleEntities::DotAbility* arg, ::MX::Logic::BattleEntities::DotAbility* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR__HANDLEDUPLICATESAMEEFFECT_G__ISSAMEDOTABILITY|15_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Attach_g__ExtraAttachPredicate|33_0(Il2CppObject* arg, <>c__DisplayClass33_0&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, <>c__DisplayClass33_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_DOTPROCESSOR__ATTACH_G__EXTRAATTACHPREDICATE|33_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

