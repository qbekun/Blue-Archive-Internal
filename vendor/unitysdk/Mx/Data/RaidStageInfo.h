#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class RaidBossGroupType; }
namespace FlatData { class Difficulty; }
namespace FlatData { class TacticEnvironment; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::Data::Excel { class RaidStageExcel; }
namespace MX::Data::Excel { class EliminateRaidStageExcel; }

#define MX_DATA_RAIDSTAGEINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18592A0)
#define MX_DATA_RAIDSTAGEINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18592B0)
#define MX_DATA_RAIDSTAGEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18592C0)
#define MX_DATA_RAIDSTAGEINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18592D0)
#define MX_DATA_RAIDSTAGEINFO_GET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x18592E0)
#define MX_DATA_RAIDSTAGEINFO_SET_USEBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x18592F0)
#define MX_DATA_RAIDSTAGEINFO_GET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1859300)
#define MX_DATA_RAIDSTAGEINFO_SET_USEBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1859310)
#define MX_DATA_RAIDSTAGEINFO_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1859320)
#define MX_DATA_RAIDSTAGEINFO_SET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1859330)
#define MX_DATA_RAIDSTAGEINFO_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1859340)
#define MX_DATA_RAIDSTAGEINFO_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1859350)
#define MX_DATA_RAIDSTAGEINFO_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1859360)
#define MX_DATA_RAIDSTAGEINFO_SET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1859370)
#define MX_DATA_RAIDSTAGEINFO_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1859380)
#define MX_DATA_RAIDSTAGEINFO_SET_BGPATH_OFFSET UNITYSDK_OFFSET(0x1859390)
#define MX_DATA_RAIDSTAGEINFO_GET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18593A0)
#define MX_DATA_RAIDSTAGEINFO_SET_RAIDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18593B0)
#define MX_DATA_RAIDSTAGEINFO_GET_RAIDCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x18593C0)
#define MX_DATA_RAIDSTAGEINFO_SET_RAIDCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x18593D0)
#define MX_DATA_RAIDSTAGEINFO_GET_BOSSCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x18593E0)
#define MX_DATA_RAIDSTAGEINFO_SET_BOSSCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x18593F0)
#define MX_DATA_RAIDSTAGEINFO_GET_BOSSCHARACTERCOSTUMEIDS_OFFSET UNITYSDK_OFFSET(0x1859400)
#define MX_DATA_RAIDSTAGEINFO_SET_BOSSCHARACTERCOSTUMEIDS_OFFSET UNITYSDK_OFFSET(0x1859410)
#define MX_DATA_RAIDSTAGEINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1859420)
#define MX_DATA_RAIDSTAGEINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1859430)
#define MX_DATA_RAIDSTAGEINFO_GET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1859440)
#define MX_DATA_RAIDSTAGEINFO_SET_DIFFICULTYOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x1859450)
#define MX_DATA_RAIDSTAGEINFO_GET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1859460)
#define MX_DATA_RAIDSTAGEINFO_SET_MAXPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1859470)
#define MX_DATA_RAIDSTAGEINFO_GET_RAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1859480)
#define MX_DATA_RAIDSTAGEINFO_SET_RAIDROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0x1859490)
#define MX_DATA_RAIDSTAGEINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x18594A0)
#define MX_DATA_RAIDSTAGEINFO_SET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x18594B0)
#define MX_DATA_RAIDSTAGEINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x18594C0)
#define MX_DATA_RAIDSTAGEINFO_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x18594D0)
#define MX_DATA_RAIDSTAGEINFO_GET_ENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x18594E0)
#define MX_DATA_RAIDSTAGEINFO_SET_ENTERTIMELINE_OFFSET UNITYSDK_OFFSET(0x18594F0)
#define MX_DATA_RAIDSTAGEINFO_GET_TACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1859510)
#define MX_DATA_RAIDSTAGEINFO_SET_TACTICENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1859520)
#define MX_DATA_RAIDSTAGEINFO_GET_DEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1859530)
#define MX_DATA_RAIDSTAGEINFO_SET_DEFAULTCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1859540)
#define MX_DATA_RAIDSTAGEINFO_GET_MAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1859550)
#define MX_DATA_RAIDSTAGEINFO_SET_MAXIMUMSCORE_OFFSET UNITYSDK_OFFSET(0x1859560)
#define MX_DATA_RAIDSTAGEINFO_GET_PERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1859570)
#define MX_DATA_RAIDSTAGEINFO_SET_PERSECONDMINUSSCORE_OFFSET UNITYSDK_OFFSET(0x1859580)
#define MX_DATA_RAIDSTAGEINFO_GET_HPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x1859590)
#define MX_DATA_RAIDSTAGEINFO_SET_HPPERCENTSCORE_OFFSET UNITYSDK_OFFSET(0x18595A0)
#define MX_DATA_RAIDSTAGEINFO_GET_MINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x18595B0)
#define MX_DATA_RAIDSTAGEINFO_SET_MINIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x18595C0)
#define MX_DATA_RAIDSTAGEINFO_GET_MAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x18595D0)
#define MX_DATA_RAIDSTAGEINFO_SET_MAXIMUMACQUISITIONSCORE_OFFSET UNITYSDK_OFFSET(0x18595E0)
#define MX_DATA_RAIDSTAGEINFO_GET_RAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x18595F0)
#define MX_DATA_RAIDSTAGEINFO_SET_RAIDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1859600)
#define MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1859610)
#define MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x1859620)
#define MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1859640)
#define MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASESTART_OFFSET UNITYSDK_OFFSET(0x1859650)
#define MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1859670)
#define MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASEEND_OFFSET UNITYSDK_OFFSET(0x1859680)
#define MX_DATA_RAIDSTAGEINFO_GET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x18596A0)
#define MX_DATA_RAIDSTAGEINFO_SET_VICTORYTIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x18596B0)
#define MX_DATA_RAIDSTAGEINFO_GET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x18596D0)
#define MX_DATA_RAIDSTAGEINFO_SET_PHASECHANGETIMELINEPATH_OFFSET UNITYSDK_OFFSET(0x18596E0)
#define MX_DATA_RAIDSTAGEINFO_GET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1859700)
#define MX_DATA_RAIDSTAGEINFO_SET_TIMELINEPHASE_OFFSET UNITYSDK_OFFSET(0x1859710)
#define MX_DATA_RAIDSTAGEINFO_GET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1859720)
#define MX_DATA_RAIDSTAGEINFO_SET_ENTERSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1859730)
#define MX_DATA_RAIDSTAGEINFO_GET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1859740)
#define MX_DATA_RAIDSTAGEINFO_SET_CLEARSCENARIOKEY_OFFSET UNITYSDK_OFFSET(0x1859750)
#define MX_DATA_RAIDSTAGEINFO_GET_BOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1859760)
#define MX_DATA_RAIDSTAGEINFO_SET_BOSSBGINFOKEY_OFFSET UNITYSDK_OFFSET(0x1859770)
#define MX_DATA_RAIDSTAGEINFO_GET_CLEARSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1859780)
#define MX_DATA_RAIDSTAGEINFO_SET_CLEARSTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1859790)
#define MX_DATA_RAIDSTAGEINFO_GET_DISPLAYREWARD_OFFSET UNITYSDK_OFFSET(0x18597B0)
#define MX_DATA_RAIDSTAGEINFO_SET_DISPLAYREWARD_OFFSET UNITYSDK_OFFSET(0x18597C0)
#define MX_DATA_RAIDSTAGEINFO_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x18597E0)
#define MX_DATA_RAIDSTAGEINFO_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x18597F0)
#define MX_DATA_RAIDSTAGEINFO_GET__ENTERCOST_OFFSET UNITYSDK_OFFSET(0x1859800)
#define MX_DATA_RAIDSTAGEINFO_SET__ENTERCOST_OFFSET UNITYSDK_OFFSET(0x1859810)
#define MX_DATA_RAIDSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1859830)
#define MX_DATA_RAIDSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1859840)
#define MX_DATA_RAIDSTAGEINFO_GETENTERCOST_OFFSET UNITYSDK_OFFSET(0x1859850)
#define MX_DATA_RAIDSTAGEINFO_GET_BOSSSPINEPATH_OFFSET UNITYSDK_OFFSET(0x1859A00)
#define MX_DATA_RAIDSTAGEINFO_SET_BOSSSPINEPATH_OFFSET UNITYSDK_OFFSET(0x1859A10)
#define MX_DATA_RAIDSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1859A30)
#define MX_DATA_RAIDSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185A390)

namespace MX::Data
{
	inline static constexpr unsigned int RaidStageInfo_TypeDefinitionIndex = 15880;

	class RaidStageInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Boolean _UseBossIndex_k__BackingField; // 0x20
		::System::Boolean _UseBossAIPhaseSync_k__BackingField; // 0x21
		::System::String* _RaidBossGroup_k__BackingField; // 0x28
		::FlatData::RaidBossGroupType* _GroupType_k__BackingField; // 0x30
		::System::String* _PortraitPath_k__BackingField; // 0x38
		::System::String* _BGPath_k__BackingField; // 0x40
		::System::Int64 _RaidCharacterId_k__BackingField; // 0x48
		::System::Int64 _RaidCharacterCostumeId_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _BossCharacterIds_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _BossCharacterCostumeIds_k__BackingField; // 0x60
		::FlatData::Difficulty* _Difficulty_k__BackingField; // 0x68
		::System::Boolean _DifficultyOpenCondition_k__BackingField; // 0x6C
		::System::Int64 _MaxPlayerCount_k__BackingField; // 0x70
		::System::Int32 _RaidRoomLifeTime_k__BackingField; // 0x78
		::System::Int64 _BattleDuration_k__BackingField; // 0x80
		::System::Int64 _GroundId_k__BackingField; // 0x88
		::System::String* _EnterTimeLine_k__BackingField; // 0x90
		::FlatData::TacticEnvironment* _TacticEnvironment_k__BackingField; // 0x98
		::System::Int64 _DefaultClearScore_k__BackingField; // 0xA0
		::System::Int64 _MaximumScore_k__BackingField; // 0xA8
		::System::Int64 _PerSecondMinusScore_k__BackingField; // 0xB0
		::System::Int64 _HPPercentScore_k__BackingField; // 0xB8
		::System::Int64 _MinimumAcquisitionScore_k__BackingField; // 0xC0
		::System::Int64 _MaximumAcquisitionScore_k__BackingField; // 0xC8
		::System::Int64 _RaidRewardGroupId_k__BackingField; // 0xD0
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePath_k__BackingField; // 0xD8
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePhaseStart_k__BackingField; // 0xE0
		::Il2CppArray<::System::Object*>* _BattleReadyTimelinePhaseEnd_k__BackingField; // 0xE8
		::System::String* _VictoryTimelinePath_k__BackingField; // 0xF0
		::System::String* _PhaseChangeTimelinePath_k__BackingField; // 0xF8
		::System::Int64 _TimeLinePhase_k__BackingField; // 0x100
		::System::UInt32 _EnterScenarioKey_k__BackingField; // 0x108
		::System::UInt32 _ClearScenarioKey_k__BackingField; // 0x10C
		::System::UInt32 _BossBGInfoKey_k__BackingField; // 0x110
		Il2CppObject* _ClearStageReward_k__BackingField; // 0x118
		Il2CppObject* _DisplayReward_k__BackingField; // 0x120
		::System::Boolean _IsOpen_k__BackingField; // 0x128
		::MX::GameLogic::Parcel::ParcelCost* __enterCost_k__BackingField; // 0x130
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0x138
		::System::String* _BossSpinePath_k__BackingField; // 0x140

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBossIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_USEBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Void set_UseBossIndex(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_USEBOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBossAIPhaseSync()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_USEBOSSAIPHASESYNC_OFFSET))(nullptr);
		}

		::System::Void set_UseBossAIPhaseSync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_USEBOSSAIPHASESYNC_OFFSET))(arg, nullptr);
		}

		::System::String* get_RaidBossGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_RAIDBOSSGROUP_OFFSET))(str, nullptr);
		}

		::FlatData::RaidBossGroupType* get_GroupType()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_GROUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_GroupType(::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_GROUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		::System::Void set_PortraitPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_PORTRAITPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_BGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BGPATH_OFFSET))(nullptr);
		}

		::System::Void set_BGPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BGPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_RaidCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_RAIDCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_RaidCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_RAIDCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidCharacterCostumeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_RAIDCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_RaidCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_RAIDCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BossCharacterIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BOSSCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_BossCharacterIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BOSSCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BossCharacterCostumeIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BOSSCHARACTERCOSTUMEIDS_OFFSET))(nullptr);
		}

		::System::Void set_BossCharacterCostumeIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BOSSCHARACTERCOSTUMEIDS_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DifficultyOpenCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_DIFFICULTYOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_DifficultyOpenCondition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_DIFFICULTYOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxPlayerCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_MAXPLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_MaxPlayerCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_MAXPLAYERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RaidRoomLifeTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_RAIDROOMLIFETIME_OFFSET))(nullptr);
		}

		::System::Void set_RaidRoomLifeTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_RAIDROOMLIFETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_BattleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BATTLEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::String* get_EnterTimeLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_ENTERTIMELINE_OFFSET))(nullptr);
		}

		::System::Void set_EnterTimeLine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_ENTERTIMELINE_OFFSET))(str, nullptr);
		}

		::FlatData::TacticEnvironment* get_TacticEnvironment()
		{
			return (return (::FlatData::TacticEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_TACTICENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Void set_TacticEnvironment(::FlatData::TacticEnvironment* arg)
		{
			((::System::Void(*)(::FlatData::TacticEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_TACTICENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DefaultClearScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_DEFAULTCLEARSCORE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultClearScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_DEFAULTCLEARSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaximumScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_MAXIMUMSCORE_OFFSET))(nullptr);
		}

		::System::Void set_MaximumScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_MAXIMUMSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PerSecondMinusScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_PERSECONDMINUSSCORE_OFFSET))(nullptr);
		}

		::System::Void set_PerSecondMinusScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_PERSECONDMINUSSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HPPercentScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_HPPERCENTSCORE_OFFSET))(nullptr);
		}

		::System::Void set_HPPercentScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_HPPERCENTSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinimumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_MINIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Void set_MinimumAcquisitionScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_MINIMUMACQUISITIONSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaximumAcquisitionScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_MAXIMUMACQUISITIONSCORE_OFFSET))(nullptr);
		}

		::System::Void set_MaximumAcquisitionScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_MAXIMUMACQUISITIONSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_RAIDREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_RaidRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_RAIDREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePath()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePath(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPATH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePhaseStart()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASESTART_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePhaseStart(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASESTART_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BattleReadyTimelinePhaseEnd()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BATTLEREADYTIMELINEPHASEEND_OFFSET))(nullptr);
		}

		::System::Void set_BattleReadyTimelinePhaseEnd(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BATTLEREADYTIMELINEPHASEEND_OFFSET))(arg, nullptr);
		}

		::System::String* get_VictoryTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_VICTORYTIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_VictoryTimelinePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_VICTORYTIMELINEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_PhaseChangeTimelinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_PHASECHANGETIMELINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_PhaseChangeTimelinePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_PHASECHANGETIMELINEPATH_OFFSET))(str, nullptr);
		}

		::System::Int64 get_TimeLinePhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_TIMELINEPHASE_OFFSET))(nullptr);
		}

		::System::Void set_TimeLinePhase(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_TIMELINEPHASE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_EnterScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_ENTERSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Void set_EnterScenarioKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_ENTERSCENARIOKEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ClearScenarioKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_CLEARSCENARIOKEY_OFFSET))(nullptr);
		}

		::System::Void set_ClearScenarioKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_CLEARSCENARIOKEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_BossBGInfoKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BOSSBGINFOKEY_OFFSET))(nullptr);
		}

		::System::Void set_BossBGInfoKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BOSSBGINFOKEY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearStageReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_CLEARSTAGEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_ClearStageReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_CLEARSTAGEREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplayReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_DISPLAYREWARD_OFFSET))(nullptr);
		}

		::System::Void set_DisplayReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_DISPLAYREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void set_IsOpen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_ISOPEN_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get__enterCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET__ENTERCOST_OFFSET))(nullptr);
		}

		::System::Void set__enterCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET__ENTERCOST_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetEnterCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GETENTERCOST_OFFSET))(nullptr);
		}

		::System::String* get_BossSpinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_GET_BOSSSPINEPATH_OFFSET))(nullptr);
		}

		::System::Void set_BossSpinePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_SET_BOSSSPINEPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::MX::Data::Excel::RaidStageExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::MX::Data::Excel::RaidStageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EliminateRaidStageExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EliminateRaidStageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSTAGEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

