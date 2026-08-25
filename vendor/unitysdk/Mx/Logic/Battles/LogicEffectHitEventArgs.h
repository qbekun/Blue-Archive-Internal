#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Entity; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x1271E60)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_EFFECT_OFFSET UNITYSDK_OFFSET(0x1271E70)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TYPEOFLOGICEFFECTHASH_OFFSET UNITYSDK_OFFSET(0x1271E80)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_TYPEOFLOGICEFFECTHASH_OFFSET UNITYSDK_OFFSET(0x1271E90)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1271EA0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1271EB0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1271EC0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x1271ED0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1271EE0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1271EF0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1271F00)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1271F10)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271F20)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1271F30)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_OBSTACLEOWNERID_OFFSET UNITYSDK_OFFSET(0x1271F40)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_OBSTACLEOWNERID_OFFSET UNITYSDK_OFFSET(0x1271F50)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1271F60)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1271F70)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1271F80)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_LOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1271F90)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_COMMONVISUALIDHASH_OFFSET UNITYSDK_OFFSET(0x1271FA0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1271FB0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1271FC0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x1271FD0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x1271FE0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x1271FF0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETPOSITION_OFFSET UNITYSDK_OFFSET(0x1272000)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1272010)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1272020)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1272030)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETENTITY_OFFSET UNITYSDK_OFFSET(0x1272040)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x1272050)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_DOTINDEX_OFFSET UNITYSDK_OFFSET(0x1272060)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1272070)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x1272080)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1272090)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12720A0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1272380)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12725B0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x12725F0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x12723B0)
#define MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1272670)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int LogicEffectHitEventArgs_TypeDefinitionIndex = 14037;

	class LogicEffectHitEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::LogicEffect* _Effect_k__BackingField; // 0x10
		::System::UInt32 _TypeOfLogicEffectHash_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::FlatData::LogicEffectCategory* _Category_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x2C
		::MX::Logic::BattleEntities::BehaviorType* _AttackerBehavior_k__BackingField; // 0x30
		::MX::Logic::Actions::ActionState* _AttackerActionState_k__BackingField; // 0x34
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::EntityId* _ObstacleOwnerId_k__BackingField; // 0x3C
		::System::String* _SkillEntityName_k__BackingField; // 0x40
		::System::String* _LogicEffectGroupId_k__BackingField; // 0x48
		::System::UInt32 _CommonVisualIdHash_k__BackingField; // 0x50
		::System::Int32 _DurationFrame_k__BackingField; // 0x54
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x58
		::UnityEngine::Vector2* _BulletPosition_k__BackingField; // 0x60
		::UnityEngine::Vector2* _BulletDirection_k__BackingField; // 0x68
		::MX::Logic::BattleEntities::Entity* _BulletEntity_k__BackingField; // 0x70
		::System::Int32 _DotIndex_k__BackingField; // 0x78
		::System::String* _TemplateId_k__BackingField; // 0x80
		::System::Boolean _IsHit_k__BackingField; // 0x88
		::MX::Logic::Skills::SkillType* _SkillType_k__BackingField; // 0x8C

		::MX::Logic::Skills::LogicEffects::LogicEffect* get_Effect()
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_EFFECT_OFFSET))(nullptr);
		}

		::System::Void set_Effect(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_EFFECT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_TypeOfLogicEffectHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TYPEOFLOGICEFFECTHASH_OFFSET))(nullptr);
		}

		::System::Void set_TypeOfLogicEffectHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_TYPEOFLOGICEFFECTHASH_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::FlatData::LogicEffectCategory* get_Category()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_CATEGORY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::System::Void set_AttackerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_AttackerBehavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_AttackerBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Actions::ActionState* get_AttackerActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ATTACKERACTIONSTATE_OFFSET))(nullptr);
		}

		::System::Void set_AttackerActionState(::MX::Logic::Actions::ActionState* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_ATTACKERACTIONSTATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::System::Void set_TargetId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_TARGETID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ObstacleOwnerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_OBSTACLEOWNERID_OFFSET))(nullptr);
		}

		::System::Void set_ObstacleOwnerId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_OBSTACLEOWNERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void set_SkillEntityName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_SKILLENTITYNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_LogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_LOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectGroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_LOGICEFFECTGROUPID_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_CommonVisualIdHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_COMMONVISUALIDHASH_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void set_DurationFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_DURATIONFRAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_BulletPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_BulletDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_BulletDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETDIRECTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::Entity* get_BulletEntity()
		{
			return ((::MX::Logic::BattleEntities::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_BULLETENTITY_OFFSET))(nullptr);
		}

		::System::Void set_BulletEntity(::MX::Logic::BattleEntities::Entity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_BULLETENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_DOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_DotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_SET_DOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_TemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_ISHIT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_SkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GET_SKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::System::Boolean arg2, ::MX::Logic::Skills::SkillType* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::System::Boolean, ::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Battles::LogicEffectHitEventArgs* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Battles::LogicEffectHitEventArgs* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::LogicEffectHitEventArgs* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_LOGICEFFECTHITEVENTARGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

