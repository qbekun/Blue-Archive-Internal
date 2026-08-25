#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemSelectTicketResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ITEMSELECTTICKETRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D7C0)
#define ITEMSELECTTICKETRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7D800)

	inline static constexpr unsigned int ItemSelectTicketResponseMessage_TypeDefinitionIndex = 2590;

	class ItemSelectTicketResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ItemSelectTicketResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ItemSelectTicketResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ItemSelectTicketResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ItemSelectTicketResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ItemSelectTicketResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

