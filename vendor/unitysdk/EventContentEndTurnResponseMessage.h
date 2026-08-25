#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTENDTURNRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F68A30)

	inline static constexpr unsigned int EventContentEndTurnResponseMessage_TypeDefinitionIndex = 2456;

	class EventContentEndTurnResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENDTURNRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

