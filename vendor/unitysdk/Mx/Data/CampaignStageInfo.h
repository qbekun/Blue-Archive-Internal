#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Campaign { class HexaTileMap; }
namespace FlatData { class StrategyEnvironment; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::Data { class CampaignChapterInfo; }
namespace MX::Data::Excel { class CampaignStageExcel; }

#define MX_DATA_CAMPAIGNSTAGEINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834B40)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834B50)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1834B60)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1834B70)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_CHAPTERNUMBER_OFFSET UNITYSDK_OFFSET(0x1834B80)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_CHAPTERNUMBER_OFFSET UNITYSDK_OFFSET(0x1834B90)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1834BA0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1834BB0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_TUTORIALSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1834BC0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_TUTORIALSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1834BD0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_PREREQUISITESCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1834BE0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_PREREQUISITESCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1834BF0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1834C00)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0x1834C10)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1834C20)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1834C30)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_BACKGROUNDBG_OFFSET UNITYSDK_OFFSET(0x1834C40)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_BACKGROUNDBG_OFFSET UNITYSDK_OFFSET(0x1834C50)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STORYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834C60)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STORYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834C70)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834C80)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834C90)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_DAILYPLAYCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1834CA0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1834CE0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1834CF0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1834D00)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEENTERCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1834D10)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0x1834D20)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_MAXTURN_OFFSET UNITYSDK_OFFSET(0x1834D30)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_MAXECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1834D40)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_MAXECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1834D50)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1834D60)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1834D70)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_PREREQUISITESTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1834D80)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_PREREQUISITESTAGEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1834D90)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_DAILYPLAYLIMIT_OFFSET UNITYSDK_OFFSET(0x1834DB0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_DAILYPLAYLIMIT_OFFSET UNITYSDK_OFFSET(0x1834DC0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_PLAYTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1834DD0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_PLAYTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x1834DE0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_PLAYTURNLIMIT_OFFSET UNITYSDK_OFFSET(0x1834DF0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_PLAYTURNLIMIT_OFFSET UNITYSDK_OFFSET(0x1834E00)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_ENTERCOST_OFFSET UNITYSDK_OFFSET(0x1834E10)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_PURCHASEPLAYCOUNTHARDSTAGECOST_OFFSET UNITYSDK_OFFSET(0x1834E70)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_PURCHASEPLAYCOUNTHARDSTAGECOST_OFFSET UNITYSDK_OFFSET(0x1834E80)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_HEXATILEMAP_OFFSET UNITYSDK_OFFSET(0x1834EA0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_HEXATILEMAP_OFFSET UNITYSDK_OFFSET(0x1834EB0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1834ED0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STARCONDITIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1834EE0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STARCONDITIONSTACTICRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1834EF0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STARCONDITIONSTACTICRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1834F00)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_REWARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834F10)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_REWARDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1834F20)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_TACTICREWARDPLAYEREXP_OFFSET UNITYSDK_OFFSET(0x1834F30)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_TACTICREWARDPLAYEREXP_OFFSET UNITYSDK_OFFSET(0x1834F40)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_TACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1834F50)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_TACTICREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1834F60)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET UNITYSDK_OFFSET(0x1834F70)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1834F80)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1834F90)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_DISPLAYREWARD_OFFSET UNITYSDK_OFFSET(0x1834FB0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_DISPLAYREWARD_OFFSET UNITYSDK_OFFSET(0x1834FC0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1834FE0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1834FF0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1835000)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1835010)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1835020)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1835030)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYSKIPGROUNDID_OFFSET UNITYSDK_OFFSET(0x1835040)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1835050)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1835060)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1835070)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_BGMID_OFFSET UNITYSDK_OFFSET(0x1835080)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1835090)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x18350A0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_ISEVENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18350B0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_ENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18350D0)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_ENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18350E0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_ISDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1835100)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_ISDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1835110)
#define MX_DATA_CAMPAIGNSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1835120)
#define MX_DATA_CAMPAIGNSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1835130)
#define MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1835140)
#define MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1835150)
#define MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1836470)
#define MX_DATA_CAMPAIGNSTAGEINFO_GETSTAGENAME_OFFSET UNITYSDK_OFFSET(0x18367B0)
#define MX_DATA_CAMPAIGNSTAGEINFO_GETSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1836850)
#define MX_DATA_CAMPAIGNSTAGEINFO_GETINPROGRESSCHAPTER_OFFSET UNITYSDK_OFFSET(0x1836940)
#define MX_DATA_CAMPAIGNSTAGEINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1836A60)

namespace MX::Data
{
	inline static constexpr unsigned int CampaignStageInfo_TypeDefinitionIndex = 15738;

	class CampaignStageInfo : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* Invalid; // 0x0
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::String* _DevName_k__BackingField; // 0x18
		::System::Int64 _ChapterNumber_k__BackingField; // 0x20
		::System::String* _StageNumber_k__BackingField; // 0x28
		::System::Int64 _TutorialStageNumber_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _PrerequisiteScenarioIds_k__BackingField; // 0x38
		::System::Int32 _RecommandLevel_k__BackingField; // 0x40
		::System::String* _StrategyMap_k__BackingField; // 0x48
		::System::String* _BackgroundBG_k__BackingField; // 0x50
		::System::Int64 _StoryUniqueId_k__BackingField; // 0x58
		::System::Int64 _ChapterUniqueId_k__BackingField; // 0x60
		::FlatData::StageTopography* _StageTopography_k__BackingField; // 0x68
		::System::Int32 _StageEnterCostAmount_k__BackingField; // 0x6C
		::System::Int32 _MaxTurn_k__BackingField; // 0x70
		::System::Int32 _MaxEchelonCount_k__BackingField; // 0x74
		::FlatData::StageDifficulty* _StageDifficulty_k__BackingField; // 0x78
		::Il2CppArray<::System::Object*>* EnterScenarioID; // 0x80
		::Il2CppArray<::System::Object*>* ClearScenarioID; // 0x88
		Il2CppObject* _PrerequisiteStageUniqueIds_k__BackingField; // 0x90
		::System::Int64 _DailyPlayLimit_k__BackingField; // 0x98
		::System::TimeSpan* _PlayTimeLimit_k__BackingField; // 0xA0
		::System::Int64 _PlayTurnLimit_k__BackingField; // 0xA8
		::MX::GameLogic::Parcel::ParcelCost* _PurchasePlayCountHardStageCost_k__BackingField; // 0xB0
		::MX::Campaign::HexaTileMap* _HexaTileMap_k__BackingField; // 0xB8
		::System::Int64 _StarConditionTurnCount_k__BackingField; // 0xC0
		::System::Int64 _StarConditionSTacticRackCount_k__BackingField; // 0xC8
		::System::Int64 _RewardUniqueId_k__BackingField; // 0xD0
		::System::Int64 _TacticRewardPlayerExp_k__BackingField; // 0xD8
		::System::Int64 _TacticRewardExp_k__BackingField; // 0xE0
		Il2CppObject* _StageReward_k__BackingField; // 0xE8
		Il2CppObject* _DisplayReward_k__BackingField; // 0xF0
		::FlatData::StrategyEnvironment* _StrategyEnvironment_k__BackingField; // 0xF8
		::FlatData::ContentType* _ContentType_k__BackingField; // 0xFC
		::System::Int64 _GroundId_k__BackingField; // 0x100
		::System::Int32 _StrategySkipGroundId_k__BackingField; // 0x108
		::System::Int64 _BattleDuration_k__BackingField; // 0x110
		::System::Int64 _BGMId_k__BackingField; // 0x118
		::System::Int64 _FixedEchelonId_k__BackingField; // 0x120
		::MX::GameLogic::Parcel::ParcelInfo* _EnterParcelInfo_k__BackingField; // 0x128
		::System::Boolean _IsDeprecated_k__BackingField; // 0x130
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0x134

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_DEVNAME_OFFSET))(nullptr);
		}

		::System::Void set_DevName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_DEVNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ChapterNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_CHAPTERNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_ChapterNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_CHAPTERNUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* get_StageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_StageNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGENUMBER_OFFSET))(str, nullptr);
		}

		::System::Int64 get_TutorialStageNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_TUTORIALSTAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_TutorialStageNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_TUTORIALSTAGENUMBER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PrerequisiteScenarioIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_PREREQUISITESCENARIOIDS_OFFSET))(nullptr);
		}

		::System::Void set_PrerequisiteScenarioIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_PREREQUISITESCENARIOIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_RecommandLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_RECOMMANDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_StrategyMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		::System::Void set_StrategyMap(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STRATEGYMAP_OFFSET))(str, nullptr);
		}

		::System::String* get_BackgroundBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_BACKGROUNDBG_OFFSET))(nullptr);
		}

		::System::Void set_BackgroundBG(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_BACKGROUNDBG_OFFSET))(str, nullptr);
		}

		::System::Int64 get_StoryUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STORYUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StoryUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STORYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChapterUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_CHAPTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ChapterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_CHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DailyPlayCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_DAILYPLAYCOUNTLIMIT_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Void set_StageTopography(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGETOPOGRAPHY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageEnterCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEENTERCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StageEnterCostAmount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEENTERCOSTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxTurn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_MAXTURN_OFFSET))(nullptr);
		}

		::System::Void set_MaxTurn(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_MAXTURN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxEchelonCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_MAXECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_MaxEchelonCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_MAXECHELONCOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_StageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PrerequisiteStageUniqueIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_PREREQUISITESTAGEUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_PrerequisiteStageUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_PREREQUISITESTAGEUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DailyPlayLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_DAILYPLAYLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_DailyPlayLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_DAILYPLAYLIMIT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_PlayTimeLimit()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_PLAYTIMELIMIT_OFFSET))(nullptr);
		}

		::System::Void set_PlayTimeLimit(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_PLAYTIMELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayTurnLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_PLAYTURNLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_PlayTurnLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_PLAYTURNLIMIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_EnterCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_ENTERCOST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_PurchasePlayCountHardStageCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_PURCHASEPLAYCOUNTHARDSTAGECOST_OFFSET))(nullptr);
		}

		::System::Void set_PurchasePlayCountHardStageCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_PURCHASEPLAYCOUNTHARDSTAGECOST_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMap* get_HexaTileMap()
		{
			return (return (::MX::Campaign::HexaTileMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_HEXATILEMAP_OFFSET))(nullptr);
		}

		::System::Void set_HexaTileMap(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_HEXATILEMAP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StarConditionTurnCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STARCONDITIONTURNCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StarConditionTurnCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STARCONDITIONTURNCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StarConditionSTacticRackCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STARCONDITIONSTACTICRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_StarConditionSTacticRackCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STARCONDITIONSTACTICRACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RewardUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_REWARDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RewardUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_REWARDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TacticRewardPlayerExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_TACTICREWARDPLAYEREXP_OFFSET))(nullptr);
		}

		::System::Void set_TacticRewardPlayerExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_TACTICREWARDPLAYEREXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TacticRewardExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_TACTICREWARDEXP_OFFSET))(nullptr);
		}

		::System::Void set_TacticRewardExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_TACTICREWARDEXP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowClearDeckButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STAGEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_StageReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STAGEREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplayReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_DISPLAYREWARD_OFFSET))(nullptr);
		}

		::System::Void set_DisplayReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_DISPLAYREWARD_OFFSET))(arg, nullptr);
		}

		::FlatData::StrategyEnvironment* get_StrategyEnvironment()
		{
			return (return (::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Void set_StrategyEnvironment(::FlatData::StrategyEnvironment* arg)
		{
			((::System::Void(*)(::FlatData::StrategyEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_STRATEGYENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Void set_GroundId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_GROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StrategySkipGroundId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_STRATEGYSKIPGROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_BattleDuration(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_BATTLEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_BGMId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_BGMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_FIXEDECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsEventContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_ISEVENTCONTENT_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_EnterParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_ENTERPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_EnterParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_ENTERPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDeprecated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_ISDEPRECATED_OFFSET))(nullptr);
		}

		::System::Void set_IsDeprecated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_ISDEPRECATED_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::CampaignChapterInfo* arg, ::MX::Data::CampaignChapterInfo* arg, ::MX::Data::Excel::CampaignStageExcel* arg, Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelCost* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::MX::Data::CampaignChapterInfo*, ::MX::Data::Excel::CampaignStageExcel*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CampaignStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CampaignStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetStageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GETSTAGENAME_OFFSET))(nullptr);
		}

		::System::String* GetStageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GETSTAGENUMBER_OFFSET))(nullptr);
		}

		::System::String* GetInProgressChapter()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_GETINPROGRESSCHAPTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAMPAIGNSTAGEINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

