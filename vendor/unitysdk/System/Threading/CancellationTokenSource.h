#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x93D7C30)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93DAB20)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x93DADD0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x93DAB40)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET UNITYSDK_OFFSET(0x93DADE0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x93DAE00)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x93DAED0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DAEF0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET UNITYSDK_OFFSET(0x93DAF20)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET UNITYSDK_OFFSET(0x93DAF40)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET UNITYSDK_OFFSET(0x93DB000)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET UNITYSDK_OFFSET(0x93DB0C0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET UNITYSDK_OFFSET(0x93DB2E0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DB410)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DB470)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x93DAE30)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93DB510)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET UNITYSDK_OFFSET(0x93D8170)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET UNITYSDK_OFFSET(0x93DAF60)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET UNITYSDK_OFFSET(0x93DB680)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET UNITYSDK_OFFSET(0x93DBFA0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET UNITYSDK_OFFSET(0x93DBEF0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x93DC1B0)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x93DC620)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x93DAB60)
#define SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DC700)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenSource_TypeDefinitionIndex = 24063;

	class CancellationTokenSource : public Il2CppObject
	{
	public:
		::System::Threading::CancellationTokenSource* s_canceledSource; // 0x0
		::System::Threading::CancellationTokenSource* s_neverCanceledSource; // 0x8
		::System::Int32 s_nLists; // 0x10
		::System::Threading::ManualResetEvent* _kernelEvent; // 0x10
		::Il2CppArray<::System::Object*>* _registeredCallbacksLists; // 0x18
		::System::Int32 CannotBeCanceled; // 0x0
		::System::Int32 NotCanceledState; // 0x0
		::System::Int32 NotifyingState; // 0x0
		::System::Int32 NotifyingCompleteState; // 0x0
		::System::Int32 _state; // 0x20
		::System::Int32 _threadIDExecutingCallbacks; // 0x24
		::System::Boolean _disposed; // 0x28
		::System::Threading::CancellationCallbackInfo* _executingCallback; // 0x30
		::System::Threading::Timer* _timer; // 0x38
		::System::Threading::TimerCallback* s_timerCallback; // 0x18

		::System::Boolean get_IsCancellationRequested()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCancellationCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISCANCELLATIONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_ISDISPOSED_OFFSET))(nullptr);
		}

		::System::Int32 get_ThreadIDExecutingCallbacks()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_THREADIDEXECUTINGCALLBACKS_OFFSET))(nullptr);
		}

		::System::Void set_ThreadIDExecutingCallbacks(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_SET_THREADIDEXECUTINGCALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationToken* get_Token()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Threading::CancellationCallbackInfo* get_ExecutingCallback()
		{
			return (return (::System::Threading::CancellationCallbackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_GET_EXECUTINGCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET))(nullptr);
		}

		::System::Void Cancel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAfter(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAfter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void TimerCallbackLogic(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_TIMERCALLBACKLOGIC_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWIFDISPOSED_OFFSET))(nullptr);
		}

		::System::Void ThrowObjectDisposedException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Threading::CancellationTokenRegistration* InternalRegister(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::SynchronizationContext* arg, ::System::Threading::ExecutionContext* arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_INTERNALREGISTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void NotifyCancellation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_NOTIFYCANCELLATION_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCallbackHandlers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_EXECUTECALLBACKHANDLERS_OFFSET))(arg, nullptr);
		}

		::System::Void CancellationCallbackCoreWork_OnSyncContext(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_ONSYNCCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationCallbackCoreWorkArguments*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CANCELLATIONCALLBACKCOREWORK_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::CancellationTokenSource*(*)(::System::Threading::CancellationToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::CancellationTokenSource* CreateLinkedTokenSource(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::CancellationTokenSource*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_CREATELINKEDTOKENSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationCallbackInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_WAITFORCALLBACKTOCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENSOURCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

