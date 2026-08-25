#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentShopBuyMerchandiseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F71420)
#define EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F71460)
#define EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F71470)

	inline static constexpr unsigned int EventContentShopBuyMerchandiseResponseMessage_TypeDefinitionIndex = 2513;

	class EventContentShopBuyMerchandiseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentShopBuyMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

