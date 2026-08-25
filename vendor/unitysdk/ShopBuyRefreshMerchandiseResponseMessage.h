#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopBuyRefreshMerchandiseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA5C60)
#define SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5C70)
#define SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA5CB0)

	inline static constexpr unsigned int ShopBuyRefreshMerchandiseResponseMessage_TypeDefinitionIndex = 2829;

	class ShopBuyRefreshMerchandiseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopBuyRefreshMerchandiseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

