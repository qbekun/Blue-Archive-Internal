#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x7536F0)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x753700)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74FA10)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x753710)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x753720)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x753730)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x753740)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x753750)
#define BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x753980)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int ResultMessage_TypeDefinitionIndex = 21502;

	class ResultMessage : public Il2CppObject
	{
	public:
		::System::UInt64 _InvocationId_k__BackingField; // 0x10
		::System::Object* _ReturnValue_k__BackingField; // 0x18
		Il2CppObject* _State_k__BackingField; // 0x20

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_STATE_OFFSET))(nullptr);
		}

		::System::UInt64 get_InvocationId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_INVOCATIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReturnValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_RETURNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Object* get_ReturnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_InvocationId(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_RESULTMESSAGE_SET_INVOCATIONID_OFFSET))(arg, nullptr);
		}

	};
}

