#pragma once
#include "unitysdk.h"

class WelcomeCampaignMissionContainer;
namespace MX::NetworkProtocol { class WelcomeCampaignMissionListResponse; }
namespace FlatData { class MissionCompleteUIPrefabType; }

#define WELCOMECAMPAIGNMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1EF15C0)
#define WELCOMECAMPAIGNMISSIONOBJECT_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x1EF1610)
#define WELCOMECAMPAIGNMISSIONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF1680)
#define WELCOMECAMPAIGNMISSIONOBJECT_INITIALIZECONTAINER_OFFSET UNITYSDK_OFFSET(0x1EF16D0)
#define WELCOMECAMPAIGNMISSIONOBJECT_GETORCREATECONTAINER_OFFSET UNITYSDK_OFFSET(0x1EF18A0)
#define WELCOMECAMPAIGNMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1EF1970)
#define WELCOMECAMPAIGNMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1EF1AA0)
#define WELCOMECAMPAIGNMISSIONOBJECT_ONWELCOMECAMPAIGNMISSIONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1EF1CC0)
#define WELCOMECAMPAIGNMISSIONOBJECT_SYNCMISSIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EF1EA0)
#define WELCOMECAMPAIGNMISSIONOBJECT_SYNCHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1EF1F00)
#define WELCOMECAMPAIGNMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0x1EF2400)
#define WELCOMECAMPAIGNMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0x1EF2A50)
#define WELCOMECAMPAIGNMISSIONOBJECT_GETMISSIONINFOBYCOMPLETEUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x1EF2E10)
#define WELCOMECAMPAIGNMISSIONOBJECT_TRYMISSIONNOTIFYUIENTEREDREQUEST_OFFSET UNITYSDK_OFFSET(0x1EF2EB0)
#define WELCOMECAMPAIGNMISSIONOBJECT_GETMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1EF2920)
#define WELCOMECAMPAIGNMISSIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3780)

	inline static constexpr unsigned int WelcomeCampaignMissionObject_TypeDefinitionIndex = 1909;

	class WelcomeCampaignMissionObject : public Il2CppObject
	{
	public:
		Il2CppObject* _missionContainers; // 0x10

		::System::Boolean HasMissionContainer(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		WelcomeCampaignMissionContainer* GetContainer(::System::Int64 arg)
		{
			return ((WelcomeCampaignMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_GETCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitializeContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_INITIALIZECONTAINER_OFFSET))(nullptr);
		}

		WelcomeCampaignMissionContainer* GetOrCreateContainer(::System::Int64 arg)
		{
			return ((WelcomeCampaignMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_GETORCREATECONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnWelcomeCampaignMissionListResponse(::MX::NetworkProtocol::WelcomeCampaignMissionListResponse* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WelcomeCampaignMissionListResponse*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_ONWELCOMECAMPAIGNMISSIONLISTRESPONSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncMissionsInternal(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_SYNCMISSIONSINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SyncHistoryDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_SYNCHISTORYDBS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SyncProgressDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SyncProgressDBs(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetMissionInfoByCompleteUIPrefabType(::FlatData::MissionCompleteUIPrefabType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_GETMISSIONINFOBYCOMPLETEUIPREFABTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void TryMissionNotifyUIEnteredRequest(::FlatData::MissionCompleteUIPrefabType* arg)
		{
			((::System::Void(*)(::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_TRYMISSIONNOTIFYUIENTEREDREQUEST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMissionInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_GETMISSIONINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

