#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class CampaignMainStageEndSummary;
namespace MX::Campaign { class Strategy; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeTypes; }
namespace MX::GameLogic::DBModel { class ScenarioHistoryDB; }
namespace MX::GameLogic::DBModel { class ScenarioGroupHistoryDB; }
namespace FlatData { class ScenarioContentType; }
namespace MX::Data { class EventContentData; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class EventContentType; }
namespace MX::Data::Excel { class ContentsScenarioExcel; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace MX::Data::Excel { class MiniGameDreamReplayScenarioExcel; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOHISTORYOBJECT_GET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x1ED5740)
#define SCENARIOHISTORYOBJECT_SET_NEEDTOSYNC_OFFSET UNITYSDK_OFFSET(0x1ED5750)
#define SCENARIOHISTORYOBJECT_GET_CLEARMODEIDS_OFFSET UNITYSDK_OFFSET(0x1ED5760)
#define SCENARIOHISTORYOBJECT_GET_CLEARMODEDBS_OFFSET UNITYSDK_OFFSET(0x1ED58A0)
#define SCENARIOHISTORYOBJECT_GET_LASTSELECTION_OFFSET UNITYSDK_OFFSET(0x1ED58B0)
#define SCENARIOHISTORYOBJECT_SET_LASTSELECTION_OFFSET UNITYSDK_OFFSET(0x1ED58C0)
#define SCENARIOHISTORYOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED58D0)
#define SCENARIOHISTORYOBJECT_TRYGETLASTSELCTION_OFFSET UNITYSDK_OFFSET(0x1ED5950)
#define SCENARIOHISTORYOBJECT_SETLASTSELECTION_OFFSET UNITYSDK_OFFSET(0x1ED59B0)
#define SCENARIOHISTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1ED5A90)
#define SCENARIOHISTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1ED61D0)
#define SCENARIOHISTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1ED6300)
#define SCENARIOHISTORYOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1ED6420)
#define SCENARIOHISTORYOBJECT_ANYGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ED68D0)
#define SCENARIOHISTORYOBJECT_ANYGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ED69A0)
#define SCENARIOHISTORYOBJECT_ANYEVENTGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ED6B30)
#define SCENARIOHISTORYOBJECT_ANYEVENTGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ED6BF0)
#define SCENARIOHISTORYOBJECT_GETSCENARIOGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1ED6CC0)
#define SCENARIOHISTORYOBJECT_SYNCEVENTGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ED6CD0)
#define SCENARIOHISTORYOBJECT_GETGROUPHISTORYSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1ED6E40)
#define SCENARIOHISTORYOBJECT_GETWORKHISTORYSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1ED7050)
#define SCENARIOHISTORYOBJECT_GETGROUPHISTORIES_OFFSET UNITYSDK_OFFSET(0x1ED6F80)
#define SCENARIOHISTORYOBJECT_GETEVENTGROUPHISTORYSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1ED7160)
#define SCENARIOHISTORYOBJECT_BUILDORIGINALEVENTHISTORIES_OFFSET UNITYSDK_OFFSET(0x1ED5E80)
#define SCENARIOHISTORYOBJECT_TRYADDORIGINALEVENTHISTORY_OFFSET UNITYSDK_OFFSET(0x1ED6670)
#define SCENARIOHISTORYOBJECT_REMOVESPECIALOPERATIONEVENTHISTORY_OFFSET UNITYSDK_OFFSET(0x1ED5C00)
#define SCENARIOHISTORYOBJECT_GETEVENTHISTORYVOLUMES_OFFSET UNITYSDK_OFFSET(0x1ED7370)
#define SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERVOLUMES_OFFSET UNITYSDK_OFFSET(0x1ED7ED0)
#define SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1ED86D0)
#define SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1ED85D0)
#define SCENARIOHISTORYOBJECT_GETWORKHISTORYVOLUMES_OFFSET UNITYSDK_OFFSET(0x1ED8700)
#define SCENARIOHISTORYOBJECT_CLEARED_OFFSET UNITYSDK_OFFSET(0x1ED8BD0)
#define SCENARIOHISTORYOBJECT_CHECKCLEAREDIDSALL_OFFSET UNITYSDK_OFFSET(0x1ED8CB0)
#define SCENARIOHISTORYOBJECT_CHECKCLEAREDIDS_OFFSET UNITYSDK_OFFSET(0x1ED8DE0)
#define SCENARIOHISTORYOBJECT_GETLASTCLEAREDMODEIDFROMSAMEVOLUME_OFFSET UNITYSDK_OFFSET(0x1ED8F50)
#define SCENARIOHISTORYOBJECT_GETLASTCLEAREDMODEIDFROMSAMEVOLUME_OFFSET UNITYSDK_OFFSET(0x1ED9190)
#define SCENARIOHISTORYOBJECT_ISLASTOFMAINCLEARED_OFFSET UNITYSDK_OFFSET(0x1ED93E0)
#define SCENARIOHISTORYOBJECT_ISALLVOLUMECLEARED_OFFSET UNITYSDK_OFFSET(0x1ED97A0)
#define SCENARIOHISTORYOBJECT_NEEDCHECKEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ED98F0)
#define SCENARIOHISTORYOBJECT_GROUPCHECKBYSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1ED9AB0)
#define SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTMINIGAMEPROLOGUESCENARIO_OFFSET UNITYSDK_OFFSET(0x1ED9C20)
#define SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTSCENARIOBYRETURNCHECK_OFFSET UNITYSDK_OFFSET(0x1ED9C40)
#define SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTSCENARIOBYRETURNCHECK_OFFSET UNITYSDK_OFFSET(0x1ED9E20)
#define SCENARIOHISTORYOBJECT_TRYSHOWCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x1ED9F00)
#define SCENARIOHISTORYOBJECT_TRYSHOWCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x1ED9F30)
#define SCENARIOHISTORYOBJECT_NEEDTOSHOWCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EDA110)
#define SCENARIOHISTORYOBJECT_NEEDTOSHOWCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x1ED3420)
#define SCENARIOHISTORYOBJECT_CHECKCONTENTSSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EDA140)
#define SCENARIOHISTORYOBJECT_SENDSAVEGROUPHISTORYREQUEST_OFFSET UNITYSDK_OFFSET(0x1ED3F80)
#define SCENARIOHISTORYOBJECT_GROUPCHECKBYVOLUMEID_OFFSET UNITYSDK_OFFSET(0x1EDA1D0)
#define SCENARIOHISTORYOBJECT_GETEVENTSCENARIOREPLAYGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1EDA330)
#define SCENARIOHISTORYOBJECT_GETNEXTEVENTSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1EDA970)
#define SCENARIOHISTORYOBJECT_CANWATCHEVENTSCENARIORECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EDAF00)
#define SCENARIOHISTORYOBJECT_SHOWEVENTCONTENTRECOLLECTIONREDDOT_OFFSET UNITYSDK_OFFSET(0x1EDB0D0)
#define SCENARIOHISTORYOBJECT_GETEVENTMEETUPHISTORYVOLUMES_OFFSET UNITYSDK_OFFSET(0x1EDB380)
#define SCENARIOHISTORYOBJECT_CANWATCHEVENTSCENARIOREPLAY_OFFSET UNITYSDK_OFFSET(0x1EDB6D0)
#define SCENARIOHISTORYOBJECT_GETEVENTMEETUPGROUPHISTORYSCENARIOIDS_OFFSET UNITYSDK_OFFSET(0x1EDB710)
#define SCENARIOHISTORYOBJECT_ANYEVENTMEETUPGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1ED7DC0)
#define SCENARIOHISTORYOBJECT_ANYEVENTMEETUPGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1EDB900)
#define SCENARIOHISTORYOBJECT_SYNCEVENTMEETUPGROUPHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1EDB9D0)
#define SCENARIOHISTORYOBJECT_GET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1EDBB40)
#define SCENARIOHISTORYOBJECT_SET_RETREATREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x1EDBB50)
#define SCENARIOHISTORYOBJECT_ISFIRSTCLEAR_OFFSET UNITYSDK_OFFSET(0x1EDBB60)
#define SCENARIOHISTORYOBJECT_GETHISTORY_OFFSET UNITYSDK_OFFSET(0x1EDBC80)
#define SCENARIOHISTORYOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1EDBD50)
#define SCENARIOHISTORYOBJECT_CACHESTRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0x1EDC160)
#define SCENARIOHISTORYOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET UNITYSDK_OFFSET(0x1EDBDB0)
#define SCENARIOHISTORYOBJECT_ADDCOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1EDC170)
#define SCENARIOHISTORYOBJECT_HASCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EDC240)
#define SCENARIOHISTORYOBJECT_HASGROUPCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EDC330)
#define SCENARIOHISTORYOBJECT_SHOWSCENARIOCOLLECTIONREDDOT_OFFSET UNITYSDK_OFFSET(0x1EDC410)
#define SCENARIOHISTORYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC730)
#define SCENARIOHISTORYOBJECT__GETWORKHISTORYVOLUMES_G__DISPLAYORDERCOMPARE|42_0_OFFSET UNITYSDK_OFFSET(0x1EDC800)
#define SCENARIOHISTORYOBJECT__GETWORKHISTORYVOLUMES_G__SCENARIOGROUPIDCOMPARE|42_1_OFFSET UNITYSDK_OFFSET(0x1EDC920)
#define SCENARIOHISTORYOBJECT__ISALLVOLUMECLEARED_B__49_0_OFFSET UNITYSDK_OFFSET(0x1EDCA40)

	inline static constexpr unsigned int ScenarioHistoryObject_TypeDefinitionIndex = 1836;

	class ScenarioHistoryObject : public Il2CppObject
	{
	public:
		Il2CppObject* historyDBs; // 0x10
		Il2CppObject* groupHistoryDBs; // 0x18
		Il2CppObject* collectionDBs; // 0x20
		::System::Int64 _AtraHasisConquestEventId; // 0x0
		::System::Int64 LatestClearModeId; // 0x28
		::System::Boolean _NeedToSync_k__BackingField; // 0x30
		Il2CppObject* _LastSelection_k__BackingField; // 0x38
		::System::Boolean IsAutoToggleOn; // 0x40
		Il2CppObject* StageHistoryDBs; // 0x48
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* MainStageSaveData; // 0x50
		CampaignMainStageEndSummary* MainStageEndSummary; // 0x58
		Il2CppObject* _RetreatRewardParcels_k__BackingField; // 0x60
		::MX::Campaign::Strategy* CampaignStrategyObjectInfo; // 0x68
		::System::Boolean IsSkippedStoryStrategy; // 0x70

		::System::Boolean get_NeedToSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GET_NEEDTOSYNC_OFFSET))(nullptr);
		}

		::System::Void set_NeedToSync(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SET_NEEDTOSYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearModeIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GET_CLEARMODEIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClearModeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GET_CLEARMODEDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LastSelection()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GET_LASTSELECTION_OFFSET))(nullptr);
		}

		::System::Void set_LastSelection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SET_LASTSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLastSelction(::FlatData::ScenarioModeSubTypes* arg, MainStoryLastSelection&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeSubTypes*, MainStoryLastSelection&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_TRYGETLASTSELCTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLastSelection(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SETLASTSELECTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Sync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ScenarioHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ScenarioHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyGroupHistoryDBs(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYGROUPHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyGroupHistoryDBs(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYGROUPHISTORYDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AnyEventGroupHistoryDBs(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYEVENTGROUPHISTORYDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AnyEventGroupHistoryDB(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYEVENTGROUPHISTORYDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetScenarioGroupHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETSCENARIOGROUPHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void SyncEventGroupHistoryDB(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNCEVENTGROUPHISTORYDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetGroupHistoryScenarioIds(::FlatData::ScenarioContentType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETGROUPHISTORYSCENARIOIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetWorkHistoryScenarioIds(::FlatData::ScenarioContentType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETWORKHISTORYSCENARIOIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGroupHistories(::FlatData::ScenarioContentType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::ScenarioContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETGROUPHISTORIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEventGroupHistoryScenarioIds(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETEVENTGROUPHISTORYSCENARIOIDS_OFFSET))(arg, nullptr);
		}

		::System::Void BuildOriginalEventHistories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_BUILDORIGINALEVENTHISTORIES_OFFSET))(nullptr);
		}

		::System::Void TryAddOriginalEventHistory(::MX::Data::EventContentData* arg, ::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* arg2, ::System::Int64 arg3, ::System::DateTime* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::Data::EventContentData*, ::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*, ::System::Int64, ::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_TRYADDORIGINALEVENTHISTORY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void RemoveSpecialOperationEventHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_REMOVESPECIALOPERATIONEVENTHISTORY_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventHistoryVolumes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETEVENTHISTORYVOLUMES_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorHistoryCharacterVolumes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERVOLUMES_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorHistoryCharacterScenarioIds(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERSCENARIOIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFavorHistoryCharacterScenarioIds(Il2CppObject* arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETFAVORHISTORYCHARACTERSCENARIOIDS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetWorkHistoryVolumes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETWORKHISTORYVOLUMES_OFFSET))(nullptr);
		}

		::System::Boolean Cleared(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CLEARED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckClearedIdsAll(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CHECKCLEAREDIDSALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CheckClearedIds(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CHECKCLEAREDIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLastClearedModeIdFromSameVolume(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETLASTCLEAREDMODEIDFROMSAMEVOLUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetLastClearedModeIdFromSameVolume(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3)
		{
			return ((::System::Int64(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETLASTCLEAREDMODEIDFROMSAMEVOLUME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsLastOfMainCleared(::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ISLASTOFMAINCLEARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsAllVolumeCleared(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ISALLVOLUMECLEARED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean NeedCheckEventContentId(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_NEEDCHECKEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GroupCheckByScenarioGroupId(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GROUPCHECKBYSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldPlayEventMinigamePrologueScenario(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTMINIGAMEPROLOGUESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldPlayEventScenarioByReturnCheck(::MX::Data::EventContentSeasonInfo* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTSCENARIOBYRETURNCHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldPlayEventScenarioByReturnCheck(::System::Int64 arg, ::FlatData::EventContentType* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SHOULDPLAYEVENTSCENARIOBYRETURNCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryShowContentsScenario(::System::String* str, ::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_TRYSHOWCONTENTSSCENARIO_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryShowContentsScenario(::System::UInt32 arg, ::System::Action* arg2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_TRYSHOWCONTENTSSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean NeedToShowContentsScenario(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_NEEDTOSHOWCONTENTSSCENARIO_OFFSET))(str, nullptr);
		}

		::System::Boolean NeedToShowContentsScenario(::System::UInt32 arg)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_NEEDTOSHOWCONTENTSSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckContentsScenario(::MX::Data::Excel::ContentsScenarioExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ContentsScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CHECKCONTENTSSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void SendSaveGroupHistoryRequest(::MX::Data::Excel::ContentsScenarioExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ContentsScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SENDSAVEGROUPHISTORYREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean GroupCheckByVolumeId(::FlatData::ScenarioModeReplayTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GROUPCHECKBYVOLUMEID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEventScenarioReplayGroupIds(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETEVENTSCENARIOREPLAYGROUPIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNextEventScenarioExcel(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETNEXTEVENTSCENARIOEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanWatchEventScenarioRecollection(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CANWATCHEVENTSCENARIORECOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowEventContentRecollectionReddot(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SHOWEVENTCONTENTRECOLLECTIONREDDOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEventMeetupHistoryVolumes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETEVENTMEETUPHISTORYVOLUMES_OFFSET))(nullptr);
		}

		::System::Boolean CanWatchEventScenarioReplay(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CANWATCHEVENTSCENARIOREPLAY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEventMeetupGroupHistoryScenarioIds(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETEVENTMEETUPGROUPHISTORYSCENARIOIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyEventMeetupGroupHistoryDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYEVENTMEETUPGROUPHISTORYDB_OFFSET))(nullptr);
		}

		::System::Boolean AnyEventMeetupGroupHistoryDB(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ANYEVENTMEETUPGROUPHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncEventMeetupGroupHistoryDB(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNCEVENTMEETUPGROUPHISTORYDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_RetreatRewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GET_RETREATREWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void set_RetreatRewardParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SET_RETREATREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFirstClear(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ISFIRSTCLEAR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* GetHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_GETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void SyncMainStageSaveData(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg, ::MX::GameLogic::DBModel::SessionKey* arg2, ::MX::NetworkProtocol::Protocol* arg3, ::MX::Campaign::Strategy* arg4)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SYNCMAINSTAGESAVEDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CacheStrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_CACHESTRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCampaignMainstageEndSummary(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::NetworkProtocol::Protocol* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_REFRESHCAMPAIGNMAINSTAGEENDSUMMARY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddCollections(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_ADDCOLLECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCollection(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_HASCOLLECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasGroupCollection(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_HASGROUPCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowScenarioCollectionReddot(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_SHOWSCENARIOCOLLECTIONREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _GetWorkHistoryVolumes_g__DisplayOrderCompare|42_0(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT__GETWORKHISTORYVOLUMES_G__DISPLAYORDERCOMPARE|42_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _GetWorkHistoryVolumes_g__ScenarioGroupIdCompare|42_1(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT__GETWORKHISTORYVOLUMES_G__SCENARIOGROUPIDCOMPARE|42_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _IsAllVolumeCleared_b__49_0(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOHISTORYOBJECT__ISALLVOLUMECLEARED_B__49_0_OFFSET))(arg, nullptr);
		}

	};

