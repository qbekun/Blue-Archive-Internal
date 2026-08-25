#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentFortuneGachaPurchaseResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6B4B0)
#define EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6B4C0)
#define EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6B4D0)
#define EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B4E0)
#define EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F6B520)

	inline static constexpr unsigned int EventContentFortuneGachaPurchaseResponseMessage_TypeDefinitionIndex = 2474;

	class EventContentFortuneGachaPurchaseResponseMessage : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* _Response_k__BackingField; // 0x28

		::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::System::Int64 arg2, ::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::System::Int64, ::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentFortuneGachaPurchaseResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

