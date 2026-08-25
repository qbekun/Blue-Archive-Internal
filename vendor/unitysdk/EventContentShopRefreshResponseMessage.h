#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentShopRefreshResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F730D0)
#define EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F730E0)
#define EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F73120)

	inline static constexpr unsigned int EventContentShopRefreshResponseMessage_TypeDefinitionIndex = 2526;

	class EventContentShopRefreshResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentShopRefreshResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventContentShopRefreshResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentShopRefreshResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentShopRefreshResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentShopRefreshResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentShopRefreshResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentShopRefreshResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

