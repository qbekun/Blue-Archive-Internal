#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x753EB0)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_SET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x753EC0)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x752F00)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x753ED0)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x7540F0)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x754100)
#define BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_GET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x754110)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int ProgressMessage_TypeDefinitionIndex = 21504;

	class ProgressMessage : public Il2CppObject
	{
	public:
		::System::UInt64 _InvocationId_k__BackingField; // 0x10
		::System::Double _Progress_k__BackingField; // 0x18

		::System::Double get_Progress()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_InvocationId(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_SET_INVOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Progress(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_SET_PROGRESS_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_InvocationId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_PROGRESSMESSAGE_GET_INVOCATIONID_OFFSET))(nullptr);
		}

	};
}

