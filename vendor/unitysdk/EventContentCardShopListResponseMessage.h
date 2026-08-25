#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentCardShopListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F64610)
#define EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F64620)
#define EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F64660)

	inline static constexpr unsigned int EventContentCardShopListResponseMessage_TypeDefinitionIndex = 2423;

	class EventContentCardShopListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentCardShopListResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::EventContentCardShopListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentCardShopListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentCardShopListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentCardShopListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentCardShopListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentCardShopListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

