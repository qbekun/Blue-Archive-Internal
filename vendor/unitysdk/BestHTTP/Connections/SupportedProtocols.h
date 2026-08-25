#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class SupportedProtocols; }

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int SupportedProtocols_TypeDefinitionIndex = 23423;

	class SupportedProtocols : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Connections::SupportedProtocols* Unknown; // 0x0
		::BestHTTP::Connections::SupportedProtocols* HTTP; // 0x0
		::BestHTTP::Connections::SupportedProtocols* WebSocket; // 0x0
		::BestHTTP::Connections::SupportedProtocols* ServerSentEvents; // 0x0

	};
}

