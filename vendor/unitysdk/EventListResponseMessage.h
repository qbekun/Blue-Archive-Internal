#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F61F70)
#define EVENTLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F61F80)
#define EVENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61CB0)

	inline static constexpr unsigned int EventListResponseMessage_TypeDefinitionIndex = 2404;

	class EventListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

