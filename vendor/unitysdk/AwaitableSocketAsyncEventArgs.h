#pragma once
#include "unitysdk.h"

#define AWAITABLESOCKETASYNCEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA2710)
#define AWAITABLESOCKETASYNCEVENTARGS_GET_WRAPEXCEPTIONSINIOEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x9AA2810)
#define AWAITABLESOCKETASYNCEVENTARGS_SET_WRAPEXCEPTIONSINIOEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x9AA2820)
#define AWAITABLESOCKETASYNCEVENTARGS_RESERVE_OFFSET UNITYSDK_OFFSET(0x9AA2830)
#define AWAITABLESOCKETASYNCEVENTARGS_RELEASE_OFFSET UNITYSDK_OFFSET(0x9AA28B0)
#define AWAITABLESOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AA2930)
#define AWAITABLESOCKETASYNCEVENTARGS_RECEIVEASYNC_OFFSET UNITYSDK_OFFSET(0x9AA2ED0)
#define AWAITABLESOCKETASYNCEVENTARGS_SENDASYNCFORNETWORKSTREAM_OFFSET UNITYSDK_OFFSET(0x9AA3150)
#define AWAITABLESOCKETASYNCEVENTARGS_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9AA32B0)
#define AWAITABLESOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9AA33F0)
#define AWAITABLESOCKETASYNCEVENTARGS_INVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x9AA2B80)
#define AWAITABLESOCKETASYNCEVENTARGS_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9AA3770)
#define AWAITABLESOCKETASYNCEVENTARGS_SYSTEM.THREADING.TASKS.SOURCES.IVALUETASKSOURCE.GETRESULT_OFFSET UNITYSDK_OFFSET(0x9AA38C0)
#define AWAITABLESOCKETASYNCEVENTARGS_THROWINCORRECTTOKENEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9AA3390)
#define AWAITABLESOCKETASYNCEVENTARGS_THROWMULTIPLECONTINUATIONSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9AA3710)
#define AWAITABLESOCKETASYNCEVENTARGS_THROWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9AA3890)
#define AWAITABLESOCKETASYNCEVENTARGS_CREATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9AA3080)
#define AWAITABLESOCKETASYNCEVENTARGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA39E0)

	inline static constexpr unsigned int AwaitableSocketAsyncEventArgs_TypeDefinitionIndex = 29895;

	class AwaitableSocketAsyncEventArgs : public Il2CppObject
	{
	public:
		AwaitableSocketAsyncEventArgs* Reserved; // 0x0
		Il2CppObject* s_completedSentinel; // 0x8
		Il2CppObject* s_availableSentinel; // 0x10
		Il2CppObject* _continuation; // 0xB8
		::System::Threading::ExecutionContext* _executionContext; // 0xC0
		::System::Object* _scheduler; // 0xC8
		::System::Int16 _token; // 0xD0
		::System::Boolean _WrapExceptionsInIOExceptions_k__BackingField; // 0xD2

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_WrapExceptionsInIOExceptions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_GET_WRAPEXCEPTIONSINIOEXCEPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_WrapExceptionsInIOExceptions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_SET_WRAPEXCEPTIONSINIOEXCEPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Reserve()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_RESERVE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketAsyncEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReceiveAsync(::System::Net::Sockets::Socket* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_RECEIVEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* SendAsyncForNetworkStream(::System::Net::Sockets::Socket* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::System::Net::Sockets::Socket*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_SENDASYNCFORNETWORKSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Sources::ValueTaskSourceStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::System::Threading::Tasks::Sources::ValueTaskSourceStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_ONCOMPLETED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InvokeContinuation(Il2CppObject* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_INVOKECONTINUATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetResult(::System::Int16 arg)
		{
			return (return (::System::Int32(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Threading.Tasks.Sources.IValueTaskSource.GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_SYSTEM.THREADING.TASKS.SOURCES.IVALUETASKSOURCE.GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIncorrectTokenException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_THROWINCORRECTTOKENEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowMultipleContinuationsException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_THROWMULTIPLECONTINUATIONSEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowException(::System::Net::Sockets::SocketError* arg)
		{
			((::System::Void(*)(::System::Net::Sockets::SocketError*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_THROWEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Exception* CreateException(::System::Net::Sockets::SocketError* arg)
		{
			return (return (::System::Exception*(*)(::System::Net::Sockets::SocketError*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_CREATEEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITABLESOCKETASYNCEVENTARGS_.CCTOR_OFFSET))(nullptr);
		}

	};

