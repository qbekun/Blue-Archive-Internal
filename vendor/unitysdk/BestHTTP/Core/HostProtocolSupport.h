#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class HostProtocolSupport; }

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HostProtocolSupport_TypeDefinitionIndex = 23395;

	class HostProtocolSupport : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::Core::HostProtocolSupport* Unknown; // 0x0
		::BestHTTP::Core::HostProtocolSupport* HTTP1; // 0x0
		::BestHTTP::Core::HostProtocolSupport* HTTP2; // 0x0

	};
}

