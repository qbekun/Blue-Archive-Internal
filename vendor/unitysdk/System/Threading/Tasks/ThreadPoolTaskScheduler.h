#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FF210)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x93FF530)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x93FF8D0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x93FF9E0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x93FF9F0)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x93FFA10)
#define SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93FFA20)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ThreadPoolTaskScheduler_TypeDefinitionIndex = 24209;

	class ThreadPoolTaskScheduler : public Il2CppObject
	{
	public:
		::System::Threading::ParameterizedThreadStart* s_longRunningThreadWork; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void QueueTask(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_QUEUETASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryDequeue(::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_TRYDEQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void NotifyWorkItemProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_NOTIFYWORKITEMPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresAtomicStartTransition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_GET_REQUIRESATOMICSTARTTRANSITION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_THREADPOOLTASKSCHEDULER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

