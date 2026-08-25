#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x752F50)
#define BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x752F60)
#define BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x752F70)
#define BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x752F10)
#define BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x752F80)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int DataMessage_TypeDefinitionIndex = 21500;

	class DataMessage : public Il2CppObject
	{
	public:
		::System::Object* _Data_k__BackingField; // 0x10

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Data(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Data()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_DATAMESSAGE_GET_DATA_OFFSET))(nullptr);
		}

	};
}

