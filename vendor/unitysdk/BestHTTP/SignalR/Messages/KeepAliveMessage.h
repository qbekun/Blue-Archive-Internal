#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x752340)
#define BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74FA00)
#define BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x752350)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int KeepAliveMessage_TypeDefinitionIndex = 21498;

	class KeepAliveMessage : public Il2CppObject
	{
	public:
		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_KEEPALIVEMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

	};
}

