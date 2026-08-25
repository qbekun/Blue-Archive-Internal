#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopBuyEligmaResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBUYELIGMARESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA1780)
#define SHOPBUYELIGMARESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1790)
#define SHOPBUYELIGMARESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA17D0)

	inline static constexpr unsigned int ShopBuyEligmaResponseMessage_TypeDefinitionIndex = 2816;

	class ShopBuyEligmaResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopBuyEligmaResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ShopBuyEligmaResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopBuyEligmaResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMARESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopBuyEligmaResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopBuyEligmaResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMARESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ShopBuyEligmaResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBuyEligmaResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMARESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

