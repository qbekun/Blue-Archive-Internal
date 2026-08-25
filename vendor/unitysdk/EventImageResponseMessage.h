#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventImageResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTIMAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61770)
#define EVENTIMAGERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F61A40)
#define EVENTIMAGERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F61A50)

	inline static constexpr unsigned int EventImageResponseMessage_TypeDefinitionIndex = 2401;

	class EventImageResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventImageResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventImageResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventImageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventImageResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventImageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EventImageResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventImageResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

