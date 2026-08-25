#pragma once
#include "unitysdk.h"

class BattlePassMissionContainer;
namespace MX::NetworkProtocol { class ResponsePacket; }
class BattlePassTask;
namespace FlatData { class MissionCategory; }

#define BATTLEPASSMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x18226A0)
#define BATTLEPASSMISSIONOBJECT_GENERATECONTAINER_OFFSET UNITYSDK_OFFSET(0x182DFA0)
#define BATTLEPASSMISSIONOBJECT_GETALLCONTAINER_OFFSET UNITYSDK_OFFSET(0x182E000)
#define BATTLEPASSMISSIONOBJECT_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x182E050)
#define BATTLEPASSMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x182E0D0)
#define BATTLEPASSMISSIONOBJECT_SYNCHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x182E1E0)
#define BATTLEPASSMISSIONOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18205B0)
#define BATTLEPASSMISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0x182E970)
#define BATTLEPASSMISSIONOBJECT_INITIALIZECONTAINER_OFFSET UNITYSDK_OFFSET(0x1820680)
#define BATTLEPASSMISSIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1827840)
#define BATTLEPASSMISSIONOBJECT_SYNCMISSIONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x182EBE0)
#define BATTLEPASSMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET UNITYSDK_OFFSET(0x182EB00)
#define BATTLEPASSMISSIONOBJECT_GETMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x182E6E0)
#define BATTLEPASSMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0x18226F0)
#define BATTLEPASSMISSIONOBJECT_GET_TASK_OFFSET UNITYSDK_OFFSET(0x182E1A0)
#define BATTLEPASSMISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET UNITYSDK_OFFSET(0x182ECD0)
#define BATTLEPASSMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x182F4D0)
#define BATTLEPASSMISSIONOBJECT_GETMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x182E860)

	inline static constexpr unsigned int BattlePassMissionObject_TypeDefinitionIndex = 1326;

	class BattlePassMissionObject : public Il2CppObject
	{
	public:
		Il2CppObject* missionContainerDict; // 0x10

		::System::Boolean HasMissionContainer(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_HASMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		BattlePassMissionContainer* GenerateContainer(::System::Int64 arg)
		{
			return ((BattlePassMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GENERATECONTAINER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllContainer()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GETALLCONTAINER_OFFSET))(nullptr);
		}

		BattlePassMissionContainer* GetContainer(::System::Int64 arg)
		{
			return ((BattlePassMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GETCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncHistoryDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_SYNCHISTORYDBS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnMissionListResponse(::System::Int64 arg, ::MX::NetworkProtocol::ResponsePacket* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, ::MX::NetworkProtocol::ResponsePacket*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_ONMISSIONLISTRESPONSE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitializeContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_INITIALIZECONTAINER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncMissionsInternal(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_SYNCMISSIONSINTERNAL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* ExtractMissionListData(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			return ((Il2CppObject*(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET))(arg, nullptr);
		}

		BattlePassMissionContainer* GetMissionContainer(::System::Int64 arg)
		{
			return ((BattlePassMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GETMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void SyncProgressDBs(::System::Int64 arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_SYNCPROGRESSDBS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrentMissions(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_REFRESHCURRENTMISSIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetMissionInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONOBJECT_GETMISSIONINFOS_OFFSET))(arg, nullptr);
		}

	};

