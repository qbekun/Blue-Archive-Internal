#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR { class MessageTypes; }

#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ISHUBERROR_OFFSET UNITYSDK_OFFSET(0x753990)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x7539A0)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET UNITYSDK_OFFSET(0x7539B0)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x74FA20)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x753E00)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ADDITIONALDATA_OFFSET UNITYSDK_OFFSET(0x753E10)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x753E20)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x753E30)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x753E40)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x753E50)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET UNITYSDK_OFFSET(0x753E60)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x753E70)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x753E80)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ISHUBERROR_OFFSET UNITYSDK_OFFSET(0x753E90)
#define BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x753EA0)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int FailureMessage_TypeDefinitionIndex = 21503;

	class FailureMessage : public Il2CppObject
	{
	public:
		::System::UInt64 _InvocationId_k__BackingField; // 0x10
		::System::Boolean _IsHubError_k__BackingField; // 0x18
		::System::String* _ErrorMessage_k__BackingField; // 0x20
		Il2CppObject* _AdditionalData_k__BackingField; // 0x28
		::System::String* _StackTrace_k__BackingField; // 0x30
		Il2CppObject* _State_k__BackingField; // 0x38

		::System::Void set_IsHubError(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ISHUBERROR_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_InvocationId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_INVOCATIONID_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Messages.IServerMessage.Parse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ADDITIONALDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AdditionalData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ADDITIONALDATA_OFFSET))(nullptr);
		}

		::System::Void set_StackTrace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_STACKTRACE_OFFSET))(str, nullptr);
		}

		::System::Void set_InvocationId(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_INVOCATIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::MessageTypes* BestHTTP.SignalR.Messages.IServerMessage.get_Type()
		{
			return (return (::BestHTTP::SignalR::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_BESTHTTP.SIGNALR.MESSAGES.ISERVERMESSAGE.GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_ErrorMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_SET_ERRORMESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* get_StackTrace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_STACKTRACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsHubError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ISHUBERROR_OFFSET))(nullptr);
		}

		::System::String* get_ErrorMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_FAILUREMESSAGE_GET_ERRORMESSAGE_OFFSET))(nullptr);
		}

	};
}

