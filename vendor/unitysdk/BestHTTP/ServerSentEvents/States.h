#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::ServerSentEvents { class States; }

namespace BestHTTP::ServerSentEvents
{
	inline static constexpr unsigned int States_TypeDefinitionIndex = 21517;

	class States : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::ServerSentEvents::States* Initial; // 0x0
		::BestHTTP::ServerSentEvents::States* Connecting; // 0x0
		::BestHTTP::ServerSentEvents::States* Open; // 0x0
		::BestHTTP::ServerSentEvents::States* Retrying; // 0x0
		::BestHTTP::ServerSentEvents::States* Closing; // 0x0
		::BestHTTP::ServerSentEvents::States* Closed; // 0x0

	};
}

