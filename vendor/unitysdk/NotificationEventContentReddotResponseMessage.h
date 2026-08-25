#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F883A0)
#define NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F883B0)
#define NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F883F0)

	inline static constexpr unsigned int NotificationEventContentReddotResponseMessage_TypeDefinitionIndex = 2657;

	class NotificationEventContentReddotResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::NotificationEventContentReddotResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::NotificationEventContentReddotResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::NotificationEventContentReddotResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

