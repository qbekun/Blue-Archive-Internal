#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int UploadInvocationMessage_TypeDefinitionIndex = 21463;

	class UploadInvocationMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* type; // 0x10
		::System::String* invocationId; // 0x18
		::System::Boolean nonblocking; // 0x20
		::System::String* target; // 0x28
		::Il2CppArray<::System::Object*>* arguments; // 0x30
		::Il2CppArray<::System::Object*>* streamIds; // 0x38

	};
}

