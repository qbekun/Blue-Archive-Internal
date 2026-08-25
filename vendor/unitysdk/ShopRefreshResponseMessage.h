#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ShopRefreshResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPREFRESHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA96D0)
#define SHOPREFRESHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA9710)
#define SHOPREFRESHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FA9720)

	inline static constexpr unsigned int ShopRefreshResponseMessage_TypeDefinitionIndex = 2848;

	class ShopRefreshResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ShopRefreshResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ShopRefreshResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ShopRefreshResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::ShopRefreshResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopRefreshResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ShopRefreshResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ShopRefreshResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

