#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int MessageTypes_TypeDefinitionIndex = 21483;

	class MessageTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalR::MessageTypes* KeepAlive; // 0x0
		::BestHTTP::SignalR::MessageTypes* Data; // 0x0
		::BestHTTP::SignalR::MessageTypes* Multiple; // 0x0
		::BestHTTP::SignalR::MessageTypes* Result; // 0x0
		::BestHTTP::SignalR::MessageTypes* Failure; // 0x0
		::BestHTTP::SignalR::MessageTypes* MethodCall; // 0x0
		::BestHTTP::SignalR::MessageTypes* Progress; // 0x0

	};
}

