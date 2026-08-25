#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_PARALLEL_FOR_OFFSET UNITYSDK_OFFSET(0x93EFAB0)
#define SYSTEM_THREADING_TASKS_PARALLEL_CHECKTIMEOUTREACHED_OFFSET UNITYSDK_OFFSET(0x93EFBB0)
#define SYSTEM_THREADING_TASKS_PARALLEL_COMPUTETIMEOUTPOINT_OFFSET UNITYSDK_OFFSET(0x93EFBE0)
#define SYSTEM_THREADING_TASKS_PARALLEL_FORWORKER64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_TASKS_PARALLEL_REDUCETOSINGLECANCELLATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93EFC00)
#define SYSTEM_THREADING_TASKS_PARALLEL_THROWSINGLECANCELLATIONEXCEPTIONOROTHEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x93F0100)
#define SYSTEM_THREADING_TASKS_PARALLEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93F0170)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 24149;

	class Parallel : public Il2CppObject
	{
	public:
		::System::Int32 s_forkJoinContextID; // 0x0
		::System::Threading::Tasks::ParallelOptions* s_defaultParallelOptions; // 0x8

		::System::Threading::Tasks::ParallelLoopResult* For(::System::Int64 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			return (return (::System::Threading::Tasks::ParallelLoopResult*(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_FOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckTimeoutReached(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_CHECKTIMEOUTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 ComputeTimeoutPoint(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_COMPUTETIMEOUTPOINT_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::ParallelLoopResult* ForWorker64(::System::Int64 arg, ::System::Int64 arg, ::System::Threading::Tasks::ParallelOptions* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Threading::Tasks::ParallelLoopResult*(*)(::System::Int64, ::System::Int64, ::System::Threading::Tasks::ParallelOptions*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_FORWORKER64_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::OperationCanceledException* ReduceToSingleCancellationException(::System::Collections::ICollection* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::OperationCanceledException*(*)(::System::Collections::ICollection*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_REDUCETOSINGLECANCELLATIONEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowSingleCancellationExceptionOrOtherException(::System::Collections::ICollection* arg, ::System::Threading::CancellationToken* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::System::Threading::CancellationToken*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_THROWSINGLECANCELLATIONEXCEPTIONOROTHEREXCEPTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

