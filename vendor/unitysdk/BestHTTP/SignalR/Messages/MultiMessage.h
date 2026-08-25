#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_SHOULDRECONNECT_OFFSET UNITYSDK_OFFSET(0x752360)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_ISINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x752370)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x752380)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_GROUPSTOKEN_OFFSET UNITYSDK_OFFSET(0x752390)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74FA30)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x7523A0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x7523B0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_POLLDELAY_OFFSET UNITYSDK_OFFSET(0x7523C0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x7523D0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_GROUPSTOKEN_OFFSET UNITYSDK_OFFSET(0x7523E0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_POLLDELAY_OFFSET UNITYSDK_OFFSET(0x7523F0)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x752400)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x752F20)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_ISINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x752F30)
#define BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_SHOULDRECONNECT_OFFSET UNITYSDK_OFFSET(0x752F40)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int MultiMessage_TypeDefinitionIndex = 21499;

	class MultiMessage : public Il2CppObject
	{
	public:
		::System::String* _MessageId_k__BackingField; // 0x10
		::System::Boolean _IsInitialization_k__BackingField; // 0x18
		::System::String* _GroupsToken_k__BackingField; // 0x20
		::System::Boolean _ShouldReconnect_k__BackingField; // 0x28
		Il2CppObject* _PollDelay_k__BackingField; // 0x30
		Il2CppObject* _Data_k__BackingField; // 0x40

		::System::Boolean get_ShouldReconnect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_SHOULDRECONNECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitialization()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_ISINITIALIZATION_OFFSET))(nullptr);
		}

		::System::Void set_MessageId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_MESSAGEID_OFFSET))(str, nullptr);
		}

		::System::String* get_GroupsToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_GROUPSTOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Data(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::String* get_MessageId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_MESSAGEID_OFFSET))(nullptr);
		}

		::System::Void set_PollDelay(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_POLLDELAY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Data()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_GroupsToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_GROUPSTOKEN_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_PollDelay()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_GET_POLLDELAY_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsInitialization(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_ISINITIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShouldReconnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_MULTIMESSAGE_SET_SHOULDRECONNECT_OFFSET))(arg, nullptr);
		}

	};
}

