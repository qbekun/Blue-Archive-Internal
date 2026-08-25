#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E9C60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x91E9C70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x91E9C80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x91E9DF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x91E9E00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x91E9E10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET UNITYSDK_OFFSET(0x91E9E20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET UNITYSDK_OFFSET(0x91E9E30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET UNITYSDK_OFFSET(0x91E9E40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E9E50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E9EA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET UNITYSDK_OFFSET(0x91E9EB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x91E9EC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x91D6DE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E9ED0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x91EA0A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET UNITYSDK_OFFSET(0x91EA0B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x91EA0C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET UNITYSDK_OFFSET(0x91EA0E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x91EA0D0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int AsyncResult_TypeDefinitionIndex = 24526;

	class AsyncResult : public Il2CppObject
	{
	public:
		::System::Object* async_state; // 0x10
		::System::Threading::WaitHandle* handle; // 0x18
		::System::Object* async_delegate; // 0x20
		::System::Int32 data; // 0x28
		::System::Object* object_data; // 0x30
		::System::Boolean sync_completed; // 0x38
		::System::Boolean completed; // 0x39
		::System::Boolean endinvoke_called; // 0x3A
		::System::Object* async_callback; // 0x40
		::System::Threading::ExecutionContext* current; // 0x48
		::System::Threading::ExecutionContext* original; // 0x50
		::System::Int64 add_time; // 0x58
		::System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message; // 0x60
		::System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl; // 0x68
		::System::Runtime::Remoting::Messaging::IMessage* reply_message; // 0x70
		::System::Threading::WaitCallback* orig_cb; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_AsyncState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCSTATE_OFFSET))(nullptr);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean get_EndInvokeCalled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ENDINVOKECALLED_OFFSET))(nullptr);
		}

		::System::Void set_EndInvokeCalled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_ENDINVOKECALLED_OFFSET))(arg, nullptr);
		}

		::System::Object* get_AsyncDelegate()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_ASYNCDELEGATE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_NextSink()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_NEXTSINK_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* GetReplyMessage()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GETREPLYMESSAGE_OFFSET))(nullptr);
		}

		::System::Void SetMessageCtrl(::System::Runtime::Remoting::Messaging::IMessageCtrl* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageCtrl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETMESSAGECTRL_OFFSET))(arg, nullptr);
		}

		::System::Void SetCompletedSynchronously(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SETCOMPLETEDSYNCHRONOUSLY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* EndInvoke()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_ENDINVOKE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::MonoMethodMessage* get_CallMessage()
		{
			return (return (::System::Runtime::Remoting::Messaging::MonoMethodMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_GET_CALLMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_CallMessage(::System::Runtime::Remoting::Messaging::MonoMethodMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::MonoMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SET_CALLMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET))(arg, nullptr);
		}

		::System::Object* Invoke()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ASYNCRESULT_INVOKE_OFFSET))(nullptr);
		}

	};
}

