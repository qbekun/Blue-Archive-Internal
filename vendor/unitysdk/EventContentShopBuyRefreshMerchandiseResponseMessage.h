#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentShopBuyRefreshMerchandiseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F71FF0)
#define EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F72030)
#define EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F72040)

	inline static constexpr unsigned int EventContentShopBuyRefreshMerchandiseResponseMessage_TypeDefinitionIndex = 2518;

	class EventContentShopBuyRefreshMerchandiseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentShopBuyRefreshMerchandiseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

