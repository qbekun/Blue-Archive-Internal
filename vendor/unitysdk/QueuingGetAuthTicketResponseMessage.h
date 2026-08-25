#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class QueuingGetAuthTicketResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define QUEUINGGETAUTHTICKETRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F89CC0)
#define QUEUINGGETAUTHTICKETRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F89CD0)
#define QUEUINGGETAUTHTICKETRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F89CE0)

	inline static constexpr unsigned int QueuingGetAuthTicketResponseMessage_TypeDefinitionIndex = 2669;

	class QueuingGetAuthTicketResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::QueuingGetAuthTicketResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::QueuingGetAuthTicketResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::QueuingGetAuthTicketResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::QueuingGetAuthTicketResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::QueuingGetAuthTicketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

