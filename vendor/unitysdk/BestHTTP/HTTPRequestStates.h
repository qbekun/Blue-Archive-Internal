#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPRequestStates; }

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPRequestStates_TypeDefinitionIndex = 21302;

	class HTTPRequestStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::HTTPRequestStates* Initial; // 0x0
		::BestHTTP::HTTPRequestStates* Queued; // 0x0
		::BestHTTP::HTTPRequestStates* Processing; // 0x0
		::BestHTTP::HTTPRequestStates* Finished; // 0x0
		::BestHTTP::HTTPRequestStates* Error; // 0x0
		::BestHTTP::HTTPRequestStates* Aborted; // 0x0
		::BestHTTP::HTTPRequestStates* ConnectionTimedOut; // 0x0
		::BestHTTP::HTTPRequestStates* TimedOut; // 0x0

	};
}

