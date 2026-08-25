#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class MailReceiveSemiPermanentResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F820E0)
#define MAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F820F0)

	inline static constexpr unsigned int MailReceiveSemiPermanentResponseMessage_TypeDefinitionIndex = 2615;

	class MailReceiveSemiPermanentResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::MailReceiveSemiPermanentResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::MailReceiveSemiPermanentResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::MailReceiveSemiPermanentResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::MailReceiveSemiPermanentResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::MailReceiveSemiPermanentResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MAILRECEIVESEMIPERMANENTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

