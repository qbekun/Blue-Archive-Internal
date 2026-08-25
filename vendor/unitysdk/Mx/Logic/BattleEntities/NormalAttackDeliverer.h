#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace MX::Logic::Data { class NormalAttackBulletEntityValue; }
namespace MX::Logic::BattleEntities { class NormalAttackDelivererEventArgs; }
namespace MX::Logic::Skills { class SkillApplyType; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class NormalAttackDeliverer; }

#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_ADD_HIT_OFFSET UNITYSDK_OFFSET(0x11AE230)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_REMOVE_HIT_OFFSET UNITYSDK_OFFSET(0x11AE2D0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_ONHIT_OFFSET UNITYSDK_OFFSET(0x11AE370)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11AE390)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x11AE3A0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x11AE3B0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x11AE3C0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_INVOKER_OFFSET UNITYSDK_OFFSET(0x11AE3D0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x11AE3E0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x11AE3F0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_OBSTACLE_OFFSET UNITYSDK_OFFSET(0x11AE400)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_OBSTACLE_OFFSET UNITYSDK_OFFSET(0x11AE410)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_DELAYTOHITTARGET_OFFSET UNITYSDK_OFFSET(0x11AE420)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_DELAYTOHITTARGET_OFFSET UNITYSDK_OFFSET(0x11AE430)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_DELAYTOOBSTACLEBLOCKCHECK_OFFSET UNITYSDK_OFFSET(0x11AE440)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_DELAYTOOBSTACLEBLOCKCHECK_OFFSET UNITYSDK_OFFSET(0x11AE450)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_BULLETENTITYDATA_OFFSET UNITYSDK_OFFSET(0x11AE460)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x11AE470)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11AE490)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AE4A0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11AEAA0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_PROCESSABILITY_OFFSET UNITYSDK_OFFSET(0x11AEE60)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_EQUALS_OFFSET UNITYSDK_OFFSET(0x11AF2A0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11AF3D0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11AF420)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11AF4B0)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_EQUALS_OFFSET UNITYSDK_OFFSET(0x11AF360)
#define MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER__.CTOR_B__41_0_OFFSET UNITYSDK_OFFSET(0x11AF530)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int NormalAttackDeliverer_TypeDefinitionIndex = 13322;

	class NormalAttackDeliverer : public Il2CppObject
	{
	public:
		Il2CppObject* Hit; // 0x28
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x30
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x40
		::MX::Logic::BattleEntities::BattleEntity* _Target_k__BackingField; // 0x48
		::MX::Logic::BattleEntities::IObstacle* _Obstacle_k__BackingField; // 0x50
		::System::Int32 _DelayToHitTarget_k__BackingField; // 0x58
		::System::Int32 _DelayToObstacleBlockCheck_k__BackingField; // 0x5C
		::MX::Logic::Data::NormalAttackBulletEntityValue* _BulletEntityData_k__BackingField; // 0x60
		::System::String* _SkillEntityName_k__BackingField; // 0x68
		::System::Int64 elapsed; // 0x70
		::UnityEngine::Vector2* startPosition; // 0x78

		::System::Void add_Hit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_ADD_HIT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Hit(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_REMOVE_HIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnHit(::MX::Logic::BattleEntities::NormalAttackDelivererEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::NormalAttackDelivererEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_ONHIT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_HitPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_HITPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::Void set_Invoker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_INVOKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Target()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::IObstacle* get_Obstacle()
		{
			return ((::MX::Logic::BattleEntities::IObstacle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_OBSTACLE_OFFSET))(nullptr);
		}

		::System::Void set_Obstacle(::MX::Logic::BattleEntities::IObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_OBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DelayToHitTarget()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_DELAYTOHITTARGET_OFFSET))(nullptr);
		}

		::System::Void set_DelayToHitTarget(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_DELAYTOHITTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DelayToObstacleBlockCheck()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_DELAYTOOBSTACLEBLOCKCHECK_OFFSET))(nullptr);
		}

		::System::Void set_DelayToObstacleBlockCheck(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_SET_DELAYTOOBSTACLEBLOCKCHECK_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::NormalAttackBulletEntityValue* get_BulletEntityData()
		{
			return ((::MX::Logic::Data::NormalAttackBulletEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_BULLETENTITYDATA_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillApplyType* get_SkillApplyType()
		{
			return ((::MX::Logic::Skills::SkillApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLAPPLYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::SkillEntityValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAbility(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_PROCESSABILITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::NormalAttackDeliverer* arg, ::MX::Logic::BattleEntities::NormalAttackDeliverer* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::NormalAttackDeliverer* arg, ::MX::Logic::BattleEntities::NormalAttackDeliverer* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::NormalAttackDeliverer* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__41_0(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_NORMALATTACKDELIVERER__.CTOR_B__41_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

