#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_CANCELINVOCATIONMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x655090)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int CancelInvocationMessage_TypeDefinitionIndex = 21464;

	class CancelInvocationMessage : public Il2CppObject
	{
	public:
		::System::String* invocationId; // 0x10

		::BestHTTP::SignalRCore::Messages::MessageTypes* get_type()
		{
			return (return (::BestHTTP::SignalRCore::Messages::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_CANCELINVOCATIONMESSAGE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

