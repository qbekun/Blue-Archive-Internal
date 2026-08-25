#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class CampaignMainStageEndSummary;
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignTutorialStageSaveDB; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::Campaign::HexaTileMapEvent { class StrategyClearRewardInfo; }
namespace MX::GameLogic::DBModel { class CampaignChapterClearRewardHistoryDB; }
namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class CampaignListResponse; }

#define CAMPAIGNOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0xE4F1E0)
#define CAMPAIGNOBJECT_ISFIRSTCLEAR_OFFSET UNITYSDK_OFFSET(0xE4F920)
#define CAMPAIGNOBJECT_CLEARMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0xE4FA40)
#define CAMPAIGNOBJECT_PROCESSCAMPAIGNMANSTAGEEND_OFFSET UNITYSDK_OFFSET(0xE4FA80)
#define CAMPAIGNOBJECT_SET_CURSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xE501F0)
#define CAMPAIGNOBJECT_CACHESTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xE4F880)
#define CAMPAIGNOBJECT_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xE50200)
#define CAMPAIGNOBJECT_SYNCCHAPTERCLEARREWARDHISTORY_OFFSET UNITYSDK_OFFSET(0xE50450)
#define CAMPAIGNOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE50550)
#define CAMPAIGNOBJECT_GET_CURSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xE50620)
#define CAMPAIGNOBJECT_ISCLEAREDEVER_OFFSET UNITYSDK_OFFSET(0xE50630)
#define CAMPAIGNOBJECT_CANRECEIVECHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0xE50720)
#define CAMPAIGNOBJECT_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xE50790)
#define CAMPAIGNOBJECT_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xE507A0)
#define CAMPAIGNOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0xE507B0)
#define CAMPAIGNOBJECT_SENDTOYFUNNEL_OFFSET UNITYSDK_OFFSET(0xE508D0)
#define CAMPAIGNOBJECT_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xE50B00)
#define CAMPAIGNOBJECT_GETHISTORY_OFFSET UNITYSDK_OFFSET(0xE50660)
#define CAMPAIGNOBJECT_SYNCSUBSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0xE50B20)
#define CAMPAIGNOBJECT_ISCHAPTERREWARED_OFFSET UNITYSDK_OFFSET(0xE50B30)
#define CAMPAIGNOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0xE4F240)
#define CAMPAIGNOBJECT_SYNCTUTORIALSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0xE50B90)

	inline static constexpr unsigned int CampaignObject_TypeDefinitionIndex = 765;

	class CampaignObject : public Il2CppObject
	{
	public:
		Il2CppObject* campaignChapterClearRewardHistoryDBList; // 0x10
		Il2CppObject* StageHistoryDBs; // 0x18
		Il2CppObject* StrategyObjectHistoryDBs; // 0x20
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* MainStageSaveData; // 0x28
		CampaignMainStageEndSummary* MainStageEndSummary; // 0x30
		Il2CppObject* _RetreatRewardParcels_k__BackingField; // 0x38
		::MX::Campaign::Strategy* CampaignStrategyObjectInfo; // 0x40
		::MX::GameLogic::Parcel::ParcelInfo* CampaignStrategyObjectReward; // 0x48
		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* SubStageSaveData; // 0x50
		::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* TutorialStageSaveData; // 0x58
		::MX::Data::CampaignStageInfo* _CurStageInfo_k__BackingField; // 0x60
		::System::Int64 LatestClearStageId; // 0x68

		::System::Void SyncMainStageSaveData(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::SessionKey* arg2, ::MX::NetworkProtocol::Protocol* arg3, ::MX::Campaign::Strategy* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsFirstClear(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_ISFIRSTCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMainStageSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_CLEARMAINSTAGESAVEDATA_OFFSET))(nullptr);
		}

		Il2CppObject* ProcessCampaignManstageEnd(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo* arg, ::MX::GameLogic::DBModel::SessionKey* arg2, ::MX::NetworkProtocol::Protocol* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_PROCESSCAMPAIGNMANSTAGEEND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_CurStageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SET_CURSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void CacheStrategyObject(::MX::Campaign::Strategy* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_CACHESTRATEGYOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNCHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncChapterClearRewardHistory(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignChapterClearRewardHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNCCHAPTERCLEARREWARDHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_CurStageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_GET_CURSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean IsClearedEver(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_ISCLEAREDEVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveChapterReward(::System::Int64 arg, ::FlatData::StageDifficulty* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_CANRECEIVECHAPTERREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_GET_SHOWREDDOT_OFFSET))(nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::CampaignListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void SendToyFunnel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SENDTOYFUNNEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* GetHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_GETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void SyncSubStageSaveData(::MX::GameLogic::DBModel::CampaignSubStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignSubStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNCSUBSTAGESAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChapterRewared(::System::Int64 arg, ::FlatData::StageDifficulty* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_ISCHAPTERREWARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCampaignMainstageEndSummary(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::NetworkProtocol::Protocol* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncTutorialStageSaveData(::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignTutorialStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNOBJECT_SYNCTUTORIALSTAGESAVEDATA_OFFSET))(arg, nullptr);
		}

	};

