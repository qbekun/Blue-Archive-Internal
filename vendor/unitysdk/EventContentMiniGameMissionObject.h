#pragma once
#include "unitysdk.h"

class EventContentMissionContainer;
namespace MX::NetworkProtocol { class ResponsePacket; }
namespace FlatData { class MissionCategory; }

#define EVENTCONTENTMINIGAMEMISSIONOBJECT_GETACTIVATEDMISSIONEVENTCONTENTSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1D12480)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1D12870)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D12920)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_GENERATEEVENTCONTENTMISSIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D129B0)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_GETMISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x1D12A10)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1D12AC0)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET UNITYSDK_OFFSET(0x1D12DA0)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1D12EA0)
#define EVENTCONTENTMINIGAMEMISSIONOBJECT_REQUESTMISSIONMULTIPLEREWARD_OFFSET UNITYSDK_OFFSET(0x1D13090)

	inline static constexpr unsigned int EventContentMiniGameMissionObject_TypeDefinitionIndex = 1625;

	class EventContentMiniGameMissionObject : public Il2CppObject
	{
	public:
		Il2CppObject* GetActivatedMissionEventContentSeasonInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_GETACTIVATEDMISSIONEVENTCONTENTSEASONINFOS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_CO_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_.CTOR_OFFSET))(nullptr);
		}

		EventContentMissionContainer* GenerateEventContentMissionContainer(::System::Int64 arg)
		{
			return ((EventContentMissionContainer*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_GENERATEEVENTCONTENTMISSIONCONTAINER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMissionInfos(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_GETMISSIONINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_ISOPEN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExtractMissionListData(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			return ((Il2CppObject*(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_EXTRACTMISSIONLISTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RequestMissionList(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_REQUESTMISSIONLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RequestMissionMultipleReward(::System::Int64 arg, ::FlatData::MissionCategory* arg2)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONOBJECT_REQUESTMISSIONMULTIPLEREWARD_OFFSET))(arg, arg2, nullptr);
		}

	};

