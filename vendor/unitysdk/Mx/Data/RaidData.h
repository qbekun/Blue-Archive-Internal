#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ContentType; }
namespace MX::Data { class RaidStageInfo; }
namespace MX::Data { class RaidStageInfo&; }
namespace FlatData { class EchelonType; }
namespace FlatData { class Difficulty; }
namespace MX::Data { class RaidSeasonInfo; }
namespace MX::Data { class RaidSeasonRewardInfo; }
namespace MX::Data { class RaidLimitedRewardInfo; }
namespace FlatData { class Difficulty&; }
namespace MX::Data { class RaidRankingRewardInfo; }
namespace FlatData { class RaidBossGroupType; }
namespace MX::Data::Excel { class PermanentRaidManageExcel&; }

#define MX_DATA_RAIDDATA_GET_RANKINGLISTPAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1926F30)
#define MX_DATA_RAIDDATA_GET_MYRANKINGLISTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1926FC0)
#define MX_DATA_RAIDDATA_GETRAIDENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1927050)
#define MX_DATA_RAIDDATA_GETRAIDSTAGEBYGROUNDID_OFFSET UNITYSDK_OFFSET(0x19271B0)
#define MX_DATA_RAIDDATA_GETALLSTAGEINFOS_OFFSET UNITYSDK_OFFSET(0x19272B0)
#define MX_DATA_RAIDDATA_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1927130)
#define MX_DATA_RAIDDATA_TRYGETSTAGE_OFFSET UNITYSDK_OFFSET(0x19273D0)
#define MX_DATA_RAIDDATA_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1927440)
#define MX_DATA_RAIDDATA_GETBOSSGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x19275D0)
#define MX_DATA_RAIDDATA_GETBOSSGROUPINDEX_OFFSET UNITYSDK_OFFSET(0x1927770)
#define MX_DATA_RAIDDATA_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1927880)
#define MX_DATA_RAIDDATA_GETSTAGELIST_OFFSET UNITYSDK_OFFSET(0x19279A0)
#define MX_DATA_RAIDDATA_GETSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1927AD0)
#define MX_DATA_RAIDDATA_GETOPENSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1927CB0)
#define MX_DATA_RAIDDATA_GETSETTLEMENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1927F10)
#define MX_DATA_RAIDDATA_GETLASTSETTLEMENTFINISHEDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1928170)
#define MX_DATA_RAIDDATA_GETCURRENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19282C0)
#define MX_DATA_RAIDDATA_GETCURRENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19287C0)
#define MX_DATA_RAIDDATA_GETCLOSESEASONINFO_OFFSET UNITYSDK_OFFSET(0x1928580)
#define MX_DATA_RAIDDATA_GETNEXTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1929550)
#define MX_DATA_RAIDDATA_GETRAIDSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1927550)
#define MX_DATA_RAIDDATA_GETSEASONREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1929730)
#define MX_DATA_RAIDDATA_GETLIMITEDREWARDINFO_OFFSET UNITYSDK_OFFSET(0x19297B0)
#define MX_DATA_RAIDDATA_GETDIFFICULTYOPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1929830)
#define MX_DATA_RAIDDATA_TRYGETMAXDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1929960)
#define MX_DATA_RAIDDATA_GETRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x19276E0)
#define MX_DATA_RAIDDATA_USERAIDBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1929BB0)
#define MX_DATA_RAIDDATA_USERAIDBOSSAIPHASESYNC_OFFSET UNITYSDK_OFFSET(0x1929C40)
#define MX_DATA_RAIDDATA_GETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1929CD0)
#define MX_DATA_RAIDDATA_TRYGETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1929D60)
#define MX_DATA_RAIDDATA_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1929E00)
#define MX_DATA_RAIDDATA_BOSSCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1929EA0)
#define MX_DATA_RAIDDATA_GETRAIDBOSSMAXHP_OFFSET UNITYSDK_OFFSET(0x1929F30)
#define MX_DATA_RAIDDATA_GETALLBOSSINDEXHPDIC_OFFSET UNITYSDK_OFFSET(0x192A0D0)
#define MX_DATA_RAIDDATA_GETRAIDSTAGEMAXHITPOINT_OFFSET UNITYSDK_OFFSET(0x192A2F0)
#define MX_DATA_RAIDDATA_GETBOSSNAME_OFFSET UNITYSDK_OFFSET(0x192A3A0)
#define MX_DATA_RAIDDATA_GETBOSSNICKNAME_OFFSET UNITYSDK_OFFSET(0x192A440)
#define MX_DATA_RAIDDATA_GETRANKINGREWARDINFO_OFFSET UNITYSDK_OFFSET(0x192A4E0)
#define MX_DATA_RAIDDATA_GETRANKINGREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0x192A6D0)
#define MX_DATA_RAIDDATA_GETDEFAULTRANKINGREWARDINFO_OFFSET UNITYSDK_OFFSET(0x192A7C0)
#define MX_DATA_RAIDDATA_TRYGETBOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x192A9F0)
#define MX_DATA_RAIDDATA_FINDCONTENTTYPESEASONIDFROMTROPHYFURNITUREID_OFFSET UNITYSDK_OFFSET(0x192AC70)
#define MX_DATA_RAIDDATA_FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID_OFFSET UNITYSDK_OFFSET(0x192AD30)
#define MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDMANAGE_OFFSET UNITYSDK_OFFSET(0x192AE10)
#define MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDMANAGEALL_OFFSET UNITYSDK_OFFSET(0x192AE70)
#define MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDDIFFICULTYLOCKED_OFFSET UNITYSDK_OFFSET(0x192AEF0)
#define MX_DATA_RAIDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x192AF50)
#define MX_DATA_RAIDDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1928DB0)
#define MX_DATA_RAIDDATA_LOADRAIDDATA_OFFSET UNITYSDK_OFFSET(0x192B0E0)
#define MX_DATA_RAIDDATA_LOADELIMINATERAIDDATA_OFFSET UNITYSDK_OFFSET(0x192C1C0)
#define MX_DATA_RAIDDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x192D450)
#define MX_DATA_RAIDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x192EC20)

namespace MX::Data
{
	inline static constexpr unsigned int RaidData_TypeDefinitionIndex = 16329;

	class RaidData : public Il2CppObject
	{
	public:
		Il2CppObject* seasonInfoDic; // 0x28
		Il2CppObject* raidStageInfoDic; // 0x30
		Il2CppObject* seasonRewardInfoDic; // 0x38
		Il2CppObject* limitedRewardInfoDic; // 0x40
		Il2CppObject* rankingRewardInfos; // 0x48
		Il2CppObject* seasonIdsByRewardGroupId; // 0x50
		::System::Boolean isRaidSeasonDataChanged; // 0x58
		Il2CppObject* stageDic; // 0x60
		Il2CppObject* seasonDic; // 0x68
		Il2CppObject* stageRewardDic; // 0x70
		Il2CppObject* seasonRewardDic; // 0x78
		Il2CppObject* eliminateStageDic; // 0x80
		Il2CppObject* eliminateSeasonDic; // 0x88
		Il2CppObject* eliminateStageRewardDic; // 0x90
		Il2CppObject* eliminateSeasonRewardDic; // 0x98
		Il2CppObject* eliminateLimitedRewardDic; // 0xA0
		Il2CppObject* permanentRaidManageDic; // 0xA8
		Il2CppObject* permanentRaidHideDifficultyDic; // 0xB0

		::System::Int64 get_RankingListPageAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GET_RANKINGLISTPAGEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_MyRankingListAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GET_MYRANKINGLISTAMOUNT_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetRaidEnterParcelInfo(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDENTERPARCELINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidStageInfo* GetRaidStageByGroundId(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidStageInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDSTAGEBYGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllStageInfos(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETALLSTAGEINFOS_OFFSET))(arg, nullptr);
		}

		::MX::Data::RaidStageInfo* GetStage(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidStageInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSTAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStage(::FlatData::ContentType* arg, ::System::Int64 arg, ::MX::Data::RaidStageInfo&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::MX::Data::RaidStageInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETSTAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonType(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::FlatData::EchelonType*(*)(::FlatData::ContentType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETECHELONTYPE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 GetBossGroupIndex(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETBOSSGROUPINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetBossGroupIndex(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETBOSSGROUPINDEX_OFFSET))(arg, arg, str, nullptr);
		}

		::MX::Data::RaidStageInfo* GetStage(::FlatData::ContentType* arg, ::System::String* str, ::FlatData::Difficulty* arg)
		{
			return (return (::MX::Data::RaidStageInfo*(*)(::FlatData::ContentType*, ::System::String*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSTAGE_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* GetStageList(::FlatData::ContentType* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSTAGELIST_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetSeasonInfos(::FlatData::ContentType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSEASONINFOS_OFFSET))(arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetOpenSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::FlatData::ContentType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETOPENSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetSettlementSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::FlatData::ContentType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSETTLEMENTSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetLastSettlementFinishedSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::FlatData::ContentType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETLASTSETTLEMENTFINISHEDSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCurrentSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETCURRENTSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCurrentSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETCURRENTSEASONINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetCloseSeasonInfo(::FlatData::ContentType* arg, ::System::DateTime* arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::FlatData::ContentType*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETCLOSESEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetNextSeasonInfo(::MX::Data::RaidSeasonInfo* arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::MX::Data::RaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETNEXTSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::RaidSeasonInfo* GetRaidSeasonInfo(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidSeasonInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidSeasonRewardInfo* GetSeasonRewardInfo(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidSeasonRewardInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETSEASONREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidLimitedRewardInfo* GetLimitedRewardInfo(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidLimitedRewardInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETLIMITEDREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetDifficultyOpenConditions(::FlatData::ContentType* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETDIFFICULTYOPENCONDITIONS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean TryGetMaxDifficulty(::FlatData::ContentType* arg, ::System::String* str, ::FlatData::Difficulty&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::String*, ::FlatData::Difficulty&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETMAXDIFFICULTY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* GetRaidBossGroup(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::String*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UseRaidBossIndex(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_USERAIDBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UseRaidBossAIPhaseSync(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_USERAIDBOSSAIPHASESYNC_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::Difficulty* GetDifficulty(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::FlatData::Difficulty*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDifficulty(::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatData::Difficulty&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ContentType*, ::System::Int64, ::FlatData::Difficulty&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETDIFFICULTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 LastBossIndex(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_LASTBOSSINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 BossCharacterCount(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_BOSSCHARACTERCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRaidBossMaxHP(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDBOSSMAXHP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetAllBossIndexHPDic(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETALLBOSSINDEXHPDIC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRaidStageMaxHitPoint(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRAIDSTAGEMAXHITPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetBossName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETBOSSNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetBossNickName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETBOSSNICKNAME_OFFSET))(str, nullptr);
		}

		::MX::Data::RaidRankingRewardInfo* GetRankingRewardInfo(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::MX::Data::RaidRankingRewardInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRANKINGREWARDINFO_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		Il2CppObject* GetRankingRewardInfoList(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETRANKINGREWARDINFOLIST_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::RaidRankingRewardInfo* GetDefaultRankingRewardInfo(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::RaidRankingRewardInfo*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_GETDEFAULTRANKINGREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetBossGroupIds(::MX::Data::RaidStageInfo* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::RaidStageInfo*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETBOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindContentTypeSeasonIdFromTrophyFurnitureId(::FlatData::ContentType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_FINDCONTENTTYPESEASONIDFROMTROPHYFURNITUREID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FilterSeasonRankingHistoryDBByTrophyFurnitureId(::FlatData::ContentType* arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_FILTERSEASONRANKINGHISTORYDBBYTROPHYFURNITUREID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetPermanentRaidManage(::FlatData::RaidBossGroupType* arg, ::MX::Data::Excel::PermanentRaidManageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::RaidBossGroupType*, ::MX::Data::Excel::PermanentRaidManageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDMANAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPermanentRaidManageAll(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDMANAGEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPermanentRaidDifficultyLocked(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_TRYGETPERMANENTRAIDDIFFICULTYLOCKED_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void LoadRaidData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_LOADRAIDDATA_OFFSET))(nullptr);
		}

		::System::Void LoadEliminateRaidData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_LOADELIMINATERAIDDATA_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

