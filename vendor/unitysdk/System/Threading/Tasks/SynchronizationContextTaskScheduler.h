#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FEFD0)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_QUEUETASK_OFFSET UNITYSDK_OFFSET(0x93FF260)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET UNITYSDK_OFFSET(0x93FF300)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_GET_MAXIMUMCONCURRENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x93FF340)
#define SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93FF350)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int SynchronizationContextTaskScheduler_TypeDefinitionIndex = 24206;

	class SynchronizationContextTaskScheduler : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContext* m_synchronizationContext; // 0x18
		::System::Threading::SendOrPostCallback* s_postCallback; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void QueueTask(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_QUEUETASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryExecuteTaskInline(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_TRYEXECUTETASKINLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MaximumConcurrencyLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_GET_MAXIMUMCONCURRENCYLEVEL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_SYNCHRONIZATIONCONTEXTTASKSCHEDULER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

