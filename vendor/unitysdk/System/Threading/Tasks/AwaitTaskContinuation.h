#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FC590)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET UNITYSDK_OFFSET(0x93FD300)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x93FD130)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GET_ISVALIDLOCATIONFORINLINING_OFFSET UNITYSDK_OFFSET(0x93FD550)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x93FD6A0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET UNITYSDK_OFFSET(0x93FD7F0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x93FD850)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET UNITYSDK_OFFSET(0x93FC870)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x93F9070)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET UNITYSDK_OFFSET(0x93F8130)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x93FD500)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x93FD900)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AwaitTaskContinuation_TypeDefinitionIndex = 24199;

	class AwaitTaskContinuation : public Il2CppObject
	{
	public:
		::System::Threading::ExecutionContext* m_capturedContext; // 0x10
		::System::Action* m_action; // 0x18
		::System::Threading::ContextCallback* s_invokeActionCallback; // 0x0

		::System::Void .ctor(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CreateTask(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Object*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_CREATETASK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsValidLocationForInlining()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GET_ISVALIDLOCATIONFORINLINING_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void InvokeAction(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_INVOKEACTION_OFFSET))(arg, nullptr);
		}

		::System::Threading::ContextCallback* GetInvokeActionCallback()
		{
			return (return (::System::Threading::ContextCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_GETINVOKEACTIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void RunCallback(::System::Threading::ContextCallback* arg, ::System::Object* arg, ::System::Threading::Tasks::Task&* arg)
		{
			((::System::Void(*)(::System::Threading::ContextCallback*, ::System::Object*, ::System::Threading::Tasks::Task&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RunOrScheduleAction(::System::Action* arg, ::System::Boolean arg, ::System::Threading::Tasks::Task&* arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::System::Threading::Tasks::Task&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_RUNORSCHEDULEACTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UnsafeScheduleAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_UNSAFESCHEDULEACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowAsyncIfNecessary(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_THROWASYNCIFNECESSARY_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION_MARKABORTED_OFFSET))(arg, nullptr);
		}

	};
}

