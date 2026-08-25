#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentCardShopPurchaseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F65280)
#define EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F652C0)
#define EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F652D0)

	inline static constexpr unsigned int EventContentCardShopPurchaseResponseMessage_TypeDefinitionIndex = 2429;

	class EventContentCardShopPurchaseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentCardShopPurchaseResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentCardShopPurchaseResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentCardShopPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentCardShopPurchaseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentCardShopPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EventContentCardShopPurchaseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentCardShopPurchaseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

