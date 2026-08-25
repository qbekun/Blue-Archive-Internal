#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::Data { class GuideMissionSeasonInfo; }
class GuideMissionSeasonListNetworkTask;
class MissionContentBase;
namespace MX::NetworkProtocol { class GuideMissionSeasonListResponse; }
namespace MX::NetworkProtocol { class MissionListResponse; }
namespace MX::Data { class GuideMissionInfo; }

#define MISSIONOBJECT_GET_HISTORYIDS_OFFSET UNITYSDK_OFFSET(0x1EB7090)
#define MISSIONOBJECT_GET_PROGRESSDBS_OFFSET UNITYSDK_OFFSET(0x1EB70A0)
#define MISSIONOBJECT_GET_GUIDEMISSIONSEASONCONTENTS_OFFSET UNITYSDK_OFFSET(0x1EB70B0)
#define MISSIONOBJECT_GET_CURRENTMISSIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1EB70C0)
#define MISSIONOBJECT_SET_CURRENTMISSIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1EB70D0)
#define MISSIONOBJECT_GET_ACTIVATEDDAILYSUDDENMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1EB70E0)
#define MISSIONOBJECT_GET_GUIDEMISSIONTABACTIVATIONCACHES_OFFSET UNITYSDK_OFFSET(0x1EB70F0)
#define MISSIONOBJECT_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1EB7100)
#define MISSIONOBJECT_GET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1EB7320)
#define MISSIONOBJECT_SET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1EB7330)
#define MISSIONOBJECT_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EB7470)
#define MISSIONOBJECT_SHOWGUIDEMISSIONARCHIVEREDDOT_OFFSET UNITYSDK_OFFSET(0x1EB7550)
#define MISSIONOBJECT_SHOWREDDOTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1EB7110)
#define MISSIONOBJECT_GETGUIDEMISSIONLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1EB7900)
#define MISSIONOBJECT_ISGUIDEMISSIONACTIVATED_OFFSET UNITYSDK_OFFSET(0x1EB7A20)
#define MISSIONOBJECT_GETGUIDEMISSIONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1EB7DE0)
#define MISSIONOBJECT_GETGUIDEMISSIONENDDATE_OFFSET UNITYSDK_OFFSET(0x1EB7B70)
#define MISSIONOBJECT_GETGUIDEMISSIONCURRENTTAB_OFFSET UNITYSDK_OFFSET(0x1EB7FA0)
#define MISSIONOBJECT_SETGUIDEMISSIONCURRENTTAB_OFFSET UNITYSDK_OFFSET(0x1EB8150)
#define MISSIONOBJECT_ISGUIDEMISSIONCLEAR_OFFSET UNITYSDK_OFFSET(0x1EB6C20)
#define MISSIONOBJECT_ISGUIDEMISSIONCLEARALL_OFFSET UNITYSDK_OFFSET(0x1EB8300)
#define MISSIONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB83F0)
#define MISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1EB8B00)
#define MISSIONOBJECT_REQUESTGUIDEMISSIONSEASONS_OFFSET UNITYSDK_OFFSET(0x1EB8BA0)
#define MISSIONOBJECT__REQUESTGUIDEMISSIONSEASONS_OFFSET UNITYSDK_OFFSET(0x1EB8BB0)
#define MISSIONOBJECT_CO_REQUESTGUIDEMISSIONSEASONS_OFFSET UNITYSDK_OFFSET(0x1EB8C50)
#define MISSIONOBJECT_REQUESTMISSIONREWARDS_OFFSET UNITYSDK_OFFSET(0x1EB8CF0)
#define MISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EB8DF0)
#define MISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EB9D40)
#define MISSIONOBJECT_GETVISIBLEMISSIONCONTENTS_OFFSET UNITYSDK_OFFSET(0x1EBA120)
#define MISSIONOBJECT_GETMISSION_OFFSET UNITYSDK_OFFSET(0x1EBA1F0)
#define MISSIONOBJECT_GETCOUNTABLEMISSIONCONTENTS_OFFSET UNITYSDK_OFFSET(0x1EBA2C0)
#define MISSIONOBJECT_SYNCMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EBA390)
#define MISSIONOBJECT_SYNCPROGRESSDB_OFFSET UNITYSDK_OFFSET(0x1EBAD10)
#define MISSIONOBJECT_SYNCHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1EBAF20)
#define MISSIONOBJECT_SYNCHISTORYMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EBA4B0)
#define MISSIONOBJECT_SYNCPROGRESSMISSIONS_OFFSET UNITYSDK_OFFSET(0x1EBA8A0)
#define MISSIONOBJECT_SYNCGUIDEMISSIONSEASONS_OFFSET UNITYSDK_OFFSET(0x1EBB060)
#define MISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1EBB660)
#define MISSIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB850)
#define MISSIONOBJECT__ISGUIDEMISSIONCLEAR_B__35_1_OFFSET UNITYSDK_OFFSET(0x1EBBA90)
#define MISSIONOBJECT__ISGUIDEMISSIONCLEARALL_B__36_0_OFFSET UNITYSDK_OFFSET(0x1EBBAF0)
#define MISSIONOBJECT__SYNCHISTORYDB_B__50_0_OFFSET UNITYSDK_OFFSET(0x1EBBB50)

	inline static constexpr unsigned int MissionObject_TypeDefinitionIndex = 1746;

	class MissionObject : public Il2CppObject
	{
	public:
		Il2CppObject* allMissionContents; // 0x10
		Il2CppObject* _HistoryIds_k__BackingField; // 0x18
		Il2CppObject* _ProgressDBs_k__BackingField; // 0x20
		Il2CppObject* _GuideMissionSeasonContents_k__BackingField; // 0x28
		Il2CppObject* _CurrentMissionContent_k__BackingField; // 0x30
		Il2CppObject* _activatedDailySuddenMissionInfos_k__BackingField; // 0x38
		Il2CppObject* _GuideMissionTabActivationCaches_k__BackingField; // 0x40
		::System::Boolean isMissionToastReady; // 0x48

		Il2CppObject* get_HistoryIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_HISTORYIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProgressDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_PROGRESSDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_GuideMissionSeasonContents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_GUIDEMISSIONSEASONCONTENTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentMissionContent()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_CURRENTMISSIONCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentMissionContent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SET_CURRENTMISSIONCONTENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_activatedDailySuddenMissionInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_ACTIVATEDDAILYSUDDENMISSIONINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_GuideMissionTabActivationCaches()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_GUIDEMISSIONTABACTIVATIONCACHES_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_SHOWREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMissionToastReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GET_ISMISSIONTOASTREADY_OFFSET))(nullptr);
		}

		::System::Void set_IsMissionToastReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SET_ISMISSIONTOASTREADY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComplete(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowGuideMissionArchiveRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SHOWGUIDEMISSIONARCHIVEREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowRedDotByCategory(::FlatData::MissionCategory* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::MissionCategory*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SHOWREDDOTBYCATEGORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetGuideMissionLoginCount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETGUIDEMISSIONLOGINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGuideMissionActivated(::System::Int64 arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_ISGUIDEMISSIONACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* GetGuideMissionStartDate(::System::Int64 arg)
		{
			return ((::System::DateTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETGUIDEMISSIONSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetGuideMissionEndDate(::System::Int64 arg)
		{
			return ((::System::DateTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETGUIDEMISSIONENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetGuideMissionCurrentTab(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			return ((::System::Int64(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETGUIDEMISSIONCURRENTTAB_OFFSET))(arg, nullptr);
		}

		::System::Void SetGuideMissionCurrentTab(::MX::Data::GuideMissionSeasonInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SETGUIDEMISSIONCURRENTTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsGuideMissionClear(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_ISGUIDEMISSIONCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGuideMissionClearAll(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_ISGUIDEMISSIONCLEARALL_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RequestMissionList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RequestGuideMissionSeasons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_REQUESTGUIDEMISSIONSEASONS_OFFSET))(arg, nullptr);
		}

		GuideMissionSeasonListNetworkTask* _RequestGuideMissionSeasons(::System::Boolean arg)
		{
			return ((GuideMissionSeasonListNetworkTask*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT__REQUESTGUIDEMISSIONSEASONS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestGuideMissionSeasons(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_CO_REQUESTGUIDEMISSIONSEASONS_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionRewards(::FlatData::MissionCategory* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_REQUESTMISSIONREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCurrentMissions(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCurrentMissions(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVisibleMissionContents(::FlatData::MissionCategory* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETVISIBLEMISSIONCONTENTS_OFFSET))(arg, nullptr);
		}

		MissionContentBase* GetMission(::System::Int64 arg)
		{
			return ((MissionContentBase*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCountableMissionContents(::FlatData::MissionCategory* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_GETCOUNTABLEMISSIONCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncMissions(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncProgressDB(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCPROGRESSDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncHistoryDB(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncHistoryMissions(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCHISTORYMISSIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncProgressMissions(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCPROGRESSMISSIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncGuideMissionSeasons(::MX::NetworkProtocol::GuideMissionSeasonListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::GuideMissionSeasonListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_SYNCGUIDEMISSIONSEASONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnMissionListResponse(::MX::NetworkProtocol::MissionListResponse* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MissionListResponse*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _IsGuideMissionClear_b__35_1(::MX::Data::GuideMissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::GuideMissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT__ISGUIDEMISSIONCLEAR_B__35_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsGuideMissionClearAll_b__36_0(::MX::Data::GuideMissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::GuideMissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT__ISGUIDEMISSIONCLEARALL_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SyncHistoryDB_b__50_0(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONOBJECT__SYNCHISTORYDB_B__50_0_OFFSET))(arg, nullptr);
		}

	};

