#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentCardShopShuffleResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F658B0)
#define EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F658F0)
#define EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F65900)

	inline static constexpr unsigned int EventContentCardShopShuffleResponseMessage_TypeDefinitionIndex = 2432;

	class EventContentCardShopShuffleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentCardShopShuffleResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentCardShopShuffleResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentCardShopShuffleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentCardShopShuffleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentCardShopShuffleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EventContentCardShopShuffleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentCardShopShuffleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

