#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKAWAITERS_FORCEASYNC_OFFSET UNITYSDK_OFFSET(0x93EF660)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskAwaiters_TypeDefinitionIndex = 24144;

	class TaskAwaiters : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ForceAsyncAwaiter* ForceAsync(::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Threading::Tasks::ForceAsyncAwaiter*(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKAWAITERS_FORCEASYNC_OFFSET))(arg, nullptr);
		}

	};
}

