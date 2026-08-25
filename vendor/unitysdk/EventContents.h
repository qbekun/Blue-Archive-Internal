#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignSubStageSaveDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::Campaign { class Strategy; }
namespace MX::NetworkProtocol { class EventContentPermanentListResponse; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::DBModel { class EventContentPermanentDB; }
namespace MX::NetworkProtocol { class EventContentAdventureListResponse; }
namespace MX::GameLogic::DBModel { class EventContentBoxGachaDB; }
namespace MX::Data { class EventContentSeasonInfo; }
class EventContentObject;
namespace MX::GameLogic::DBModel { class EventContentBonusRewardDB; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define EVENTCONTENTS_SYNCSUBSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D19420)
#define EVENTCONTENTS_CLEARBOXGACHAPROGRESSES_OFFSET UNITYSDK_OFFSET(0x1D194C0)
#define EVENTCONTENTS_SYNCMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D19510)
#define EVENTCONTENTS_TRYGETBOXGACHAPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D19610)
#define EVENTCONTENTS_SYNCPERMANENT_OFFSET UNITYSDK_OFFSET(0x1D19670)
#define EVENTCONTENTS_SYNCALREADYRECEIVEREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1D19870)
#define EVENTCONTENTS_TRYGETSTAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1D19910)
#define EVENTCONTENTS_ISCLEAREDEVERANYSTAGE_OFFSET UNITYSDK_OFFSET(0x1D19D80)
#define EVENTCONTENTS_CLEARMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D19E10)
#define EVENTCONTENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D19EC0)
#define EVENTCONTENTS_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x1D19FE0)
#define EVENTCONTENTS_ISCLEAREDEVER_OFFSET UNITYSDK_OFFSET(0x1D1A080)
#define EVENTCONTENTS_SYNCSTAGEPOINTANDREWARDHISTORYFROMOTHERCONTENT_OFFSET UNITYSDK_OFFSET(0x1D1A120)
#define EVENTCONTENTS_GETPERMANENT_OFFSET UNITYSDK_OFFSET(0x1D1A1F0)
#define EVENTCONTENTS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1A270)
#define EVENTCONTENTS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D1A310)
#define EVENTCONTENTS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D19CE0)
#define EVENTCONTENTS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1A360)
#define EVENTCONTENTS_SYNC_OFFSET UNITYSDK_OFFSET(0x1D1A400)
#define EVENTCONTENTS_SYNCBOXGACHADB_OFFSET UNITYSDK_OFFSET(0x1D1A4F0)
#define EVENTCONTENTS_CONTAINSBOXGACHAPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D1A960)
#define EVENTCONTENTS_CHECKCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1D1A9B0)
#define EVENTCONTENTS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D0B730)
#define EVENTCONTENTS_FINDBONUSREWARD_OFFSET UNITYSDK_OFFSET(0x1D1ABB0)

	inline static constexpr unsigned int EventContents_TypeDefinitionIndex = 1650;

	class EventContents : public Il2CppObject
	{
	public:
		Il2CppObject* contentDict; // 0x10
		Il2CppObject* permanentDict; // 0x18
		Il2CppObject* boxGachaProgresses; // 0x20

		::System::Void SyncSubStageSaveData(::System::Int64 arg, ::MX::GameLogic::DBModel::CampaignSubStageSaveDB* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::CampaignSubStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCSUBSTAGESAVEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearBoxGachaProgresses()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_CLEARBOXGACHAPROGRESSES_OFFSET))(nullptr);
		}

		::System::Void SyncMainStageSaveData(::System::Int64 arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2, ::MX::GameLogic::DBModel::SessionKey* arg3, ::MX::NetworkProtocol::Protocol* arg4, ::MX::Campaign::Strategy* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::Campaign::Strategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCMAINSTAGESAVEDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean TryGetBoxGachaProgress(::System::Int64 arg, EventContentBoxGachaProgress&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, EventContentBoxGachaProgress&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_TRYGETBOXGACHAPROGRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncPermanent(::MX::NetworkProtocol::EventContentPermanentListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentPermanentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncAlreadyReceiveRewardIdList(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCALREADYRECEIVEREWARDIDLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetStageHistory(::System::Int64 arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::CampaignStageHistoryDB&*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_TRYGETSTAGEHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsClearedEverAnyStage(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_ISCLEAREDEVERANYSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMainStageSaveData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_CLEARMAINSTAGESAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncHistory(::System::Int64 arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCHISTORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsClearedEver(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_ISCLEAREDEVER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncStagePointAndRewardHistoryFromOtherContent(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCSTAGEPOINTANDREWARDHISTORYFROMOTHERCONTENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentPermanentDB* GetPermanent(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::EventContentPermanentDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_GETPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_CONTAINS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Sync(::System::Int64 arg, ::MX::NetworkProtocol::EventContentAdventureListResponse* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::NetworkProtocol::EventContentAdventureListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncBoxGachaDB(::System::Int64 arg, ::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::EventContentBoxGachaDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_SYNCBOXGACHADB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean ContainsBoxGachaProgress(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_CONTAINSBOXGACHAPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCloseTime(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_CHECKCLOSETIME_OFFSET))(arg, nullptr);
		}

		EventContentObject* get_Item(::System::Int64 arg)
		{
			return ((EventContentObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentBonusRewardDB* FindBonusReward(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			return ((::MX::GameLogic::DBModel::EventContentBonusRewardDB*(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTS_FINDBONUSREWARD_OFFSET))(arg, arg2, nullptr);
		}

	};

