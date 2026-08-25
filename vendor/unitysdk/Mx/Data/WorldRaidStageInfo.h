#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class WorldRaidDifficulty; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::Data::Excel { class WorldRaidStageExcel; }
namespace MX::Data::Excel { class InteractiveWorldRaidStageExcel; }

#define MX_DATA_WORLDRAIDSTAGEINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1867C60)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1867C70)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1867C80)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1867C90)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1867CA0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1867CB0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1867CC0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDSKILLDESCRIPTIONLISTID_OFFSET UNITYSDK_OFFSET(0x1867CD0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_RAIDSKILLDESCRIPTIONLISTID_OFFSET UNITYSDK_OFFSET(0x1867CE0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1867CF0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1867D00)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BOSSCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1867D10)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BOSSCHARACTERCOSTUMEIDS_OFFSET UNITYSDK_OFFSET(0x1867D20)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ISSCENARIOBOSS_OFFSET UNITYSDK_OFFSET(0x1867D30)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ISSCENARIOBOSS_OFFSET UNITYSDK_OFFSET(0x1867D40)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1867D50)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1867D60)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1867D70)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1867D80)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ASSISTCHARACTERLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1867D90)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ASSISTCHARACTERLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1867DA0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1867DB0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1867DC0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1867DD0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1867DE0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1867DF0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1867E00)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_SAVECURRENTLOCALBOSSHP_OFFSET UNITYSDK_OFFSET(0x1867E10)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_SAVECURRENTLOCALBOSSHP_OFFSET UNITYSDK_OFFSET(0x1867E20)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1867E30)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ENTERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1867E40)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_CONTINUEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1867E50)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_CONTINUEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1867E60)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_USEFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1867E70)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_USEFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1867E80)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1867E90)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1867EA0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_DAMAGETOWORLDBOSS_OFFSET UNITYSDK_OFFSET(0x1867EB0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_DAMAGETOWORLDBOSS_OFFSET UNITYSDK_OFFSET(0x1867EC0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEENDREWARDS_OFFSET UNITYSDK_OFFSET(0x1867ED0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_VISIBLEBATTLEENDREWARDS_OFFSET UNITYSDK_OFFSET(0x1867F30)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_VISIBLEBATTLEENDREWARDS_OFFSET UNITYSDK_OFFSET(0x1867F40)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_INVISIBLEBATTLEENDREWARDS_OFFSET UNITYSDK_OFFSET(0x1867F60)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_INVISIBLEBATTLEENDREWARDS_OFFSET UNITYSDK_OFFSET(0x1867F70)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1867F90)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_VISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1867FF0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_VISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1868000)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_INVISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1868020)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_INVISIBLECLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1868030)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1868050)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1868060)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1868080)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1868090)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x18680B0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x18680C0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x18680D0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x18680E0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x18680F0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1868100)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1868110)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1868120)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1868130)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1868140)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1868160)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1868170)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1868190)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x18681A0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x18681C0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x18681D0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x18681F0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1868200)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1868220)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1868230)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1868250)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1868260)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1868280)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1868290)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x18682B0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x18682C0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x18682E0)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x18682F0)
#define MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1868310)
#define MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILLREMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1868320)
#define MX_DATA_WORLDRAIDSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1868340)
#define MX_DATA_WORLDRAIDSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1868A80)
#define MX_DATA_WORLDRAIDSTAGEINFO_GETSTAGEBOSSNAME_OFFSET UNITYSDK_OFFSET(0x1869410)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidStageInfo_TypeDefinitionIndex = 15933;

	class WorldRaidStageInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _GroundId_k__BackingField; // 0x28
		::System::Int64 _RaidSkillDescriptionListId_k__BackingField; // 0x30
		::System::Int64 _RaidCharacterId_k__BackingField; // 0x38
		::System::Int64 _RaidCharacterCostumeId_k__BackingField; // 0x40
		Il2CppObject* _BossCharacterIds_k__BackingField; // 0x48
		Il2CppObject* _BossCharacterCostumeIds_k__BackingField; // 0x50
		::System::Boolean _IsScenarioBoss_k__BackingField; // 0x58
		::System::Boolean _UseBossIndex_k__BackingField; // 0x59
		::System::Boolean _UseBossAIPhaseSync_k__BackingField; // 0x5A
		::System::Int64 _AssistCharacterLimitCount_k__BackingField; // 0x60
		::System::Int64 _BattleDuration_k__BackingField; // 0x68
		::FlatData::WorldRaidDifficulty* _Difficulty_k__BackingField; // 0x70
		::System::Boolean _DifficultyOpenCondition_k__BackingField; // 0x74
		::System::Boolean _SaveCurrentLocalBossHP_k__BackingField; // 0x75
		::System::Int64 _EnterAmount_k__BackingField; // 0x78
		::System::Int64 _ContinueAmount_k__BackingField; // 0x80
		::System::Boolean _UseFixedEchelon_k__BackingField; // 0x88
		::System::Int64 _FixedEchelonId_k__BackingField; // 0x90
		Il2CppObject* _DamageToWorldBoss_k__BackingField; // 0x98
		Il2CppObject* _VisibleBattleEndRewards_k__BackingField; // 0xA8
		Il2CppObject* _InvisibleBattleEndRewards_k__BackingField; // 0xB0
		Il2CppObject* _VisibleClearRewards_k__BackingField; // 0xB8
		Il2CppObject* _InvisibleClearRewards_k__BackingField; // 0xC0
		::System::String* _PortraitPath_k__BackingField; // 0xC8
		::System::String* _BGPath_k__BackingField; // 0xD0
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0xD8
		::System::Int64 _ClearScenarioKey_k__BackingField; // 0xE0
		::System::Int64 _EnterScenarioKey_k__BackingField; // 0xE8
		::System::Int64 _TimeLinePhase_k__BackingField; // 0xF0
		::System::String* _VictoryTimelinePath_k__BackingField; // 0xF8
		::System::String* _PhaseChangeTimelinePath_k__BackingField; // 0x100
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePath_k__BackingField; // 0x108
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePhaseStart_k__BackingField; // 0x110
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePhaseEnd_k__BackingField; // 0x118
		::Il2CppArray<::System::Object*>* _AllyPassiveSkill_k__BackingField; // 0x120
		::Il2CppArray<::System::Object*>* _AllyPassiveSkillLevel_k__BackingField; // 0x128
		::Il2CppArray<::System::Object*>* _AllyPassiveSkillRemoveCondition_k__BackingField; // 0x130
		::Il2CppArray<::System::Object*>* _EnemyPassiveSkill_k__BackingField; // 0x138
		::Il2CppArray<::System::Object*>* _EnemyPassiveSkillLevel_k__BackingField; // 0x140
		::Il2CppArray<::System::Object*>* _EnemyPassiveSkillRemoveCondition_k__BackingField; // 0x148

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidSkillDescriptionListId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDSKILLDESCRIPTIONLISTID_OFFSET))(nullptr);
		}

		::System::Void set_RaidSkillDescriptionListId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_RAIDSKILLDESCRIPTIONLISTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidCharacterCostumeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_RAIDCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BOSSCHARACTERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossCharacterCostumeIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BOSSCHARACTERCOSTUMEIDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsScenarioBoss()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ISSCENARIOBOSS_OFFSET))(nullptr);
		}

		::System::Void set_IsScenarioBoss(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ISSCENARIOBOSS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_UseBossIndex(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_USEBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::Void set_UseBossAIPhaseSync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_USEBOSSAIPHASESYNC_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AssistCharacterLimitCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ASSISTCHARACTERLIMITCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterLimitCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ASSISTCHARACTERLIMITCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_BattleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEDURATION_OFFSET))(arg, nullptr);
		}

		::FlatData::WorldRaidDifficulty* get_Difficulty()
		{
			return (return (::FlatData::WorldRaidDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::WorldRaidDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::WorldRaidDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DifficultyOpenCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_DIFFICULTYOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_DifficultyOpenCondition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_DIFFICULTYOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SaveCurrentLocalBossHP()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_SAVECURRENTLOCALBOSSHP_OFFSET))(nullptr);
		}

		::System::Void set_SaveCurrentLocalBossHP(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_SAVECURRENTLOCALBOSSHP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnterAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ENTERAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EnterAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ENTERAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ContinueAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_CONTINUEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ContinueAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_CONTINUEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseFixedEchelon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_USEFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Void set_UseFixedEchelon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_USEFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DamageToWorldBoss()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_DAMAGETOWORLDBOSS_OFFSET))(nullptr);
		}

		::System::Void set_DamageToWorldBoss(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_DAMAGETOWORLDBOSS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattleEndRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEENDREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_VisibleBattleEndRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_VISIBLEBATTLEENDREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_VisibleBattleEndRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_VISIBLEBATTLEENDREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InvisibleBattleEndRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_INVISIBLEBATTLEENDREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_InvisibleBattleEndRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_INVISIBLEBATTLEENDREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_CLEARREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_VisibleClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_VISIBLECLEARREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_VisibleClearRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_VISIBLECLEARREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InvisibleClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_INVISIBLECLEARREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_InvisibleClearRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_INVISIBLECLEARREWARDS_OFFSET))(arg, nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		::System::Void set_PortraitPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_PORTRAITPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_BGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BGPATH_OFFSET))(nullptr);
		}

		::System::Void set_BGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_BGPATH_OFFSET))(str, nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClearScenarioKey()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_CLEARSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Void set_ClearScenarioKey(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_CLEARSCENARIOKEY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnterScenarioKey()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Void set_EnterScenarioKey(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ENTERSCENARIOKEY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TimeLinePhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_TIMELINEPHASE_OFFSET))(nullptr);
		}

		::System::Void set_TimeLinePhase(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_TIMELINEPHASE_OFFSET))(arg, nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_VictoryTimelinePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_VICTORYTIMELINEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_PhaseChangeTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_PHASECHANGETIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_PhaseChangeTimelinePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_PHASECHANGETIMELINEPATH_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePath()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePath(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePhaseStart()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASESTART_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePhaseStart(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePhaseEnd()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASEEND_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePhaseEnd(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AllyPassiveSkill()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILL_OFFSET))(nullptr);
		}

		::System::Void set_AllyPassiveSkill(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AllyPassiveSkillLevel()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_AllyPassiveSkillLevel(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AllyPassiveSkillRemoveCondition()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ALLYPASSIVESKILLREMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_AllyPassiveSkillRemoveCondition(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ALLYPASSIVESKILLREMOVECONDITION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnemyPassiveSkill()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILL_OFFSET))(nullptr);
		}

		::System::Void set_EnemyPassiveSkill(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnemyPassiveSkillLevel()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_EnemyPassiveSkillLevel(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnemyPassiveSkillRemoveCondition()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GET_ENEMYPASSIVESKILLREMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_EnemyPassiveSkillRemoveCondition(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_SET_ENEMYPASSIVESKILLREMOVECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidStageExcel* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidStageExcel*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::InteractiveWorldRaidStageExcel* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::InteractiveWorldRaidStageExcel*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetStageBossName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDSTAGEINFO_GETSTAGEBOSSNAME_OFFSET))(nullptr);
		}

	};
}

