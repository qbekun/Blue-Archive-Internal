#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F7FC0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x93FCDB0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerAwaitTaskContinuation_TypeDefinitionIndex = 24198;

	class TaskSchedulerAwaitTaskContinuation : public ::UnityEngine::TouchType
	{
	public:
		::System::Threading::Tasks::TaskScheduler* m_scheduler; // 0x20

		::System::Void .ctor(::System::Threading::Tasks::TaskScheduler* arg, ::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::TaskScheduler*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULERAWAITTASKCONTINUATION_RUN_OFFSET))(arg, arg, nullptr);
		}

	};
}

