#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EventContentSelectBuffResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F70ED0)
#define EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F70EE0)
#define EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F70F20)

	inline static constexpr unsigned int EventContentSelectBuffResponseMessage_TypeDefinitionIndex = 2510;

	class EventContentSelectBuffResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EventContentSelectBuffResponse* _response_k__BackingField; // 0x20

		::System::Void set_response(::MX::NetworkProtocol::EventContentSelectBuffResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentSelectBuffResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EventContentSelectBuffResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EventContentSelectBuffResponse*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::EventContentSelectBuffResponse* get_response()
		{
			return ((::MX::NetworkProtocol::EventContentSelectBuffResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSELECTBUFFRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

