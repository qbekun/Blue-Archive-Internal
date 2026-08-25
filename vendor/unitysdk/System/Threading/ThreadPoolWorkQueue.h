#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E59C0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET UNITYSDK_OFFSET(0x93E5AF0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET UNITYSDK_OFFSET(0x93E5D30)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET UNITYSDK_OFFSET(0x93E5DF0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x93E5E40)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET UNITYSDK_OFFSET(0x93E6760)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x93E6BA0)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET UNITYSDK_OFFSET(0x93E7330)
#define SYSTEM_THREADING_THREADPOOLWORKQUEUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E7910)

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_TypeDefinitionIndex = 24110;

	class ThreadPoolWorkQueue : public Il2CppObject
	{
	public:
		QueueSegment* queueHead; // 0x10
		QueueSegment* queueTail; // 0x18
		Il2CppObject* allThreadQueues; // 0x0
		::System::Int32 numOutstandingThreadRequests; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue()
		{
			return (return (::System::Threading::ThreadPoolWorkQueueThreadLocals*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURECURRENTTHREADHASQUEUE_OFFSET))(nullptr);
		}

		::System::Void EnsureThreadRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENSURETHREADREQUESTED_OFFSET))(nullptr);
		}

		::System::Void MarkThreadRequestSatisfied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_MARKTHREADREQUESTSATISFIED_OFFSET))(nullptr);
		}

		::System::Void Enqueue(::System::Threading::IThreadPoolWorkItem* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::IThreadPoolWorkItem*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_ENQUEUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LocalFindAndPop(::System::Threading::IThreadPoolWorkItem* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::IThreadPoolWorkItem*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_LOCALFINDANDPOP_OFFSET))(arg, nullptr);
		}

		::System::Void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals* arg, ::System::Threading::IThreadPoolWorkItem&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadPoolWorkQueueThreadLocals*, ::System::Threading::IThreadPoolWorkItem&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DEQUEUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Dispatch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_DISPATCH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_THREADPOOLWORKQUEUE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

