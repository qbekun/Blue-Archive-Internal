#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace FlatData { class FontType; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Battles { class AttackLogicEffectType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::Skills::LogicEffects { class DamageEffect; }
namespace MX::Logic::Skills::LogicEffects { class DeadlyAttackEffect; }
namespace MX::Logic::Skills::LogicEffects { class TransferredDamageEffect; }

#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1270A70)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKER_OFFSET UNITYSDK_OFFSET(0x1270A80)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1270A90)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1270AA0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1270AB0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1270AC0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1270AD0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1270AE0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_TARGETORIGIN_OFFSET UNITYSDK_OFFSET(0x1270AF0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_TARGETORIGIN_OFFSET UNITYSDK_OFFSET(0x1270B00)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1270B10)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1270B20)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1270B30)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1270B40)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1270B50)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1270B60)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x1270B70)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x1270B80)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1270B90)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1270BA0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1270BB0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_HITRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1270BC0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x1270BD0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET UNITYSDK_OFFSET(0x1270BE0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1270BF0)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_LOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1270C00)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1270C10)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1270C20)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x1270C30)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1270C40)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x1270C50)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1270C60)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1270F00)
#define MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1271110)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AttackEventArgs_TypeDefinitionIndex = 14032;

	class AttackEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Attacker_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BehaviorType* _AttackerBehavior_k__BackingField; // 0x18
		::MX::Logic::Actions::ActionState* _AttackerActionState_k__BackingField; // 0x1C
		::MX::Logic::BattleEntities::BattleEntity* _Target_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* _TargetOrigin_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::BattleEntity* _OriginalTargetWhenHitObstacle_k__BackingField; // 0x30
		::System::String* _SkillEntityName_k__BackingField; // 0x38
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x40
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x48
		::System::Int64 _Damage_k__BackingField; // 0x50
		::FlatData::FontType* _HitResultType_k__BackingField; // 0x58
		::System::Boolean _ForceFloaterHide_k__BackingField; // 0x5C
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x60
		::MX::Logic::Battles::AttackLogicEffectType* _LogicEffectType_k__BackingField; // 0x64
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x68
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x70
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x78
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x80
		::System::Int32 _Channel_k__BackingField; // 0x88

		::MX::Logic::BattleEntities::BattleEntity* get_Attacker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKER_OFFSET))(nullptr);
		}

		::System::Void set_Attacker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_AttackerBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKERBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_AttackerBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKERBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_AttackerActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ATTACKERACTIONSTATE_OFFSET))(nullptr);
		}

		::System::Void set_AttackerActionState(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ATTACKERACTIONSTATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Target()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetOrigin()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_TARGETORIGIN_OFFSET))(nullptr);
		}

		::System::Void set_TargetOrigin(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_TARGETORIGIN_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OriginalTargetWhenHitObstacle()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_OriginalTargetWhenHitObstacle(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_ORIGINALTARGETWHENHITOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void set_SkillEntityName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_SKILLENTITYNAME_OFFSET))(str, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Damage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_DAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_Damage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_DAMAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::FontType* get_HitResultType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_HITRESULTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_HitResultType(::FlatData::FontType* arg)
		{
			((::System::Void(*)(::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_HITRESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ForceFloaterHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_FORCEFLOATERHIDE_OFFSET))(nullptr);
		}

		::System::Void set_ForceFloaterHide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_SET_FORCEFLOATERHIDE_OFFSET))(arg, nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::AttackLogicEffectType* get_LogicEffectType()
		{
			return ((::MX::Logic::Battles::AttackLogicEffectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_LOGICEFFECTTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DamageEffect* arg, ::System::Int64 arg2, ::FlatData::FontType* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageEffect*, ::System::Int64, ::FlatData::FontType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::DeadlyAttackEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DeadlyAttackEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::TransferredDamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ATTACKEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

