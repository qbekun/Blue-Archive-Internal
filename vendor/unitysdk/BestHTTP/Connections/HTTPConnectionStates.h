#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Connections { class HTTPConnectionStates; }

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int HTTPConnectionStates_TypeDefinitionIndex = 23422;

	class HTTPConnectionStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Connections::HTTPConnectionStates* Initial; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* Processing; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* WaitForProtocolShutdown; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* Recycle; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* Free; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* Closed; // 0x0
		::BestHTTP::Connections::HTTPConnectionStates* ClosedResendRequest; // 0x0

	};
}

