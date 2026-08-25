#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class ConnectionEvents; }

namespace BestHTTP::Core
{
	inline static constexpr unsigned int ConnectionEvents_TypeDefinitionIndex = 23392;

	class ConnectionEvents : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Core::ConnectionEvents* StateChange; // 0x0
		::BestHTTP::Core::ConnectionEvents* ProtocolSupport; // 0x0

	};
}

