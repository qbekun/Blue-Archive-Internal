#pragma once
#include "../../../unitysdk.h"

namespace Internal::Runtime::Augments { class AsyncStatus; }

#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_GET_LOGGINGON_OFFSET UNITYSDK_OFFSET(0x93F1E10)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONCREATION_OFFSET UNITYSDK_OFFSET(0x93F1E20)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONCOMPLETION_OFFSET UNITYSDK_OFFSET(0x93F1E30)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONRELATION_OFFSET UNITYSDK_OFFSET(0x93F1E40)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACESYNCHRONOUSWORKSTART_OFFSET UNITYSDK_OFFSET(0x93F1E50)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET UNITYSDK_OFFSET(0x93F1E60)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_ADDTOACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x93F1E70)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_ADDTOACTIVETASKSNONINLINED_OFFSET UNITYSDK_OFFSET(0x93F1F10)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_REMOVEFROMACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x93F2140)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_REMOVEFROMACTIVETASKSNONINLINED_OFFSET UNITYSDK_OFFSET(0x93F21E0)
#define SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93F2360)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int DebuggerSupport_TypeDefinitionIndex = 24166;

	class DebuggerSupport : public Il2CppObject
	{
	public:
		Il2CppObject* s_activeTasks; // 0x0
		::System::Object* s_activeTasksLock; // 0x8

		::System::Boolean get_LoggingOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_GET_LOGGINGON_OFFSET))(nullptr);
		}

		::System::Void TraceOperationCreation(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::Task* arg, ::System::String* str, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::Task*, ::System::String*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONCREATION_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void TraceOperationCompletion(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::Task* arg, ::Internal::Runtime::Augments::AsyncStatus* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::Task*, ::Internal::Runtime::Augments::AsyncStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONCOMPLETION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TraceOperationRelation(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::Task* arg, ::System::Threading::Tasks::CausalityRelation* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::CausalityRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACEOPERATIONRELATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TraceSynchronousWorkStart(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::Task* arg, ::System::Threading::Tasks::CausalitySynchronousWork* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::Task*, ::System::Threading::Tasks::CausalitySynchronousWork*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACESYNCHRONOUSWORKSTART_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TraceSynchronousWorkCompletion(::System::Threading::Tasks::CausalityTraceLevel* arg, ::System::Threading::Tasks::CausalitySynchronousWork* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::CausalityTraceLevel*, ::System::Threading::Tasks::CausalitySynchronousWork*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_TRACESYNCHRONOUSWORKCOMPLETION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToActiveTasks(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_ADDTOACTIVETASKS_OFFSET))(arg, nullptr);
		}

		::System::Void AddToActiveTasksNonInlined(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_ADDTOACTIVETASKSNONINLINED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromActiveTasks(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_REMOVEFROMACTIVETASKS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromActiveTasksNonInlined(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_REMOVEFROMACTIVETASKSNONINLINED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_DEBUGGERSUPPORT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

