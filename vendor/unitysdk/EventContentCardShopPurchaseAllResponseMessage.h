#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentCardShopPurchaseAllResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F64C80)
#define EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F64C90)
#define EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F64CD0)

	inline static constexpr unsigned int EventContentCardShopPurchaseAllResponseMessage_TypeDefinitionIndex = 2426;

	class EventContentCardShopPurchaseAllResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentCardShopPurchaseAllResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

