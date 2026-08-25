#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTREWARDINCREASERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61F90)

	inline static constexpr unsigned int EventRewardIncreaseResponseMessage_TypeDefinitionIndex = 2405;

	class EventRewardIncreaseResponseMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

