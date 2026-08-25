#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_CLOSEWITHERRORMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x6550C0)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int CloseWithErrorMessage_TypeDefinitionIndex = 21467;

	class CloseWithErrorMessage : public Il2CppObject
	{
	public:
		::System::String* error; // 0x10

		::BestHTTP::SignalRCore::Messages::MessageTypes* get_type()
		{
			return (return (::BestHTTP::SignalRCore::Messages::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_CLOSEWITHERRORMESSAGE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

