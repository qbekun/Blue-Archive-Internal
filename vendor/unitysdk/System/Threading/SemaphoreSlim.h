#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x93DCEF0)
#define SYSTEM_THREADING_SEMAPHORESLIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DCF10)
#define SYSTEM_THREADING_SEMAPHORESLIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DCF20)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x93DD0E0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x93DD800)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x93DD0F0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x93DDC50)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x93DDDD0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x93DDDE0)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x93DD8A0)
#define SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x93DDDF0)
#define SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET UNITYSDK_OFFSET(0x93DE060)
#define SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x93DDED0)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET UNITYSDK_OFFSET(0x93DE180)
#define SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET UNITYSDK_OFFSET(0x93DE190)
#define SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET UNITYSDK_OFFSET(0x93DE510)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DE520)
#define SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DE580)
#define SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x93DE630)
#define SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET UNITYSDK_OFFSET(0x93DD810)
#define SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x93DD0D0)
#define SYSTEM_THREADING_SEMAPHORESLIM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DE770)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreSlim_TypeDefinitionIndex = 24074;

	class SemaphoreSlim : public Il2CppObject
	{
	public:
		::System::Int32 m_currentCount; // 0x10
		::System::Int32 m_maxCount; // 0x14
		::System::Int32 m_waitCount; // 0x18
		::System::Object* m_lockObj; // 0x20
		::System::Threading::ManualResetEvent* m_waitHandle; // 0x28
		TaskNode* m_asyncHead; // 0x30
		TaskNode* m_asyncTail; // 0x38
		Il2CppObject* s_trueTask; // 0x0
		Il2CppObject* s_falseTask; // 0x8
		::System::Int32 NO_MAXIMUM; // 0x0
		Il2CppObject* s_cancellationTokenCanceledEventHandler; // 0x10

		::System::Int32 get_CurrentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GET_CURRENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Wait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET))(nullptr);
		}

		::System::Boolean Wait(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Wait(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean WaitUntilCountOrTimeout(::System::Int32 arg, ::System::UInt32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::UInt32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WaitAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* WaitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* WaitAsync(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITASYNC_OFFSET))(arg, arg, nullptr);
		}

		TaskNode* CreateAndAddAsyncWaiter()
		{
			return (return (TaskNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CREATEANDADDASYNCWAITER_OFFSET))(nullptr);
		}

		::System::Boolean RemoveAsyncWaiter(TaskNode* arg)
		{
			return (return (::System::Boolean(*)(TaskNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_REMOVEASYNCWAITER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* WaitUntilCountOrTimeoutAsync(TaskNode* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(TaskNode*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_WAITUNTILCOUNTORTIMEOUTASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Release()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET))(nullptr);
		}

		::System::Int32 Release(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void QueueWaiterTask(TaskNode* arg)
		{
			((::System::Void(*)(TaskNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_QUEUEWAITERTASK_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CancellationTokenCanceledEventHandler(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CANCELLATIONTOKENCANCELEDEVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckDispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_CHECKDISPOSE_OFFSET))(nullptr);
		}

		::System::String* GetResourceString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_GETRESOURCESTRING_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORESLIM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

