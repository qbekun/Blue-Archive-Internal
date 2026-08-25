#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class ProjectileEntityValue; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
class MoveProjectileDelegate;
namespace MX::Logic::Battles { class ProjectileEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::BattleEntities { class Projectile; }

#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_ADD_COLLIDED_OFFSET UNITYSDK_OFFSET(0x11B1CB0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_REMOVE_COLLIDED_OFFSET UNITYSDK_OFFSET(0x11B1D50)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_ONCOLLIDED_OFFSET UNITYSDK_OFFSET(0x11B1DF0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11B1E10)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11B1EB0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x11B1F50)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x11B1F70)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x11B1F80)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11B2050)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x11B2060)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11AD350)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x11B2070)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_BODY_OFFSET UNITYSDK_OFFSET(0x11B2080)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x11B2090)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x11B20A0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x11A8C00)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x11B20B0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVE_OFFSET UNITYSDK_OFFSET(0x11A9370)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x11A96D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x11A8C20)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x11B20D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x11B2150)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0x11B2160)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HITOCCURREDFRAME_OFFSET UNITYSDK_OFFSET(0x11B2170)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_HITOCCURREDFRAME_OFFSET UNITYSDK_OFFSET(0x11B2180)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11B2190)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11B21A0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_FIREDELAY_OFFSET UNITYSDK_OFFSET(0x11B21B0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPLASHDELAY_OFFSET UNITYSDK_OFFSET(0x11B21D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ISSTICKTOTARGETAFTERHIT_OFFSET UNITYSDK_OFFSET(0x11B21F0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x11B2130)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_FRAMETOHIT_OFFSET UNITYSDK_OFFSET(0x11A9350)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x11B2210)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPLASHAREAENTITY_OFFSET UNITYSDK_OFFSET(0x11B2220)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HASSPLASH_OFFSET UNITYSDK_OFFSET(0x11B2240)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HITHEROES_OFFSET UNITYSDK_OFFSET(0x11B2280)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_TARGETCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x11B2290)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_TARGETSORTRULE_OFFSET UNITYSDK_OFFSET(0x11B22D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x11B2310)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11B2320)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11B23D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B2480)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B2560)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11B2640)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11AD390)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x11B2650)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVEBYSPEED_OFFSET UNITYSDK_OFFSET(0x11B2660)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVEBYFRAME_OFFSET UNITYSDK_OFFSET(0x11B2740)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDCOLLIDETARGET_OFFSET UNITYSDK_OFFSET(0x11B2850)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDNEWLYCOLLIDETARGETS_OFFSET UNITYSDK_OFFSET(0x11AD720)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_CREATEBODY2D_OFFSET UNITYSDK_OFFSET(0x11ADA40)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11B28C0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_PROCESSSPLASH_OFFSET UNITYSDK_OFFSET(0x11AB1A0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNSPLASHAREA_OFFSET UNITYSDK_OFFSET(0x11B2CC0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNSKILLENTITYSPAWNER_OFFSET UNITYSDK_OFFSET(0x11AA0F0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x11B2E00)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11B34B0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11B3660)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11B36B0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11B3570)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11B35F0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x11AC8D0)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11AC980)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x11ACA30)
#define MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x11ACA40)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int Projectile_TypeDefinitionIndex = 13327;

	class Projectile : public Il2CppObject
	{
	public:
		Il2CppObject* Collided; // 0x28
		Il2CppObject* Expired; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x38
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x40
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0x48
		::MX::Core::Physics2D::Bodies::Body2D* _Body_k__BackingField; // 0x50
		::UnityEngine::Vector2* _StartPos_k__BackingField; // 0x58
		::System::Boolean _IsHit_k__BackingField; // 0x60
		Il2CppObject* _HitOccurredFrame_k__BackingField; // 0x68
		::System::Int32 _Elapsed_k__BackingField; // 0x70
		::MX::Logic::Data::ProjectileEntityValue* _EntityValue_k__BackingField; // 0x78
		Il2CppObject* _HitHeroes_k__BackingField; // 0x80
		::MX::Logic::Skills::IEntitySpawnable* spawnable; // 0x88
		Il2CppObject* primaryTargets; // 0x90
		::System::Int64 ownerSkillRange; // 0x98
		::UnityEngine::Vector2* targetPosition; // 0xA0
		MoveProjectileDelegate* MoveProjectile; // 0xA8
		::System::Int32 moveByFrameElapsed; // 0xB0

		::System::Void add_Collided(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_ADD_COLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Collided(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_REMOVE_COLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollided(::MX::Logic::Battles::ProjectileEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_ONCOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnExpired(::MX::Logic::Battles::ProjectileEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::ProjectileEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_INVOKERID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_Body()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void set_Body(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_BODY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_StartPos()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_STARTPOS_OFFSET))(nullptr);
		}

		::System::Void set_StartPos(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_STARTPOS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Velocity()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ISHIT_OFFSET))(nullptr);
		}

		::System::Void set_IsHit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_ISHIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HitOccurredFrame()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HITOCCURREDFRAME_OFFSET))(nullptr);
		}

		::System::Void set_HitOccurredFrame(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_HITOCCURREDFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FireDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_FIREDELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_SplashDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPLASHDELAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStickToTargetAfterHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ISSTICKTOTARGETAFTERHIT_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Int64 get_FrameToHit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_FRAMETOHIT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ProjectileEntityValue* get_EntityValue()
		{
			return ((::MX::Logic::Data::ProjectileEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_ENTITYVALUE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AreaEntityValue* get_SplashAreaEntity()
		{
			return ((::MX::Logic::Data::AreaEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_SPLASHAREAENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSplash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HASSPLASH_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitHeroes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_HITHEROES_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_TargetCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_TARGETCANDIDATERULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_TargetSortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_TARGETSORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Data::ProjectileEntityValue* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::ProjectileEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void InitTransform(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_INITTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETBODY2D_OFFSET))(nullptr);
		}

		::System::Void MoveBySpeed(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVEBYSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByFrame(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_MOVEBYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindCollideTarget(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDCOLLIDETARGET_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindNewlyCollideTargets(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_FINDNEWLYCOLLIDETARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* CreateBody2D(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::ProjectileEntityValue* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::ProjectileEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_CREATEBODY2D_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_PROCESSHIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ProcessSplash(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_PROCESSSPLASH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SpawnSplashArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::AreaEntityValue* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::AreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNSPLASHAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean SpawnSkillEntitySpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntitySpawnerValue* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntitySpawnerValue*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNSKILLENTITYSPAWNER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SpawnAreaSpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::AreaSpawnerValue* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::AreaSpawnerValue*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_SPAWNAREASPAWNER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::Projectile* arg, ::MX::Logic::BattleEntities::Projectile* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Projectile*, ::MX::Logic::BattleEntities::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::Projectile* arg, ::MX::Logic::BattleEntities::Projectile* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Projectile*, ::MX::Logic::BattleEntities::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::Projectile* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_EQUALS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PROJECTILE_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

	};
}

