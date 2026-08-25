#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class CampaignMainStageEndSummary;
namespace MX::Campaign { class Strategy; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::DBModel { class EventContentBonusRewardDB; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::NetworkProtocol { class EventContentAdventureListResponse; }
namespace MX::Campaign::HexaTileMapEvent { class StrategyClearRewardInfo; }
namespace MX::Data { class EventContentSeasonInfo; }

#define EVENTCONTENTOBJECT_SYNCSUBSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D17500)
#define EVENTCONTENTOBJECT_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x1D17510)
#define EVENTCONTENTOBJECT_SYNCSTAGEPOINTANDREWRDHISTORYFROMOTHERCONTENT_OFFSET UNITYSDK_OFFSET(0x1D17760)
#define EVENTCONTENTOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D17800)
#define EVENTCONTENTOBJECT_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1D17F30)
#define EVENTCONTENTOBJECT_CACHESTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0x1D17E90)
#define EVENTCONTENTOBJECT_CLEARMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D17F40)
#define EVENTCONTENTOBJECT_ISFIRSTCLEAR_OFFSET UNITYSDK_OFFSET(0x1D17F80)
#define EVENTCONTENTOBJECT_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1D180A0)
#define EVENTCONTENTOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0x1D17860)
#define EVENTCONTENTOBJECT_FINDBONUSREWARD_OFFSET UNITYSDK_OFFSET(0x1D18740)
#define EVENTCONTENTOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1D18830)
#define EVENTCONTENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D18A10)
#define EVENTCONTENTOBJECT_PROCESSCAMPAIGNMANSTAGEEND_OFFSET UNITYSDK_OFFSET(0x1D180B0)
#define EVENTCONTENTOBJECT_SYNCALREADYRECEIVEREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1D18B80)
#define EVENTCONTENTOBJECT_ISCLEAREDEVER_OFFSET UNITYSDK_OFFSET(0x1D18C10)
#define EVENTCONTENTOBJECT_ISCLEAREDEVERANYSTAGE_OFFSET UNITYSDK_OFFSET(0x1D18D00)
#define EVENTCONTENTOBJECT_CHECKCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1D18E20)

	inline static constexpr unsigned int EventContentObject_TypeDefinitionIndex = 1645;

	class EventContentObject : public Il2CppObject
	{
	public:
		Il2CppObject* StageHistoryList; // 0x10
		Il2CppObject* StrategyObjectHistoryList; // 0x18
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* MainStageSave; // 0x20
		CampaignMainStageEndSummary* MainStageEndSummary; // 0x28
		Il2CppObject* _RetreatRewardParcels_k__BackingField; // 0x30
		::MX::Campaign::Strategy* CampaignStrategyObjectInfo; // 0x38
		::MX::GameLogic::Parcel::ParcelInfo* CampaignStrategyObjectReward; // 0x40
		::MX::GameLogic::DBModel::CampaignSubStageSaveDB* SubStageSave; // 0x48
		::System::Int64 LatestClearStageId; // 0x50
		Il2CppObject* AlreadyReceiveRewardIdList; // 0x58
		::System::Int64 StagePoint; // 0x60
		Il2CppObject* BonusRewardList; // 0x68

		::System::Void SyncSubStageSaveData(::MX::GameLogic::DBModel::CampaignSubStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignSubStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNCSUBSTAGESAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNCHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncStagePointAndRewrdHistoryFromOtherContent(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNCSTAGEPOINTANDREWRDHISTORYFROMOTHERCONTENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncMainStageSaveData(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::SessionKey* arg2, ::MX::NetworkProtocol::Protocol* arg3, ::MX::Campaign::Strategy* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void CacheStrategyObject(::MX::Campaign::Strategy* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_CACHESTRATEGYOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearMainStageSaveData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_CLEARMAINSTAGESAVEDATA_OFFSET))(nullptr);
		}

		::System::Boolean IsFirstClear(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_ISFIRSTCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCampaignMainstageEndSummary(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::NetworkProtocol::Protocol* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentBonusRewardDB* FindBonusReward(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			return ((::MX::GameLogic::DBModel::EventContentBonusRewardDB*(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_FINDBONUSREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::EventContentAdventureListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentAdventureListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ProcessCampaignManstageEnd(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo* arg, ::MX::GameLogic::DBModel::SessionKey* arg2, ::MX::NetworkProtocol::Protocol* arg3)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexaTileMapEvent::StrategyClearRewardInfo*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_PROCESSCAMPAIGNMANSTAGEEND_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncAlreadyReceiveRewardIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_SYNCALREADYRECEIVEREWARDIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClearedEver(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_ISCLEAREDEVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClearedEverAnyStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_ISCLEAREDEVERANYSTAGE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCloseTime(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTOBJECT_CHECKCLOSETIME_OFFSET))(arg, nullptr);
		}

	};

