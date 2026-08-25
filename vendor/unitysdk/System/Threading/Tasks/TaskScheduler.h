#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_MAXIMUMCONCURRENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x93FEEE0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET UNITYSDK_OFFSET(0x93F4430)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x93FEEF0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x93FEF00)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x93FEF10)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FEF20)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x93FEF30)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x93EF8C0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET UNITYSDK_OFFSET(0x93F7EB0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_FROMCURRENTSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x93FEF80)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET UNITYSDK_OFFSET(0x93F8C00)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASK_OFFSET UNITYSDK_OFFSET(0x93FF090)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93FDC00)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93FF110)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskScheduler_TypeDefinitionIndex = 24204;

	class TaskScheduler : public Il2CppObject
	{
	public:
		Il2CppObject* s_activeTaskSchedulers; // 0x0
		::System::Threading::Tasks::TaskScheduler* s_defaultTaskScheduler; // 0x8
		::System::Int32 s_taskSchedulerIdCounter; // 0x10
		::System::Int32 m_taskSchedulerId; // 0x10
		Il2CppObject* _unobservedTaskException; // 0x18
		::System::Threading::Lock* _unobservedTaskExceptionLockObject; // 0x20

		::System::Void QueueTask(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_QUEUETASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MaximumConcurrencyLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_MAXIMUMCONCURRENCYLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean TryRunInline(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYRUNINLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYDEQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyWorkItemProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresAtomicStartTransition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_.CTOR_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* get_Default()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* get_Current()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* get_InternalCurrent()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_INTERNALCURRENT_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* FromCurrentSynchronizationContext()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_FROMCURRENTSYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean TryExecuteTask(::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_TRYEXECUTETASK_OFFSET))(arg, nullptr);
		}

		::System::Void PublishUnobservedTaskException(::System::Object* arg, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

