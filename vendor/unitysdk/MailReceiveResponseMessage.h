#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailReceiveResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MAILRECEIVERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F80AD0)
#define MAILRECEIVERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F80410)

	inline static constexpr unsigned int MailReceiveResponseMessage_TypeDefinitionIndex = 2608;

	class MailReceiveResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailReceiveResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::MailReceiveResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::MailReceiveResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::MailReceiveResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::MailReceiveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

