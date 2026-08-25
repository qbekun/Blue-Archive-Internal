#pragma once
#include "../../../unitysdk.h"

#define INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITBEGIN_ASYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITBEGIN_SYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKSCHEDULED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Internal::Runtime::Augments
{
	inline static constexpr unsigned int TaskTraceCallbacks_TypeDefinitionIndex = 23659;

	class TaskTraceCallbacks : public Il2CppObject
	{
	public:
		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void TaskWaitBegin_Asynchronous(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITBEGIN_ASYNCHRONOUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskWaitBegin_Synchronous(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITBEGIN_SYNCHRONOUS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskWaitEnd(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKWAITEND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TaskScheduled(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_TASKTRACECALLBACKS_TASKSCHEDULED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

