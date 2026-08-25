#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_ISERVERMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_MESSAGES_ISERVERMESSAGE_PARSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int IServerMessage_TypeDefinitionIndex = 21496;

	class IServerMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SignalR::MessageTypes* get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_ISERVERMESSAGE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_ISERVERMESSAGE_PARSE_OFFSET))(arg, nullptr);
		}

	};
}

