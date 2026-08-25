#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTRETREATRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FF00)

	inline static constexpr unsigned int EventContentRetreatResponseMessage_TypeDefinitionIndex = 2504;

	class EventContentRetreatResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTRETREATRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

