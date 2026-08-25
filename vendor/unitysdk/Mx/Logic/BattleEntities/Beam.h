#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::Data { class BeamEntityValue; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class BeamPhase; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class BeamEventArgs; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Data { class ChainBeamValue; }
namespace MX::Logic::BattleEntities { class Beam; }
namespace MX::Logic::Data { class BeamSplashValue; }

#define MX_LOGIC_BATTLEENTITIES_BEAM_ADD_COLLIDED_OFFSET UNITYSDK_OFFSET(0x11995D0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_REMOVE_COLLIDED_OFFSET UNITYSDK_OFFSET(0x1199670)
#define MX_LOGIC_BATTLEENTITIES_BEAM_ONCOLLIDED_OFFSET UNITYSDK_OFFSET(0x1199710)
#define MX_LOGIC_BATTLEENTITIES_BEAM_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1199730)
#define MX_LOGIC_BATTLEENTITIES_BEAM_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11997D0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x1199870)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x1199890)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11998A0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11998B0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_BODY_OFFSET UNITYSDK_OFFSET(0x11998D0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_BODY_OFFSET UNITYSDK_OFFSET(0x11998E0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x11998F0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1199910)
#define MX_LOGIC_BATTLEENTITIES_BEAM_MOVE_OFFSET UNITYSDK_OFFSET(0x1199930)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1199950)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1199970)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1199A70)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1199A80)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_ELAPSEDINCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1199A90)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_ELAPSEDINCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1199AA0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_ENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1199AB0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_HITHEROES_OFFSET UNITYSDK_OFFSET(0x1199AC0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x1199AD0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETSORTRULE_OFFSET UNITYSDK_OFFSET(0x1199B10)
#define MX_LOGIC_BATTLEENTITIES_BEAM_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x1199B50)
#define MX_LOGIC_BATTLEENTITIES_BEAM_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x1199C00)
#define MX_LOGIC_BATTLEENTITIES_BEAM_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x1199CB0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x1199D90)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1199E70)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1199E80)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_STARTPOSITIONENTITY_OFFSET UNITYSDK_OFFSET(0x1199EB0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_STARTPOSITIONENTITY_OFFSET UNITYSDK_OFFSET(0x1199EC0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1199EE0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETPOSITIONENTITY_OFFSET UNITYSDK_OFFSET(0x119A2F0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_TARGETPOSITIONENTITY_OFFSET UNITYSDK_OFFSET(0x119A300)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x119A320)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x119A330)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_CHAINBEAMSPAWNER_OFFSET UNITYSDK_OFFSET(0x119A340)
#define MX_LOGIC_BATTLEENTITIES_BEAM_SET_CHAINBEAMSPAWNER_OFFSET UNITYSDK_OFFSET(0x119A350)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x119A370)
#define MX_LOGIC_BATTLEENTITIES_BEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x119A380)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x119AC20)
#define MX_LOGIC_BATTLEENTITIES_BEAM_CHARACTER_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x119AC30)
#define MX_LOGIC_BATTLEENTITIES_BEAM_ADDTOHITHERO_OFFSET UNITYSDK_OFFSET(0x119AE90)
#define MX_LOGIC_BATTLEENTITIES_BEAM_INITTRANSFORM_OFFSET UNITYSDK_OFFSET(0x119A940)
#define MX_LOGIC_BATTLEENTITIES_BEAM_UPDATE_OFFSET UNITYSDK_OFFSET(0x119AF80)
#define MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSCHAINBEAM_OFFSET UNITYSDK_OFFSET(0x119CDD0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_COPROCESSCHAINBEAM_OFFSET UNITYSDK_OFFSET(0x119D0F0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x119BD90)
#define MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSSPLASH_OFFSET UNITYSDK_OFFSET(0x119C2E0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_APPLYABILITY_OFFSET UNITYSDK_OFFSET(0x119D1A0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_FINDCOLLIDETARGET_OFFSET UNITYSDK_OFFSET(0x119D990)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETHITTARGETS_OFFSET UNITYSDK_OFFSET(0x119BAC0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x119A140)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x119A1F0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x119A2A0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x119A2B0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x119DA10)
#define MX_LOGIC_BATTLEENTITIES_BEAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x119DAB0)
#define MX_LOGIC_BATTLEENTITIES_BEAM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x119DB00)
#define MX_LOGIC_BATTLEENTITIES_BEAM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x119DD20)
#define MX_LOGIC_BATTLEENTITIES_BEAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x119DC20)
#define MX_LOGIC_BATTLEENTITIES_BEAM__ADDTOHITHERO_B__83_0_OFFSET UNITYSDK_OFFSET(0x119DD30)
#define MX_LOGIC_BATTLEENTITIES_BEAM__INITTRANSFORM_B__84_0_OFFSET UNITYSDK_OFFSET(0x119DD80)
#define MX_LOGIC_BATTLEENTITIES_BEAM__PROCESSCHAINBEAM_B__86_0_OFFSET UNITYSDK_OFFSET(0x119DDB0)
#define MX_LOGIC_BATTLEENTITIES_BEAM__PROCESSSPLASH_B__89_0_OFFSET UNITYSDK_OFFSET(0x119DDD0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int Beam_TypeDefinitionIndex = 13305;

	class Beam : public Il2CppObject
	{
	public:
		Il2CppObject* Collided; // 0x28
		Il2CppObject* Expired; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x38
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x40
		::MX::Core::Physics2D::Bodies::Body2D* _Body_k__BackingField; // 0x48
		::System::Int32 _Elapsed_k__BackingField; // 0x50
		::System::Int32 _ElapsedInCurrentPhase_k__BackingField; // 0x54
		::MX::Logic::Data::BeamEntityValue* _EntityValue_k__BackingField; // 0x58
		Il2CppObject* _HitHeroes_k__BackingField; // 0x60
		::MX::Logic::Skills::IEntitySpawnable* spawnable; // 0x68
		Il2CppObject* primaryTargets; // 0x70
		::System::Int64 ownerSkillRange; // 0x78
		::UnityEngine::Vector2* startPosition; // 0x80
		::MX::Logic::BattleEntities::BattleEntity* _StartPositionEntity_k__BackingField; // 0x88
		::UnityEngine::Vector2* targetPosition; // 0x90
		::MX::Logic::BattleEntities::BattleEntity* _TargetPositionEntity_k__BackingField; // 0x98
		::System::Single currentHeight; // 0xA0
		::MX::Logic::Data::BeamPhase* _CurrentPhase_k__BackingField; // 0xA4
		::MX::Logic::BattleEntities::BattleEntity* _ChainBeamSpawner_k__BackingField; // 0xA8
		::MX::Logic::Battles::Battle* battle; // 0xB0
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0xB8

		::System::Void add_Collided(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_ADD_COLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Collided(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_REMOVE_COLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollided(::MX::Logic::Battles::BeamEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BeamEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_ONCOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnExpired(::MX::Logic::Battles::BeamEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::BeamEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_Body()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void set_Body(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_BODY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ElapsedInCurrentPhase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_ELAPSEDINCURRENTPHASE_OFFSET))(nullptr);
		}

		::System::Void set_ElapsedInCurrentPhase(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_ELAPSEDINCURRENTPHASE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BeamEntityValue* get_EntityValue()
		{
			return ((::MX::Logic::Data::BeamEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_ENTITYVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitHeroes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_HITHEROES_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetCandidateRule* get_TargetCandidateRule()
		{
			return ((::MX::Logic::Skills::TargetCandidateRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETCANDIDATERULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_TargetSortRule()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETSORTRULE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_StartPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_STARTPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_StartPositionEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_STARTPOSITIONENTITY_OFFSET))(nullptr);
		}

		::System::Void set_StartPositionEntity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_STARTPOSITIONENTITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetPositionEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_TARGETPOSITIONENTITY_OFFSET))(nullptr);
		}

		::System::Void set_TargetPositionEntity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_TARGETPOSITIONENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BeamPhase* get_CurrentPhase()
		{
			return ((::MX::Logic::Data::BeamPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_CURRENTPHASE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPhase(::MX::Logic::Data::BeamPhase* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BeamPhase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_CURRENTPHASE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_ChainBeamSpawner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_CHAINBEAMSPAWNER_OFFSET))(nullptr);
		}

		::System::Void set_ChainBeamSpawner(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_SET_CHAINBEAMSPAWNER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Data::BeamEntityValue* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::MX::Logic::Skills::IEntitySpawnable* arg8, ::System::Int64 arg9)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Data::BeamEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETBODY2D_OFFSET))(nullptr);
		}

		::System::Void Character_ActionInterrupted(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_CHARACTER_ACTIONINTERRUPTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddToHitHero(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_ADDTOHITHERO_OFFSET))(arg, nullptr);
		}

		::System::Void InitTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_INITTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessChainBeam()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSCHAINBEAM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoProcessChainBeam(::MX::Logic::Data::ChainBeamValue* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Data::ChainBeamValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_COPROCESSCHAINBEAM_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHit(Il2CppObject* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ProcessSplash()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_PROCESSSPLASH_OFFSET))(nullptr);
		}

		::System::Void ApplyAbility(::MX::Logic::BattleEntities::BattleEntity* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_APPLYABILITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindCollideTarget(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_FINDCOLLIDETARGET_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetHitTargets(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETHITTARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::Beam* arg, ::MX::Logic::BattleEntities::Beam* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Beam*, ::MX::Logic::BattleEntities::Beam*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::Beam* arg, ::MX::Logic::BattleEntities::Beam* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Beam*, ::MX::Logic::BattleEntities::Beam*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::Beam* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Beam*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void _AddToHitHero_b__83_0(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM__ADDTOHITHERO_B__83_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 _InitTransform_b__84_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM__INITTRANSFORM_B__84_0_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessChainBeam_b__86_0(::MX::Logic::Data::ChainBeamValue* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::ChainBeamValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM__PROCESSCHAINBEAM_B__86_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSplash_b__89_0(::MX::Logic::Data::BeamSplashValue* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BeamSplashValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BEAM__PROCESSSPLASH_B__89_0_OFFSET))(arg, nullptr);
		}

	};
}

