#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int CompletionWithError_TypeDefinitionIndex = 21460;

	class CompletionWithError : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* type; // 0x10
		::System::String* invocationId; // 0x18
		::System::String* error; // 0x20

	};
}

