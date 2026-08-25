#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x752F90)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x752FA0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x752FB0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x752EF0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x752FC0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x753690)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x7536A0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x7536B0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_HUB_OFFSET UNITYSDK_OFFSET(0x7536C0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x7536D0)
#define BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_HUB_OFFSET UNITYSDK_OFFSET(0x7536E0)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int MethodCallMessage_TypeDefinitionIndex = 21501;

	class MethodCallMessage : public Il2CppObject
	{
	public:
		::System::String* _Hub_k__BackingField; // 0x10
		::System::String* _Method_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x20
		Il2CppObject* _State_k__BackingField; // 0x28

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_METHOD_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_STATE_OFFSET))(nullptr);
		}

		::System::String* get_Hub()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_GET_HUB_OFFSET))(nullptr);
		}

		::System::Void set_Arguments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_ARGUMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Hub(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_METHODCALLMESSAGE_SET_HUB_OFFSET))(str, nullptr);
		}

	};
}

