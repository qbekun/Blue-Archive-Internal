#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentAdventureListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F62A20)
#define EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F62A30)
#define EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F62A40)
#define EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F62A50)
#define EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F62A90)

	inline static constexpr unsigned int EventContentAdventureListResponseMessage_TypeDefinitionIndex = 2411;

	class EventContentAdventureListResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::MX::NetworkProtocol::EventContentAdventureListResponse* _Response_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EventContentAdventureListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentAdventureListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2, ::MX::NetworkProtocol::EventContentAdventureListResponse* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::MX::NetworkProtocol::EventContentAdventureListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentAdventureListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentAdventureListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTADVENTURELISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

