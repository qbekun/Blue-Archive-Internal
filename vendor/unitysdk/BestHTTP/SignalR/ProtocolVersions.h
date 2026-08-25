#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class ProtocolVersions; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int ProtocolVersions_TypeDefinitionIndex = 21480;

	class ProtocolVersions : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::SignalR::ProtocolVersions* Protocol_2_0; // 0x0
		::BestHTTP::SignalR::ProtocolVersions* Protocol_2_1; // 0x0
		::BestHTTP::SignalR::ProtocolVersions* Protocol_2_2; // 0x0

	};
}

