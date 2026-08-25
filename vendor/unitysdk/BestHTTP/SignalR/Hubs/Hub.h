#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalR::Hubs { class OnMethodCallDelegate; }
namespace BestHTTP::SignalR { class Connection; }
namespace BestHTTP::SignalR::Hubs { class OnMethodCallCallbackDelegate; }
namespace BestHTTP::SignalR::Hubs { class OnMethodResultDelegate; }
namespace BestHTTP::SignalR::Hubs { class OnMethodFailedDelegate; }
namespace BestHTTP::SignalR::Hubs { class OnMethodProgressDelegate; }
namespace BestHTTP::SignalR::Messages { class ClientMessage; }
namespace BestHTTP::SignalR::Messages { class MethodCallMessage; }
namespace BestHTTP::SignalR::Messages { class IServerMessage; }

#define BESTHTTP_SIGNALR_HUBS_HUB_GET_NAME_OFFSET UNITYSDK_OFFSET(0x754A90)
#define BESTHTTP_SIGNALR_HUBS_HUB_SET_NAME_OFFSET UNITYSDK_OFFSET(0x754AA0)
#define BESTHTTP_SIGNALR_HUBS_HUB_GET_STATE_OFFSET UNITYSDK_OFFSET(0x754AB0)
#define BESTHTTP_SIGNALR_HUBS_HUB_ADD_ONMETHODCALL_OFFSET UNITYSDK_OFFSET(0x754B30)
#define BESTHTTP_SIGNALR_HUBS_HUB_REMOVE_ONMETHODCALL_OFFSET UNITYSDK_OFFSET(0x754BD0)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x754C70)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BESTHTTP_SIGNALR_HUBS_HUB_.CTOR_OFFSET UNITYSDK_OFFSET(0x754C90)
#define BESTHTTP_SIGNALR_HUBS_HUB_.CTOR_OFFSET UNITYSDK_OFFSET(0x754CA0)
#define BESTHTTP_SIGNALR_HUBS_HUB_ON_OFFSET UNITYSDK_OFFSET(0x754E40)
#define BESTHTTP_SIGNALR_HUBS_HUB_OFF_OFFSET UNITYSDK_OFFSET(0x754EA0)
#define BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET UNITYSDK_OFFSET(0x754EF0)
#define BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET UNITYSDK_OFFSET(0x755280)
#define BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET UNITYSDK_OFFSET(0x7552A0)
#define BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET UNITYSDK_OFFSET(0x7552D0)
#define BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET UNITYSDK_OFFSET(0x754F20)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.CALL_OFFSET UNITYSDK_OFFSET(0x755300)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.HASSENTMESSAGEID_OFFSET UNITYSDK_OFFSET(0x755BF0)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.CLOSE_OFFSET UNITYSDK_OFFSET(0x755C40)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.ONMETHOD_OFFSET UNITYSDK_OFFSET(0x755C90)
#define BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.ONMESSAGE_OFFSET UNITYSDK_OFFSET(0x756560)
#define BESTHTTP_SIGNALR_HUBS_HUB_MERGESTATE_OFFSET UNITYSDK_OFFSET(0x756140)
#define BESTHTTP_SIGNALR_HUBS_HUB_BUILDMESSAGE_OFFSET UNITYSDK_OFFSET(0x755450)

namespace BestHTTP::SignalR::Hubs
{
	inline static constexpr unsigned int Hub_TypeDefinitionIndex = 21512;

	class Hub : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		Il2CppObject* state; // 0x18
		::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* OnMethodCall; // 0x20
		Il2CppObject* SentMessages; // 0x28
		Il2CppObject* MethodTable; // 0x30
		::System::Text::StringBuilder* builder; // 0x38
		::BestHTTP::SignalR::Connection* _BestHTTP.SignalR.Hubs.IHub.Connection_k__BackingField; // 0x40

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_SET_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void add_OnMethodCall(::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::OnMethodCallDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_ADD_ONMETHODCALL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMethodCall(::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Hubs::OnMethodCallDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_REMOVE_ONMETHODCALL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalR::Connection* BestHTTP.SignalR.Hubs.IHub.get_Connection()
		{
			return (return (::BestHTTP::SignalR::Connection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.GET_CONNECTION_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Hubs.IHub.set_Connection(::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.SET_CONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SignalR::Connection* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SignalR::Connection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void On(::System::String* str, ::BestHTTP::SignalR::Hubs::OnMethodCallCallbackDelegate* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SignalR::Hubs::OnMethodCallCallbackDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_ON_OFFSET))(str, arg, nullptr);
		}

		::System::Void Off(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_OFF_OFFSET))(str, nullptr);
		}

		::System::Boolean Call(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Call(::System::String* str, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean Call(::System::String* str, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean Call(::System::String* str, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean Call(::System::String* str, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* arg, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::BestHTTP::SignalR::Hubs::OnMethodResultDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate*, ::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_CALL_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BestHTTP.SignalR.Hubs.IHub.Call(::BestHTTP::SignalR::Messages::ClientMessage* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SignalR::Messages::ClientMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.CALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean BestHTTP.SignalR.Hubs.IHub.HasSentMessageId(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.HASSENTMESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SignalR.Hubs.IHub.Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.CLOSE_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.SignalR.Hubs.IHub.OnMethod(::BestHTTP::SignalR::Messages::MethodCallMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::MethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.ONMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.SignalR.Hubs.IHub.OnMessage(::BestHTTP::SignalR::Messages::IServerMessage* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalR::Messages::IServerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BESTHTTP.SIGNALR.HUBS.IHUB.ONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void MergeState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_MERGESTATE_OFFSET))(arg, nullptr);
		}

		::System::String* BuildMessage(::BestHTTP::SignalR::Messages::ClientMessage* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SignalR::Messages::ClientMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_HUBS_HUB_BUILDMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

