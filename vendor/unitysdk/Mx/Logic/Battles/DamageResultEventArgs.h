#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Battles { class DamageAppliedResult; }
namespace FlatData { class FontType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills::LogicEffects { class DamageEffect; }
namespace MX::Logic::Battles { class DamageResult; }
namespace MX::Logic::Skills::LogicEffects { class DeadlyAttackEffect; }
namespace MX::Logic::Skills::LogicEffects { class TransferredDamageEffect; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x126FD20)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x126FD30)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x126FD40)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x126FD50)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_SUMMONERID_OFFSET UNITYSDK_OFFSET(0x126FD60)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126FD70)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126FD80)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_FIRSTATTACKERID_OFFSET UNITYSDK_OFFSET(0x126FD90)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_FIRSTATTACKERID_OFFSET UNITYSDK_OFFSET(0x126FDA0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISTRANSFERREDDAMAGE_OFFSET UNITYSDK_OFFSET(0x126FDB0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ISTRANSFERREDDAMAGE_OFFSET UNITYSDK_OFFSET(0x126FDC0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_LOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x126FDD0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_LOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x126FDE0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126FDF0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126FE00)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x126FE10)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x126FE20)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_STABILITY_OFFSET UNITYSDK_OFFSET(0x126FE30)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_STABILITY_OFFSET UNITYSDK_OFFSET(0x126FE40)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_RESULTDAMAGE_OFFSET UNITYSDK_OFFSET(0x126FE50)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_RESULTDAMAGE_OFFSET UNITYSDK_OFFSET(0x126FE60)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_DAMAGEAPPLIEDRESULT_OFFSET UNITYSDK_OFFSET(0x126FE70)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_DAMAGEAPPLIEDRESULT_OFFSET UNITYSDK_OFFSET(0x126FE90)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x126FEA0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ABSORBEDDAMAGE_OFFSET UNITYSDK_OFFSET(0x126FEB0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISDAMAGED_OFFSET UNITYSDK_OFFSET(0x126FEE0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_CRITICALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x126FF20)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_CRITICALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x126FF30)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISNORMALATTACK_OFFSET UNITYSDK_OFFSET(0x126FF40)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_HITRESULT_OFFSET UNITYSDK_OFFSET(0x126FF70)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x126FF80)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x126FFA0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x126FFB0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x126FFC0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x126FFD0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x126FFE0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x126FFF0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1270000)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1270010)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1270020)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1270030)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1270050)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1270060)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12702D0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1270530)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12706C0)
#define MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1270830)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DamageResultEventArgs_TypeDefinitionIndex = 14031;

	class DamageResultEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Attacker_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _SummonerId_k__BackingField; // 0x1C
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::EntityId* _FirstAttackerId_k__BackingField; // 0x24
		::System::Boolean _IsTransferredDamage_k__BackingField; // 0x28
		::FlatData::LogicEffectCategory* _LogicEffectCategory_k__BackingField; // 0x2C
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x30
		::System::Int64 _AttackPower_k__BackingField; // 0x38
		::System::Int32 _Stability_k__BackingField; // 0x40
		::System::Int64 _ResultDamage_k__BackingField; // 0x48
		::MX::Logic::Battles::DamageAppliedResult* _DamageAppliedResult_k__BackingField; // 0x50
		::System::Int64 _CriticalMultiplier_k__BackingField; // 0x68
		::FlatData::FontType* _HitResult_k__BackingField; // 0x70
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0x74
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x78
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x80
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x88
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x90
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x98

		::MX::Logic::BattleEntities::BattleEntity* get_Attacker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKER_OFFSET))(nullptr);
		}

		::System::Void set_Attacker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_AttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_SummonerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_SUMMONERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_FirstAttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_FIRSTATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_FirstAttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_FIRSTATTACKERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTransferredDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISTRANSFERREDDAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_IsTransferredDamage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ISTRANSFERREDDAMAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::LogicEffectCategory* get_LogicEffectCategory()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_LOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectCategory(::FlatData::LogicEffectCategory* arg)
		{
			((::System::Void(*)(::FlatData::LogicEffectCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_LOGICEFFECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttackPower()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ATTACKPOWER_OFFSET))(nullptr);
		}

		::System::Void set_AttackPower(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_ATTACKPOWER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Stability()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_STABILITY_OFFSET))(nullptr);
		}

		::System::Void set_Stability(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_STABILITY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ResultDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_RESULTDAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_ResultDamage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_RESULTDAMAGE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::DamageAppliedResult* get_DamageAppliedResult()
		{
			return ((::MX::Logic::Battles::DamageAppliedResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_DAMAGEAPPLIEDRESULT_OFFSET))(nullptr);
		}

		::System::Void set_DamageAppliedResult(::MX::Logic::Battles::DamageAppliedResult* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_DAMAGEAPPLIEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_AbsorbedDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ABSORBEDDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDamaged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISDAMAGED_OFFSET))(nullptr);
		}

		::System::Int64 get_CriticalMultiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_CRITICALMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_CriticalMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_CRITICALMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNormalAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISNORMALATTACK_OFFSET))(nullptr);
		}

		::FlatData::FontType* get_HitResult()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_HITRESULT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_ISCRITICAL_OFFSET))(nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_BulletPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_BulletDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETDIRECTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::System::Void set_BulletEntity(::MX::Logic::BattleEntities::Entity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_SET_BULLETENTITY_OFFSET))(arg, nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::MX::Logic::Battles::DamageResult* arg2, ::MX::Logic::Battles::DamageAppliedResult* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::MX::Logic::Battles::DamageResult*, ::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::MX::Logic::Battles::DamageAppliedResult* arg3, ::FlatData::FontType* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::MX::Logic::Battles::DamageAppliedResult*, ::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DeadlyAttackEffect* arg, ::MX::Logic::Battles::DamageAppliedResult* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DeadlyAttackEffect*, ::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect* arg, ::MX::Logic::Battles::DamageAppliedResult* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect*, ::MX::Logic::Battles::DamageAppliedResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::Logic::Battles::DamageAppliedResult* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3, ::FlatData::FontType* arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::Battles::DamageAppliedResult*, ::MX::Logic::BattleEntities::SkillSlot*, ::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DAMAGERESULTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

