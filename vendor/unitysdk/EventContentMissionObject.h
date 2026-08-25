#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
class EventContentMissionContainer;
namespace MX::NetworkProtocol { class ResponsePacket; }

#define EVENTCONTENTMISSIONOBJECT_GETVISIBLEMISSIONCONTENTS_OFFSET UNITYSDK_OFFSET(0x1D13C00)
#define EVENTCONTENTMISSIONOBJECT_GENERATEEVENTCONTENTMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D13DC0)
#define EVENTCONTENTMISSIONOBJECT_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1D13E20)
#define EVENTCONTENTMISSIONOBJECT_REQUESTMISSIONMULTIPLEREWARD_OFFSET UNITYSDK_OFFSET(0x1D13EA0)
#define EVENTCONTENTMISSIONOBJECT_GETACTIVATEDMISSIONEVENTCONTENTSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1D13F70)
#define EVENTCONTENTMISSIONOBJECT_INITIALIZECONTAINER_OFFSET UNITYSDK_OFFSET(0x1D14150)
#define EVENTCONTENTMISSIONOBJECT_GETMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1D14490)
#define EVENTCONTENTMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0x1D145C0)
#define EVENTCONTENTMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET UNITYSDK_OFFSET(0x1D152D0)
#define EVENTCONTENTMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1D153D0)
#define EVENTCONTENTMISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D15550)
#define EVENTCONTENTMISSIONOBJECT_GETALLEVENTCONTENTMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D15880)
#define EVENTCONTENTMISSIONOBJECT_GETMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D15150)
#define EVENTCONTENTMISSIONOBJECT_SYNCHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1D158D0)
#define EVENTCONTENTMISSIONOBJECT_CHECKCLEAREDORIGINALMISSION_OFFSET UNITYSDK_OFFSET(0x1D15E00)
#define EVENTCONTENTMISSIONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D160D0)
#define EVENTCONTENTMISSIONOBJECT_SYNSMISSIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D15780)
#define EVENTCONTENTMISSIONOBJECT_GETEVENTCONTENTMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D13010)
#define EVENTCONTENTMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1D16120)
#define EVENTCONTENTMISSIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D12930)
#define EVENTCONTENTMISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET UNITYSDK_OFFSET(0x1D161D0)
#define EVENTCONTENTMISSIONOBJECT_SHOWREDDOTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D169E0)
#define EVENTCONTENTMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D16CC0)

	inline static constexpr unsigned int EventContentMissionObject_TypeDefinitionIndex = 1639;

	class EventContentMissionObject : public Il2CppObject
	{
	public:
		Il2CppObject* eventContentMissionContainerDict; // 0x10

		Il2CppObject* GetVisibleMissionContents(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETVISIBLEMISSIONCONTENTS_OFFSET))(arg, arg2, nullptr);
		}

		EventContentMissionContainer* GenerateEventContentMissionContainer(::System::Int64 arg)
		{
			return ((EventContentMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GENERATEEVENTCONTENTMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComplete(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_ISCOMPLETE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestMissionMultipleReward(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_REQUESTMISSIONMULTIPLEREWARD_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetActivatedMissionEventContentSeasonInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETACTIVATEDMISSIONEVENTCONTENTSEASONINFOS_OFFSET))(nullptr);
		}

		::System::Void InitializeContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_INITIALIZECONTAINER_OFFSET))(nullptr);
		}

		Il2CppObject* GetMissionInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETMISSIONINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncProgressDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* ExtractMissionListData(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			return ((Il2CppObject*(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnMissionListResponse(::System::Int64 arg, ::MX::NetworkProtocol::ResponsePacket* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::NetworkProtocol::ResponsePacket*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetAllEventContentMissionContainer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETALLEVENTCONTENTMISSIONCONTAINER_OFFSET))(nullptr);
		}

		EventContentMissionContainer* GetMissionContainer(::System::Int64 arg)
		{
			return ((EventContentMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistoryDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_SYNCHISTORYDBS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CheckClearedOriginalMission(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_CHECKCLEAREDORIGINALMISSION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SynsMissionsInternal(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_SYNSMISSIONSINTERNAL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		EventContentMissionContainer* GetEventContentMissionContainer(::System::Int64 arg)
		{
			return ((EventContentMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_GETEVENTCONTENTMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrentMissions(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShowRedDotByCategory(::System::Int64 arg, ::FlatData::MissionCategory* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::MissionCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_SHOWREDDOTBYCATEGORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasMissionContainer(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

	};

