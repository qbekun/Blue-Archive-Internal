#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTPORTALRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E530)

	inline static constexpr unsigned int EventContentPortalResponseMessage_TypeDefinitionIndex = 2492;

	class EventContentPortalResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

