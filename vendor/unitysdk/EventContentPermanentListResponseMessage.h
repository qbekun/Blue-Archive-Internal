#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTPERMANENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DFD0)

	inline static constexpr unsigned int EventContentPermanentListResponseMessage_TypeDefinitionIndex = 2489;

	class EventContentPermanentListResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPERMANENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

