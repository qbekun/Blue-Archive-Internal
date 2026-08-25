#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F9230)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x93FC010)
#define SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET UNITYSDK_OFFSET(0x93FC0C0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CompletionActionInvoker_TypeDefinitionIndex = 24180;

	class CompletionActionInvoker : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ITaskCompletionAction* m_action; // 0x10
		::System::Threading::Tasks::Task* m_completingTask; // 0x18

		::System::Void .ctor(::System::Threading::Tasks::ITaskCompletionAction* arg, ::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ITaskCompletionAction*, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_COMPLETIONACTIONINVOKER_MARKABORTED_OFFSET))(arg, nullptr);
		}

	};
}

