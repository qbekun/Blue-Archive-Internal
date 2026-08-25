#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopBuyMerchandiseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBUYMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA5520)
#define SHOPBUYMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA5530)
#define SHOPBUYMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5540)

	inline static constexpr unsigned int ShopBuyMerchandiseResponseMessage_TypeDefinitionIndex = 2826;

	class ShopBuyMerchandiseResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopBuyMerchandiseResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ShopBuyMerchandiseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopBuyMerchandiseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ShopBuyMerchandiseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBuyMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopBuyMerchandiseResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopBuyMerchandiseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

