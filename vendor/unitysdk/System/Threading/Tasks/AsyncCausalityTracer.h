#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET UNITYSDK_OFFSET(0x93FB7F0)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET UNITYSDK_OFFSET(0x93FFC00)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x93FFC10)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET UNITYSDK_OFFSET(0x93FFC20)
#define SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET UNITYSDK_OFFSET(0x93FB800)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int AsyncCausalityTracer_TypeDefinitionIndex = 24214;

	class AsyncCausalityTracer : public Il2CppObject
	{
	public:
		::System::Boolean get_LoggingOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_GET_LOGGINGON_OFFSET))(nullptr);
		}

		::System::Void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Int32 arg, ::System::String* str, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Int32, ::System::String*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCREATION_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Int32 arg, ::System::Threading::Tasks::AsyncCausalityStatus* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Int32, ::System::Threading::Tasks::AsyncCausalityStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACEOPERATIONCOMPLETION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Int32 arg, ::System::Threading::Tasks::CausalitySynchronousWork* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Int32, ::System::Threading::Tasks::CausalitySynchronousWork*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKSTART_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::CausalitySynchronousWork* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::CausalitySynchronousWork*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_ASYNCCAUSALITYTRACER_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET))(arg, arg, nullptr);
		}

	};
}

