#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentLocationGetInfoResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6C630)
#define EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6C640)
#define EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6C650)
#define EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6C660)
#define EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C670)

	inline static constexpr unsigned int EventContentLocationGetInfoResponseMessage_TypeDefinitionIndex = 2480;

	class EventContentLocationGetInfoResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::MX::NetworkProtocol::EventContentLocationGetInfoResponse* _Response_k__BackingField; // 0x28

		::MX::NetworkProtocol::EventContentLocationGetInfoResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentLocationGetInfoResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentLocationGetInfoResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentLocationGetInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2, ::MX::NetworkProtocol::EventContentLocationGetInfoResponse* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::MX::NetworkProtocol::EventContentLocationGetInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFORESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

