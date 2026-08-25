#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles::EventSnapshot { class BattleEventSnapshot; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class Entity; }

#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBEAMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D5E6A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSOBSTACLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1D5E760)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVESUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x1D5ECF0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D5EE50)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_SKILLACTORS_OFFSET UNITYSDK_OFFSET(0x1D5F140)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASEACTOR_OFFSET UNITYSDK_OFFSET(0x1D5F150)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_BATTLEITEMS_OFFSET UNITYSDK_OFFSET(0x1D5F370)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ISACTORLOADED_OFFSET UNITYSDK_OFFSET(0x1D5F380)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBULLETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1D5F4D0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPROJECTILECOLLIDED_OFFSET UNITYSDK_OFFSET(0x1D5F910)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCHARACTERFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1D601A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSNORMALATTACKHIT_OFFSET UNITYSDK_OFFSET(0x1D605E0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCOVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1D60B20)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSHIELDHEAL_OFFSET UNITYSDK_OFFSET(0x1D60EF0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLCARDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D612C0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_ACTORS_OFFSET UNITYSDK_OFFSET(0x1D61670)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D61680)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_SUPPORTERS_OFFSET UNITYSDK_OFFSET(0x1D61B20)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDNORMALATTACKVISUAL_OFFSET UNITYSDK_OFFSET(0x1D61B30)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEBEAMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D61BF0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_OBSTACLES_OFFSET UNITYSDK_OFFSET(0x1D61DD0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSATTACKRESULT_OFFSET UNITYSDK_OFFSET(0x1D61DE0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSREMOVED_OFFSET UNITYSDK_OFFSET(0x1D62380)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D62750)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASEASYNCOPERATIONS_OFFSET UNITYSDK_OFFSET(0x1D634B0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSSKILLENTITYREMOVED_G__REMOVE|100_0_OFFSET UNITYSDK_OFFSET(0x1D640F0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSRESIST_OFFSET UNITYSDK_OFFSET(0x1D643B0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSNORMALATTACKSPAWNED_OFFSET UNITYSDK_OFFSET(0x1D647F0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDEFFECTPLAYERASYNC_OFFSET UNITYSDK_OFFSET(0x1D655A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1D65830)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSBATTLEENTITYSPAWNED_B__90_0_OFFSET UNITYSDK_OFFSET(0x1D65D90)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSLIFEGAIN_OFFSET UNITYSDK_OFFSET(0x1D65DA0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDACTOROROBSTACLEASYNC_OFFSET UNITYSDK_OFFSET(0x1D64CC0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1D66180)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x1D66920)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDACTORASYNC_OFFSET UNITYSDK_OFFSET(0x1D5FD60)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLENTITYWAITFORLOADINGQUEUE_OFFSET UNITYSDK_OFFSET(0x1D66AE0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBEAMSPAWNED_OFFSET UNITYSDK_OFFSET(0x1D66BC0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDBEAMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D66FC0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDTOSKILLENTITYWAITFORLOADINGQUEUETABLE_OFFSET UNITYSDK_OFFSET(0x1D64BF0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDSUPPORTASYNC_OFFSET UNITYSDK_OFFSET(0x1D5FF80)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPARTICLEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D67100)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1D674D0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_APPLYLOGICUPDATE_OFFSET UNITYSDK_OFFSET(0x1D678B0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D5DC90)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSGROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x1D69920)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1D6A470)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_APPLYCREATION_OFFSET UNITYSDK_OFFSET(0x1D6A760)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEBATTLEITEMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D6CC70)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDSKILLACTORVISUAL_OFFSET UNITYSDK_OFFSET(0x1D6CDE0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1D6CEA0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_CLEARSKILLENTITYWAITFORLOADINGQUEUETABLE_OFFSET UNITYSDK_OFFSET(0x1D6CEB0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSTIMELINEPLAYTRACKENABLED_OFFSET UNITYSDK_OFFSET(0x1D6C830)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x1D67E40)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FOREACHACTORASYNC_OFFSET UNITYSDK_OFFSET(0x1D6CF80)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDSUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x1D6D480)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPROJECTILESPAWNED_OFFSET UNITYSDK_OFFSET(0x1D6C0D0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1D6A820)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCHARACTERPHASECHANGED_OFFSET UNITYSDK_OFFSET(0x1D6A0A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D68200)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBATTLEITEMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D6D7A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDEFFECTAREA_OFFSET UNITYSDK_OFFSET(0x1D6D860)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSOBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1D6C4C0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSAREASPAWNED_OFFSET UNITYSDK_OFFSET(0x1D6B5E0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSDAMAGEUPDATEDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D68D60)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSOBSTACLEDESTROYED_B__69_0_OFFSET UNITYSDK_OFFSET(0x1D6D880)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDNORMALATTACKVISUAL_OFFSET UNITYSDK_OFFSET(0x1D6D900)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDBATTLEITEMVISUAL_OFFSET UNITYSDK_OFFSET(0x1D6DA30)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVECHARACTER_OFFSET UNITYSDK_OFFSET(0x1D5F210)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDOBSTACLEASYNC_OFFSET UNITYSDK_OFFSET(0x1D5EAD0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSADDED_OFFSET UNITYSDK_OFFSET(0x1D69CE0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVENORMALATTACKVISUAL_OFFSET UNITYSDK_OFFSET(0x1D64250)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FOREACHOBSTACLEASYNC_OFFSET UNITYSDK_OFFSET(0x1D6DC10)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSAURASPAWNED_OFFSET UNITYSDK_OFFSET(0x1D6BB60)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDALL_OFFSET UNITYSDK_OFFSET(0x1D6E120)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSIMMUNE_OFFSET UNITYSDK_OFFSET(0x1D685C0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1D667C0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_SETDESTORYEDBULLETDESTINATION_OFFSET UNITYSDK_OFFSET(0x1D6E190)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x1D679A0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_COREMOVE_OFFSET UNITYSDK_OFFSET(0x1D61D60)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSUPPORTACTORCHANGED_OFFSET UNITYSDK_OFFSET(0x1D68980)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_CHECKSKILLENTITYWAITFORLOADINGQUEUETABLEANDPROCESSACTION_OFFSET UNITYSDK_OFFSET(0x1D609C0)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSOBSTACLESTATECHANGED_B__70_0_OFFSET UNITYSDK_OFFSET(0x1D6E270)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEITEMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D68E10)
#define MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEFROMENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1D6E320)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int BattleActorComponent_TypeDefinitionIndex = 20299;

	class BattleActorComponent : public Il2CppObject
	{
	public:
		::MX::Visual::Battles::BattleSceneHandler* _Parent_k__BackingField; // 0x10
		Il2CppObject* skillActorTable; // 0x18
		Il2CppObject* supporterTable; // 0x20
		Il2CppObject* actorTable; // 0x28
		Il2CppObject* obstacleTable; // 0x30
		Il2CppObject* normalAttackBulletTable; // 0x38
		Il2CppObject* beamTable; // 0x40
		Il2CppObject* battleItemTable; // 0x48
		Il2CppObject* destroyedBulletDestinationTable; // 0x50
		Il2CppObject* skillEntityWaitForLoadingQueueTable; // 0x58
		Il2CppObject* loadedActorList; // 0x60
		Il2CppObject* loadedSupporterList; // 0x68
		Il2CppObject* loadedObstacleList; // 0x70
		Il2CppObject* loadedBattleItemList; // 0x78
		Il2CppObject* loadedSkillActorList; // 0x80
		::System::Boolean ActorsReleased; // 0x88

		BeamVisual* FindBeamVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (BeamVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBEAMVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessObstacleStateChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSOBSTACLESTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveSupportActor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVESUPPORTACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddCharacter(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDCHARACTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_SkillActors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_SKILLACTORS_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseActor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASEACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattleItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_BATTLEITEMS_OFFSET))(nullptr);
		}

		::System::Boolean IsActorLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ISACTORLOADED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* FindBulletDestination(::MX::Logic::BattleEntities::Entity* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::MX::Logic::BattleEntities::Entity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBULLETDESTINATION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessProjectileCollided(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPROJECTILECOLLIDED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCharacterFormConversion(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCHARACTERFORMCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessNormalAttackHit(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSNORMALATTACKHIT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCoverStateChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCOVERSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessShieldHeal(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSHIELDHEAL_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSkillCardSnapshot(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLCARDSNAPSHOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Actors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_ACTORS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Supporters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_SUPPORTERS_OFFSET))(nullptr);
		}

		NormalAttackVisual* FindNormalAttackVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (NormalAttackVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDNORMALATTACKVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveBeamVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEBEAMVISUAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Obstacles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_OBSTACLES_OFFSET))(nullptr);
		}

		::System::Void ProcessAttackResult(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSATTACKRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessStatusRemoved(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASE_OFFSET))(nullptr);
		}

		::System::Void ReleaseAsyncOperations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_RELEASEASYNCOPERATIONS_OFFSET))(nullptr);
		}

		::System::Void _ProcessSkillEntityRemoved_g__Remove|100_0(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSSKILLENTITYREMOVED_G__REMOVE|100_0_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessStatusResist(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSRESIST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessNormalAttackSpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSNORMALATTACKSPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void FindEffectPlayerAsync(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDEFFECTPLAYERASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessLogicEffectHit(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSLOGICEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessBattleEntitySpawned_b__90_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSBATTLEENTITYSPAWNED_B__90_0_OFFSET))(nullptr);
		}

		::System::Void ProcessLifeGain(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSLIFEGAIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindActorOrObstacleAsync(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDACTOROROBSTACLEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessBattleEntityRemoved(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEENTITYREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddSkillActor(::MX::Logic::BattleEntities::EntityId* arg, SkillActorVisual* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, SkillActorVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDSKILLACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FindActorAsync(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDACTORASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessSkillEntityWaitForLoadingQueue(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLENTITYWAITFORLOADINGQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBeamSpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBEAMSPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddBeamVisual(::MX::Logic::BattleEntities::EntityId* arg, BeamVisual* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, BeamVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDBEAMVISUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToSkillEntityWaitForLoadingQueueTable(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDTOSKILLENTITYWAITFORLOADINGQUEUETABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindSupportAsync(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDSUPPORTASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessParticleEffect(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPARTICLEEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSkillEntityRemoved(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSKILLENTITYREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyLogicUpdate(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_APPLYLOGICUPDATE_OFFSET))(arg, nullptr);
		}

		EntityVisual* FindEntityVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (EntityVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessGroundNodeChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSGROUNDNODECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddObstacle(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDOBSTACLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyCreation(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_APPLYCREATION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveBattleItemVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEBATTLEITEMVISUAL_OFFSET))(arg, nullptr);
		}

		SkillActorVisual* FindSkillActorVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (SkillActorVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDSKILLACTORVISUAL_OFFSET))(arg, nullptr);
		}

		::MX::Visual::Battles::BattleSceneHandler* get_Parent()
		{
			return (return (::MX::Visual::Battles::BattleSceneHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void ClearSkillEntityWaitForLoadingQueueTable(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_CLEARSKILLENTITYWAITFORLOADINGQUEUETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessTimelinePlayTrackEnabled(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSTIMELINEPLAYTRACKENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessActionInterrupted(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSACTIONINTERRUPTED_OFFSET))(arg, nullptr);
		}

		::System::Void ForEachActorAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FOREACHACTORASYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddSupportActor(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDSUPPORTACTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessProjectileSpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSPROJECTILESPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBattleEntitySpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEENTITYSPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCharacterPhaseChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSCHARACTERPHASECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessActionChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		BattleItemVisual* FindBattleItemVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (BattleItemVisual*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDBATTLEITEMVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddEffectArea(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDEFFECTAREA_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessObstacleDestroyed(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSOBSTACLEDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAreaSpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSAREASPAWNED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessDamageUpdatedSnapshot(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSDAMAGEUPDATEDSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessObstacleDestroyed_b__69_0(GroundObstacleVisual* arg)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSOBSTACLEDESTROYED_B__69_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddNormalAttackVisual(::MX::Logic::BattleEntities::EntityId* arg, NormalAttackVisual* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, NormalAttackVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDNORMALATTACKVISUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddBattleItemVisual(::MX::Logic::BattleEntities::EntityId* arg, BattleItemVisual* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, BattleItemVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_ADDBATTLEITEMVISUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean RemoveCharacter(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindObstacleAsync(::MX::Logic::BattleEntities::EntityId* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDOBSTACLEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessStatusAdded(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSTATUSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveNormalAttackVisual(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVENORMALATTACKVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void ForEachObstacleAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FOREACHOBSTACLEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAuraSpawned(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSAURASPAWNED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindAll(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_FINDALL_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessImmune(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSIMMUNE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveObstacle(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDestoryedBulletDestination(::MX::Logic::BattleEntities::EntityId* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_SETDESTORYEDBULLETDESTINATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessTSSInteraction(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSTSSINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRemove(::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_COREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSupportActorChanged(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSSUPPORTACTORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSkillEntityWaitForLoadingQueueTableAndProcessAction(::MX::Logic::BattleEntities::EntityId* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_CHECKSKILLENTITYWAITFORLOADINGQUEUETABLEANDPROCESSACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _ProcessObstacleStateChanged_b__70_0(GroundObstacleVisual* arg)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT__PROCESSOBSTACLESTATECHANGED_B__70_0_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBattleItemSnapshot(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::EventSnapshot::BattleEventSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_PROCESSBATTLEITEMSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromEntityList(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_BATTLEACTORCOMPONENT_REMOVEFROMENTITYLIST_OFFSET))(arg, nullptr);
		}

	};
}

