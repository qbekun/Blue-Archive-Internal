#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EF750)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_TASKSCHEDULER_OFFSET UNITYSDK_OFFSET(0x93EF850)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVETASKSCHEDULER_OFFSET UNITYSDK_OFFSET(0x93EF860)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_MAXDEGREEOFPARALLELISM_OFFSET UNITYSDK_OFFSET(0x93EF9A0)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x93EF9B0)
#define SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVEMAXCONCURRENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x93EF9C0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelOptions_TypeDefinitionIndex = 24147;

	class ParallelOptions : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::TaskScheduler* _scheduler; // 0x10
		::System::Int32 _maxDegreeOfParallelism; // 0x18
		::System::Threading::CancellationToken* _cancellationToken; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* get_TaskScheduler()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_TASKSCHEDULER_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::TaskScheduler* get_EffectiveTaskScheduler()
		{
			return (return (::System::Threading::Tasks::TaskScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVETASKSCHEDULER_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxDegreeOfParallelism()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_MAXDEGREEOFPARALLELISM_OFFSET))(nullptr);
		}

		::System::Threading::CancellationToken* get_CancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Int32 get_EffectiveMaxConcurrencyLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELOPTIONS_GET_EFFECTIVEMAXCONCURRENCYLEVEL_OFFSET))(nullptr);
		}

	};
}

