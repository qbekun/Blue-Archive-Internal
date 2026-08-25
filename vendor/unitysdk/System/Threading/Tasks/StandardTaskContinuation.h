#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F9AD0)
#define SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET UNITYSDK_OFFSET(0x93FC3B0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int StandardTaskContinuation_TypeDefinitionIndex = 24194;

	class StandardTaskContinuation : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Threading::Tasks::TaskContinuationOptions* m_options; // 0x18
		::System::Threading::Tasks::TaskScheduler* m_taskScheduler; // 0x20

		::System::Void .ctor(::System::Threading::Tasks::Task* arg, ::System::Threading::Tasks::TaskContinuationOptions* arg, ::System::Threading::Tasks::TaskScheduler* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Threading::Tasks::TaskContinuationOptions*, ::System::Threading::Tasks::TaskScheduler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_STANDARDTASKCONTINUATION_RUN_OFFSET))(arg, arg, nullptr);
		}

	};
}

