#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define NETWORKTIMESYNCMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F87DD0)

	inline static constexpr unsigned int NetworkTimeSyncMessage_TypeDefinitionIndex = 2654;

	class NetworkTimeSyncMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

