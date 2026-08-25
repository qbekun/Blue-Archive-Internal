#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::Data { class AuraEntityValue; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Battles { class AuraEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class CircleAuraEntityValue; }
namespace MX::Logic::Data { class ObbAuraEntityValue; }
namespace MX::Logic::Data { class CircleProcedureAuraEntityValue; }
namespace MX::Logic::Data { class ObbProcedureAuraEntityValue; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class CharacterInteractWithTSSEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class SkillAbilityValue; }
namespace MX::Logic::Skills { class AuraProcedureTriggerType; }
namespace MX::Logic::Skills { class AuraProcedureDAO; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class HitCheckCoupling; }
namespace MX::Logic::BattleEntities { class Aura; }

#define MX_LOGIC_BATTLEENTITIES_AURA_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1193510)
#define MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11935B0)
#define MX_LOGIC_BATTLEENTITIES_AURA_ONAREAEXPIRED_OFFSET UNITYSDK_OFFSET(0x1193650)
#define MX_LOGIC_BATTLEENTITIES_AURA_ADD_SPAWNTARGETDIED_OFFSET UNITYSDK_OFFSET(0x1193670)
#define MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_SPAWNTARGETDIED_OFFSET UNITYSDK_OFFSET(0x1193710)
#define MX_LOGIC_BATTLEENTITIES_AURA_ONSPAWNTARGETDIED_OFFSET UNITYSDK_OFFSET(0x11937B0)
#define MX_LOGIC_BATTLEENTITIES_AURA_ADD_CANCELLED_OFFSET UNITYSDK_OFFSET(0x11937D0)
#define MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_CANCELLED_OFFSET UNITYSDK_OFFSET(0x1193870)
#define MX_LOGIC_BATTLEENTITIES_AURA_ONAURACANCELLED_OFFSET UNITYSDK_OFFSET(0x1193910)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1193930)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_INVOKER_OFFSET UNITYSDK_OFFSET(0x1193940)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x1193950)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1193A00)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1193A10)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x1193A30)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1193A50)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1193A70)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_BODY_OFFSET UNITYSDK_OFFSET(0x1193A80)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_BODYEXITCHECK_OFFSET UNITYSDK_OFFSET(0x1193A90)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_BODYEXITCHECK_OFFSET UNITYSDK_OFFSET(0x1193AA0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1193AB0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ISSPAWNTARGETDEAD_OFFSET UNITYSDK_OFFSET(0x1193B00)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_ISSPAWNTARGETDEAD_OFFSET UNITYSDK_OFFSET(0x1193B10)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1193B20)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x1193B30)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1193AE0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1193B40)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_PROCEDURELIST_OFFSET UNITYSDK_OFFSET(0x1193B50)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_REMOVEENTITYIFATTACHSPAWNTARGETDIE_OFFSET UNITYSDK_OFFSET(0x1193B60)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x1193B80)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET UNITYSDK_OFFSET(0x1193BA0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_ATTACHSPAWNTARGET_OFFSET UNITYSDK_OFFSET(0x1193BC0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_POSITIONSOURCE_OFFSET UNITYSDK_OFFSET(0x1193BE0)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_POSITIONSOURCE_OFFSET UNITYSDK_OFFSET(0x1193BF0)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_TARGETSOURCE_OFFSET UNITYSDK_OFFSET(0x1193C00)
#define MX_LOGIC_BATTLEENTITIES_AURA_SET_TARGETSOURCE_OFFSET UNITYSDK_OFFSET(0x1193C10)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x1193C30)
#define MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1193C40)
#define MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1193FE0)
#define MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1194330)
#define MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1194760)
#define MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1194AC0)
#define MX_LOGIC_BATTLEENTITIES_AURA_AURA_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1194F10)
#define MX_LOGIC_BATTLEENTITIES_AURA_CHARACTER_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x11950D0)
#define MX_LOGIC_BATTLEENTITIES_AURA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1195220)
#define MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET UNITYSDK_OFFSET(0x1195390)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x11954F0)
#define MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x1195500)
#define MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_AURASPAWNED_OFFSET UNITYSDK_OFFSET(0x1195680)
#define MX_LOGIC_BATTLEENTITIES_AURA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1195AF0)
#define MX_LOGIC_BATTLEENTITIES_AURA_INTERRUPTAURA_OFFSET UNITYSDK_OFFSET(0x11950E0)
#define MX_LOGIC_BATTLEENTITIES_AURA_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11964E0)
#define MX_LOGIC_BATTLEENTITIES_AURA_SAMELOGICEFFECTFROMAURAEXISTS_OFFSET UNITYSDK_OFFSET(0x1197ED0)
#define MX_LOGIC_BATTLEENTITIES_AURA_APPLYABILITY_OFFSET UNITYSDK_OFFSET(0x11975D0)
#define MX_LOGIC_BATTLEENTITIES_AURA_FINDCOLLIDETARGETS_OFFSET UNITYSDK_OFFSET(0x1197340)
#define MX_LOGIC_BATTLEENTITIES_AURA_TRIGGERPROCEDURE_OFFSET UNITYSDK_OFFSET(0x1197100)
#define MX_LOGIC_BATTLEENTITIES_AURA_CHECKPROCEDURECONDITIONS_OFFSET UNITYSDK_OFFSET(0x1197FA0)
#define MX_LOGIC_BATTLEENTITIES_AURA_EXECUTEPROCEDURECOMMANDS_OFFSET UNITYSDK_OFFSET(0x1198160)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x1198380)
#define MX_LOGIC_BATTLEENTITIES_AURA_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x11982E0)
#define MX_LOGIC_BATTLEENTITIES_AURA_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x1198390)
#define MX_LOGIC_BATTLEENTITIES_AURA_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11983D0)
#define MX_LOGIC_BATTLEENTITIES_AURA_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11984C0)
#define MX_LOGIC_BATTLEENTITIES_AURA_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x1198850)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1198A60)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x1198690)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1198740)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x1198A90)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1198820)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETHITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x1198AA0)
#define MX_LOGIC_BATTLEENTITIES_AURA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1198C70)
#define MX_LOGIC_BATTLEENTITIES_AURA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1198DF0)
#define MX_LOGIC_BATTLEENTITIES_AURA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1198E40)
#define MX_LOGIC_BATTLEENTITIES_AURA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1198F20)
#define MX_LOGIC_BATTLEENTITIES_AURA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1198F50)
#define MX_LOGIC_BATTLEENTITIES_AURA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1198CF0)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1198F90)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__78_1_OFFSET UNITYSDK_OFFSET(0x1198FC0)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__79_0_OFFSET UNITYSDK_OFFSET(0x1198FF0)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__79_1_OFFSET UNITYSDK_OFFSET(0x1199020)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__80_0_OFFSET UNITYSDK_OFFSET(0x1199050)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__80_1_OFFSET UNITYSDK_OFFSET(0x1199080)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__81_0_OFFSET UNITYSDK_OFFSET(0x11990B0)
#define MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__81_1_OFFSET UNITYSDK_OFFSET(0x11990E0)
#define MX_LOGIC_BATTLEENTITIES_AURA__FINDCOLLIDETARGETS_B__94_0_OFFSET UNITYSDK_OFFSET(0x1199110)
#define MX_LOGIC_BATTLEENTITIES_AURA__FINDCOLLIDETARGETS_G__HITCHECK|94_1_OFFSET UNITYSDK_OFFSET(0x1199120)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int Aura_TypeDefinitionIndex = 13300;

	class Aura : public Il2CppObject
	{
	public:
		Il2CppObject* Expired; // 0x28
		Il2CppObject* SpawnTargetDied; // 0x30
		Il2CppObject* Cancelled; // 0x38
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x40
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x48
		::MX::Core::Physics2D::Bodies::Body2D* _Body_k__BackingField; // 0x50
		::MX::Core::Physics2D::Bodies::Body2D* _BodyExitCheck_k__BackingField; // 0x58
		::System::Boolean _IsSpawnTargetDead_k__BackingField; // 0x60
		::System::Int32 _Elapsed_k__BackingField; // 0x64
		::MX::Logic::Data::AuraEntityValue* _EntityValue_k__BackingField; // 0x68
		Il2CppObject* _ProcedureList_k__BackingField; // 0x70
		Il2CppObject* procedureTriggers; // 0x78
		::MX::Logic::BattleEntities::BattleEntity* _PositionSource_k__BackingField; // 0x80
		::MX::Logic::BattleEntities::BattleEntity* _TargetSource_k__BackingField; // 0x88
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0x90
		::MX::Logic::Battles::Battle* battle; // 0x98
		::UnityEngine::Vector2* initialPosition; // 0xA0
		::UnityEngine::Vector2* targetPosition; // 0xA8
		Il2CppObject* HitBattleEntityList; // 0xB0
		::MX::Logic::Skills::IEntitySpawnable* spawnable; // 0xB8
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0xC0
		::MX::Logic::BattleEntities::BattleEntity* targetCache; // 0xC8
		Il2CppObject* couplingTable; // 0xD0

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAreaExpired(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ONAREAEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void add_SpawnTargetDied(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ADD_SPAWNTARGETDIED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SpawnTargetDied(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_SPAWNTARGETDIED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSpawnTargetDied(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ONSPAWNTARGETDIED_OFFSET))(arg, nullptr);
		}

		::System::Void add_Cancelled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ADD_CANCELLED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Cancelled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_REMOVE_CANCELLED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAuraCancelled(::MX::Logic::Battles::AuraEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_ONAURACANCELLED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::Void set_Invoker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_INVOKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_INVOKERID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_POSITION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_FORWARD_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_Body()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void set_Body(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_BODY_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_BodyExitCheck()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_BODYEXITCHECK_OFFSET))(nullptr);
		}

		::System::Void set_BodyExitCheck(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_BODYEXITCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSpawnTargetDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ISSPAWNTARGETDEAD_OFFSET))(nullptr);
		}

		::System::Void set_IsSpawnTargetDead(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_ISSPAWNTARGETDEAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_DURATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AuraEntityValue* get_EntityValue()
		{
			return ((::MX::Logic::Data::AuraEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ENTITYVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProcedureList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_PROCEDURELIST_OFFSET))(nullptr);
		}

		::System::Boolean get_RemoveEntityIfAttachSpawnTargetDie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_REMOVEENTITYIFATTACHSPAWNTARGETDIE_OFFSET))(nullptr);
		}

		::System::Boolean get_RotateEntityDirectionEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyOffsetRotateEntityDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean get_AttachSpawnTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_ATTACHSPAWNTARGET_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_PositionSource()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_POSITIONSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_PositionSource(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_POSITIONSOURCE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetSource()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_TARGETSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_TargetSource(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SET_TARGETSOURCE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::MX::Logic::Data::AuraEntityValue* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::MX::Logic::BattleEntities::BattleEntity* arg11)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::AuraEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::MX::Logic::Data::CircleAuraEntityValue* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::UnityEngine::Vector2* arg11, ::MX::Logic::BattleEntities::BattleEntity* arg12)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::CircleAuraEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::MX::Logic::Data::ObbAuraEntityValue* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::UnityEngine::Vector2* arg11, ::MX::Logic::BattleEntities::BattleEntity* arg12)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::ObbAuraEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::MX::Logic::Data::CircleProcedureAuraEntityValue* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::UnityEngine::Vector2* arg11, ::MX::Logic::BattleEntities::BattleEntity* arg12)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::CircleProcedureAuraEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::MX::Logic::Data::ObbProcedureAuraEntityValue* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::UnityEngine::Vector2* arg11, ::MX::Logic::BattleEntities::BattleEntity* arg12)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::ObbProcedureAuraEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Void Aura_Expired(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_AURA_EXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_ActionInterrupted(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_CHARACTER_ACTIONINTERRUPTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Battle_CharacterInteractWithTSS(::System::Object* arg, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterInteractWithTSSEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_CHARACTERINTERACTWITHTSS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETBODY2D_OFFSET))(nullptr);
		}

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_AuraSpawned(::System::Object* arg, ::MX::Logic::Battles::AuraEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::AuraEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_BATTLE_AURASPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void InterruptAura()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_INTERRUPTAURA_OFFSET))(nullptr);
		}

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_PROCESSHIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SameLogicEffectFromAuraExists(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::Data::LogicEffectValue* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::Data::LogicEffectValue*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_SAMELOGICEFFECTFROMAURAEXISTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyAbility(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Data::SkillAbilityValue* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillAbilityValue*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_APPLYABILITY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* FindCollideTargets(::MX::Logic::Battles::Battle* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_FINDCOLLIDETARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerProcedure(::MX::Logic::Skills::AuraProcedureTriggerType* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::AuraProcedureTriggerType*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_TRIGGERPROCEDURE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckProcedureConditions(::MX::Logic::Skills::AuraProcedureDAO* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureDAO*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_CHECKPROCEDURECONDITIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ExecuteProcedureCommands(::MX::Logic::Skills::AuraProcedureDAO* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::AuraProcedureDAO*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_EXECUTEPROCEDURECOMMANDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HitCheckCoupling* GetHitCheckCoupling(::System::Int32 arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETHITCHECKCOUPLING_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::Aura* arg, ::MX::Logic::BattleEntities::Aura* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Aura*, ::MX::Logic::BattleEntities::Aura*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::Aura* arg, ::MX::Logic::BattleEntities::Aura* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Aura*, ::MX::Logic::BattleEntities::Aura*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::Aura* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::Aura*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__78_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__78_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__78_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__78_1_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__79_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__79_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__79_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__79_1_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__80_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__80_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__80_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__80_1_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__81_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__81_0_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__81_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__.CTOR_B__81_1_OFFSET))(nullptr);
		}

		::System::Boolean _FindCollideTargets_b__94_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__FINDCOLLIDETARGETS_B__94_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindCollideTargets_g__HitCheck|94_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_AURA__FINDCOLLIDETARGETS_G__HITCHECK|94_1_OFFSET))(arg, nullptr);
		}

	};
}

