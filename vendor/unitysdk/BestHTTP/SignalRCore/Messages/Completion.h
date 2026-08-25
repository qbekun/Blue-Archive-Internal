#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int Completion_TypeDefinitionIndex = 21458;

	class Completion : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* type; // 0x10
		::System::String* invocationId; // 0x18

	};
}

