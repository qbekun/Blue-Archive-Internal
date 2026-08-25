#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentShopListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F72B50)
#define EVENTCONTENTSHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F72B60)
#define EVENTCONTENTSHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F72B70)

	inline static constexpr unsigned int EventContentShopListResponseMessage_TypeDefinitionIndex = 2523;

	class EventContentShopListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentShopListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventContentShopListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentShopListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentShopListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentShopListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentShopListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentShopListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

