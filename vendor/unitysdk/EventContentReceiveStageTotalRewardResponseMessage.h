#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTRECEIVESTAGETOTALREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F230)

	inline static constexpr unsigned int EventContentReceiveStageTotalRewardResponseMessage_TypeDefinitionIndex = 2498;

	class EventContentReceiveStageTotalRewardResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTRECEIVESTAGETOTALREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

