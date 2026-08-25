#pragma once
#include "../../../../unitysdk.h"

namespace Internal::Runtime::Augments { class TaskTraceCallbacks; }

#define INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x914C050)
#define INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITBEGIN_ASYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x914C0B0)
#define INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITBEGIN_SYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x914C120)
#define INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITEND_OFFSET UNITYSDK_OFFSET(0x914C190)
#define INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKSCHEDULED_OFFSET UNITYSDK_OFFSET(0x914C200)

namespace Internal::Threading::Tasks::Tracing
{
	inline static constexpr unsigned int TaskTrace_TypeDefinitionIndex = 23657;

	class TaskTrace : public Il2CppObject
	{
	public:
		::Internal::Runtime::Augments::TaskTraceCallbacks* s_callbacks; // 0x0

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void TaskWaitBegin_Asynchronous(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITBEGIN_ASYNCHRONOUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskWaitBegin_Synchronous(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITBEGIN_SYNCHRONOUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskWaitEnd(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKWAITEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskScheduled(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_THREADING_TASKS_TRACING_TASKTRACE_TASKSCHEDULED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

