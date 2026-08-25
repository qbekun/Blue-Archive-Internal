#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class RaidDamageMeter; }
namespace MX::Logic::Battles { class GroggyController; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Battles { class DamageUpdatedEventArgs; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class BattleEndType; }

#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ONDAMAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x1298EB0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1298EE0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_FORCEUPDATEDRAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1298EF0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1298F00)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1298F10)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x1298F20)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SETDAMAGEMETER_OFFSET UNITYSDK_OFFSET(0x1298F30)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x12990E0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYCOUNT_OFFSET UNITYSDK_OFFSET(0x12990F0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_PROCESSENTITYUPDATE_OFFSET UNITYSDK_OFFSET(0x1299180)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_SUBPARTSHPS_OFFSET UNITYSDK_OFFSET(0x12991C0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYPROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x1299260)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1299390)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12993A0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_RAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x12997E0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x12997F0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_TOTALGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1299160)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x1299800)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_MAXGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1299140)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1299810)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1299830)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBATTLEPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x1299840)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBOSSPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1299860)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SPAWNCHARACTERBYGROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x1299880)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ISRAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1299C00)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x1299DC0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_FORCEUPDATERAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x129A130)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBOSSPLAYERDAMAGE_OFFSET UNITYSDK_OFFSET(0x129A210)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_FORCEUPDATEDRAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x129A230)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0x1299340)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x129A240)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_INITGROUPS_OFFSET UNITYSDK_OFFSET(0x129A260)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ADDPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1299FD0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x129A300)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSHPRATE_OFFSET UNITYSDK_OFFSET(0x129A310)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSAIPHASE_OFFSET UNITYSDK_OFFSET(0x129A380)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ADD_DAMAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x129A400)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SYNCHITPOINTS_OFFSET UNITYSDK_OFFSET(0x1299A10)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_REMOVE_DAMAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x129A4A0)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_DECIDEWINNER_OFFSET UNITYSDK_OFFSET(0x129A540)
#define MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_DAMAGEMETER_OFFSET UNITYSDK_OFFSET(0x129B8F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SingleRaidBattle_TypeDefinitionIndex = 14094;

	class SingleRaidBattle : public ::Spine::Unity::Playables::SkeletonAnimationPlayableHandle
	{
	public:
		Il2CppObject* DamageUpdated; // 0x330
		::MX::Logic::Battles::CharacterGroup* enemyGroup; // 0x338
		::System::Boolean _IsPractice_k__BackingField; // 0x340
		::System::Int64 _RaidServerId_k__BackingField; // 0x348
		::System::Int32 _RaidBossIndex_k__BackingField; // 0x350
		::System::Int32 _ForceUpdatedRaidBossIndex_k__BackingField; // 0x354
		::System::Int32 _LastBossIndex_k__BackingField; // 0x358
		::System::String* _SecretCode_k__BackingField; // 0x360
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _raidBoss_k__BackingField; // 0x368
		::MX::Logic::Battles::RaidDamageMeter* _damageMeter_k__BackingField; // 0x370
		::MX::Logic::Battles::GroggyController* _groggyController_k__BackingField; // 0x378
		::MX::Logic::BattleEntities::SkillActor* _raidSkillActor_k__BackingField; // 0x380

		::System::Void OnDamageUpdated(::MX::Logic::Battles::DamageUpdatedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::DamageUpdatedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ONDAMAGEUPDATED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_raidBoss()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSS_OFFSET))(nullptr);
		}

		::System::Int32 get_ForceUpdatedRaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_FORCEUPDATEDRAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* get_raidSkillActor()
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDSKILLACTOR_OFFSET))(nullptr);
		}

		::System::Void SetDamageMeter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SETDAMAGEMETER_OFFSET))(nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_SECRETCODE_OFFSET))(nullptr);
		}

		::System::Int64 get_GroggyCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYCOUNT_OFFSET))(nullptr);
		}

		::System::Void ProcessEntityUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_PROCESSENTITYUPDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SubPartsHPs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_SUBPARTSHPS_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_GroggyProgressRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYPROGRESSRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_RAIDBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_LASTBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_TOTALGROGGYPOINT_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_EnemyGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ENEMYGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_MAXGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void set_raidBoss(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_RAIDBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBattlePlayerDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBATTLEPLAYERDAMAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentBossPlayerGroggy()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBOSSPLAYERGROGGY_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* SpawnCharacterByGroundPoint(::MX::Logic::Battles::SpawnCharacterSetting* arg, ::System::Boolean arg2)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::SpawnCharacterSetting*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SPAWNCHARACTERBYGROUNDPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsRaidBoss(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ISRAIDBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ForceUpdateRaidBossIndex(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_FORCEUPDATERAIDBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossPlayerDamage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_CURRENTBOSSPLAYERDAMAGE_OFFSET))(nullptr);
		}

		::System::Void set_ForceUpdatedRaidBossIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SET_FORCEUPDATEDRAIDBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroggyProgressValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYPROGRESSVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

		::System::Void InitGroups(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_INITGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPlayerGroggy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ADDPLAYERGROGGY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroggyController* get_groggyController()
		{
			return ((::MX::Logic::Battles::GroggyController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_GROGGYCONTROLLER_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidBossHPRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSHPRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidBossAIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_RAIDBOSSAIPHASE_OFFSET))(nullptr);
		}

		::System::Void add_DamageUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_ADD_DAMAGEUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHitPoints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_SYNCHITPOINTS_OFFSET))(nullptr);
		}

		::System::Void remove_DamageUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_REMOVE_DAMAGEUPDATED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroupTag* DecideWinner(::MX::Logic::Battles::BattleEndType* arg)
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::MX::Logic::Battles::BattleEndType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_DECIDEWINNER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::RaidDamageMeter* get_damageMeter()
		{
			return ((::MX::Logic::Battles::RaidDamageMeter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SINGLERAIDBATTLE_GET_DAMAGEMETER_OFFSET))(nullptr);
		}

	};
}

