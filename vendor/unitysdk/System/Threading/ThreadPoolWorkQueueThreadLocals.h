#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E5B90)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x93E7DF0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93E7EE0)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueueThreadLocals_TypeDefinitionIndex = 24111;

	class ThreadPoolWorkQueueThreadLocals : public Il2CppObject
	{
	public:
		::System::Threading::ThreadPoolWorkQueueThreadLocals* threadLocals;
		::System::Threading::ThreadPoolWorkQueue* workQueue; // 0x10
		WorkStealingQueue* workStealingQueue; // 0x18
		::System::Random* random; // 0x20

		::System::Void .ctor(::System::Threading::ThreadPoolWorkQueue* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadPoolWorkQueue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CleanUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUETHREADLOCALS_FINALIZE_OFFSET))(nullptr);
		}

	};
}

