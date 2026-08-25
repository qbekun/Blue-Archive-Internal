#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data { class WorldRaidStageInfo; }
namespace MX::Data { class WorldRaidSeasonInfo&; }
namespace MX::Data { class WorldRaidStageInfo&; }
namespace MX::Data { class WorldRaidBossGroupInfo&; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelCost&; }
namespace MX::Data { class WorldRaidFavorBuffInfo&; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace MX::Data { class WorldRaidRegionInfo; }

#define MX_DATA_WORLDRAIDDATA_GET_ALLSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x19706A0)
#define MX_DATA_WORLDRAIDDATA_WORLDRAIDSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1970700)
#define MX_DATA_WORLDRAIDDATA_WORLDRAIDSTAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1970810)
#define MX_DATA_WORLDRAIDDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x1970920)
#define MX_DATA_WORLDRAIDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1971800)
#define MX_DATA_WORLDRAIDDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19719F0)
#define MX_DATA_WORLDRAIDDATA_SETTIMETABLEFROMEVENT_OFFSET UNITYSDK_OFFSET(0x19709C0)
#define MX_DATA_WORLDRAIDDATA_EXTRACTDATAFROMRAWEXCELS_OFFSET UNITYSDK_OFFSET(0x1970940)
#define MX_DATA_WORLDRAIDDATA_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1976750)
#define MX_DATA_WORLDRAIDDATA_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1976870)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1976960)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1976A80)
#define MX_DATA_WORLDRAIDDATA_TRYGETPHASEINFO_OFFSET UNITYSDK_OFFSET(0x1976B40)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1976CA0)
#define MX_DATA_WORLDRAIDDATA_TRYGETNEXTPHASESEASON_OFFSET UNITYSDK_OFFSET(0x1976E00)
#define MX_DATA_WORLDRAIDDATA_TRYGETOPENSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1976F90)
#define MX_DATA_WORLDRAIDDATA_TRYGETOPENSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19770F0)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1977210)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOBYSTARTCONDITION_OFFSET UNITYSDK_OFFSET(0x1977330)
#define MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1977470)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1977600)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1977670)
#define MX_DATA_WORLDRAIDDATA_GETSTAGEBYGROUNDID_OFFSET UNITYSDK_OFFSET(0x1977780)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFOSBYSEASONID_OFFSET UNITYSDK_OFFSET(0x1977930)
#define MX_DATA_WORLDRAIDDATA_TRYGETGROUPINFO_OFFSET UNITYSDK_OFFSET(0x1977B60)
#define MX_DATA_WORLDRAIDDATA_TRYGETLINKEDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1977BD0)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFOSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1977C30)
#define MX_DATA_WORLDRAIDDATA_TRYGETSCENARIOBOSSINFOBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1977DB0)
#define MX_DATA_WORLDRAIDDATA_TRYGETPREVIOUSSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1977F30)
#define MX_DATA_WORLDRAIDDATA_GETSCENARIOBOSSIDS_OFFSET UNITYSDK_OFFSET(0x19780E0)
#define MX_DATA_WORLDRAIDDATA_GETSCENARIOBOSSIDS_OFFSET UNITYSDK_OFFSET(0x1978350)
#define MX_DATA_WORLDRAIDDATA_CONTAINSCENARIOBOSS_OFFSET UNITYSDK_OFFSET(0x1978580)
#define MX_DATA_WORLDRAIDDATA_TRYGETLOCALBOSSMAXHP_OFFSET UNITYSDK_OFFSET(0x1978760)
#define MX_DATA_WORLDRAIDDATA_GETALLBOSSINDEXHPDIC_OFFSET UNITYSDK_OFFSET(0x1978920)
#define MX_DATA_WORLDRAIDDATA_GETRAIDSTAGEMAXHITPOINT_OFFSET UNITYSDK_OFFSET(0x1978BA0)
#define MX_DATA_WORLDRAIDDATA_TRYGETLASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1978C50)
#define MX_DATA_WORLDRAIDDATA_TRYGETBOSSCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1978D70)
#define MX_DATA_WORLDRAIDDATA_USERAIDBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1978E70)
#define MX_DATA_WORLDRAIDDATA_TRYGETREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x1978F00)
#define MX_DATA_WORLDRAIDDATA_ANYSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1978F60)
#define MX_DATA_WORLDRAIDDATA_GETWORLDRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x19790D0)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGEENTERCOST_OFFSET UNITYSDK_OFFSET(0x1979220)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGECONTINUECOST_OFFSET UNITYSDK_OFFSET(0x19792E0)
#define MX_DATA_WORLDRAIDDATA_TRYGETSTAGECOST_OFFSET UNITYSDK_OFFSET(0x19793A0)
#define MX_DATA_WORLDRAIDDATA_TRYGETFAVORBUFFINFOLBYRANK_OFFSET UNITYSDK_OFFSET(0x19794A0)
#define MX_DATA_WORLDRAIDDATA_GETINTERACTIVEWORLDRAIDBOSSMAXHP_OFFSET UNITYSDK_OFFSET(0x1979500)
#define MX_DATA_WORLDRAIDDATA_GETWORLDRAIDREGIONINFO_OFFSET UNITYSDK_OFFSET(0x19798D0)
#define MX_DATA_WORLDRAIDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19799B0)
#define MX_DATA_WORLDRAIDDATA__EXTRACTDATAFROMRAWEXCELS_G__BUILDCOST|18_0_OFFSET UNITYSDK_OFFSET(0x1975A90)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidData_TypeDefinitionIndex = 16490;

	class WorldRaidData : public Il2CppObject
	{
	public:
		Il2CppObject* stageInfoDic; // 0x28
		Il2CppObject* seasonInfoDic; // 0x30
		Il2CppObject* bossGroupInfoDic; // 0x38
		Il2CppObject* linkGroupIdToBossGroupIds; // 0x40
		Il2CppObject* rewardInfoDic; // 0x48
		Il2CppObject* favorBuffDic; // 0x50
		Il2CppObject* stageEnterCostDic; // 0x58
		Il2CppObject* stageContinueCostDic; // 0x60
		Il2CppObject* regionInfoList; // 0x68

		Il2CppObject* get_AllSeasonInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GET_ALLSEASONINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* WorldRaidSeasonInfos(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_WORLDRAIDSEASONINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* WorldRaidStageInfos(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_WORLDRAIDSTAGEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void SetTimeTableFromEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_SETTIMETABLEFROMEVENT_OFFSET))(nullptr);
		}

		::System::Void ExtractDataFromRawExcels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_EXTRACTDATAFROMRAWEXCELS_OFFSET))(nullptr);
		}

		::MX::Data::WorldRaidStageInfo* GetStage(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::WorldRaidStageInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETSTAGE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::WorldRaidStageInfo* GetStage(::System::Int64 arg)
		{
			return (return (::MX::Data::WorldRaidStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfo(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPhaseInfo(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETPHASEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfos(::FlatData::ContentType* arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetNextPhaseSeason(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETNEXTPHASESEASON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetOpenSeasonInfos(::System::DateTime* arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETOPENSEASONINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetOpenSeasonInfo(::System::DateTime* arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETOPENSEASONINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfoByEventContentId(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOBYEVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfoByStartCondition(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::Data::WorldRaidSeasonInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::MX::Data::WorldRaidSeasonInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOBYSTARTCONDITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonInfos(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSEASONINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetStageInfo(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetStageInfo(::System::Int64 arg, ::MX::Data::WorldRaidStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::WorldRaidStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::WorldRaidStageInfo* GetStageByGroundId(::System::Int64 arg)
		{
			return (return (::MX::Data::WorldRaidStageInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETSTAGEBYGROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStageInfosBySeasonId(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFOSBYSEASONID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGroupInfo(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidBossGroupInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidBossGroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETGROUPINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetLinkedGroupIds(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETLINKEDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStageInfosByGroupId(::FlatData::ContentType* arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGEINFOSBYGROUPID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetScenarioBossInfoByGroupId(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSCENARIOBOSSINFOBYGROUPID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPreviousStageInfo(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::WorldRaidStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::WorldRaidStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETPREVIOUSSTAGEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetScenarioBossIds(::FlatData::ContentType* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETSCENARIOBOSSIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetScenarioBossIds(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETSCENARIOBOSSIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainScenarioBoss(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_CONTAINSCENARIOBOSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLocalBossMaxHP(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETLOCALBOSSMAXHP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllBossIndexHPDic(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETALLBOSSINDEXHPDIC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRaidStageMaxHitPoint(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETRAIDSTAGEMAXHITPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLastBossIndex(::FlatData::ContentType* arg, ::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETLASTBOSSINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetBossCharacterCount(::FlatData::ContentType* arg, ::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETBOSSCHARACTERCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UseRaidBossAIPhaseSync(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_USERAIDBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetRewardInfos(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETREWARDINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AnySeasonOpen(::FlatData::CurrencyTypes* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::CurrencyTypes*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_ANYSEASONOPEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetWorldRaidBossGroup()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETWORLDRAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStageEnterCost(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelCost&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGEENTERCOST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetStageContinueCost(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelCost&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGECONTINUECOST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetStageCost(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::MX::GameLogic::Parcel::ParcelCost&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETSTAGECOST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetFavorBuffInfolByRank(::System::Int64 arg, ::MX::Data::WorldRaidFavorBuffInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::WorldRaidFavorBuffInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_TRYGETFAVORBUFFINFOLBYRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetInteractiveWorldRaidBossMaxHp(::MX::Data::WorldRaidBossGroupInfo* arg)
		{
			return (return (::System::Int64(*)(::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETINTERACTIVEWORLDRAIDBOSSMAXHP_OFFSET))(arg, nullptr);
		}

		::MX::Data::WorldRaidRegionInfo* GetWorldRaidRegionInfo(::System::String* str)
		{
			return (return (::MX::Data::WorldRaidRegionInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_GETWORLDRAIDREGIONINFO_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ExtractDataFromRawExcels_g__BuildCost|18_0(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDDATA__EXTRACTDATAFROMRAWEXCELS_G__BUILDCOST|18_0_OFFSET))(arg, nullptr);
		}

	};
}

