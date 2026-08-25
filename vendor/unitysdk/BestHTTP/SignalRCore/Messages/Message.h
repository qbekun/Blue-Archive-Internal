#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_MESSAGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x64BFC0)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int Message_TypeDefinitionIndex = 21469;

	class Message : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* type; // 0x10
		::System::String* invocationId; // 0x18
		::System::Boolean nonblocking; // 0x20
		::System::String* target; // 0x28
		::Il2CppArray<::System::Object*>* arguments; // 0x30
		::Il2CppArray<::System::Object*>* streamIds; // 0x38
		::System::Object* item; // 0x40
		::System::Object* result; // 0x48
		::System::String* error; // 0x50
		::System::Boolean allowReconnect; // 0x58

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_MESSAGE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

