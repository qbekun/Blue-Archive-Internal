#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopBuyAPResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBUYAPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0F70)
#define SHOPBUYAPRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA0FB0)
#define SHOPBUYAPRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA0FC0)

	inline static constexpr unsigned int ShopBuyAPResponseMessage_TypeDefinitionIndex = 2813;

	class ShopBuyAPResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopBuyAPResponse* _response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopBuyAPResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopBuyAPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ShopBuyAPResponse* get_response()
		{
			return ((::MX::NetworkProtocol::ShopBuyAPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_response(::MX::NetworkProtocol::ShopBuyAPResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBuyAPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

