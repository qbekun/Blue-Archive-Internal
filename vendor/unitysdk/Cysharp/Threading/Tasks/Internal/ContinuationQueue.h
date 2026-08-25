#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD3C90)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET UNITYSDK_OFFSET(0x9DF1FF0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x9DD4080)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET UNITYSDK_OFFSET(0x9DF2000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ContinuationQueue_TypeDefinitionIndex = 36128;

	class ContinuationQueue : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::PlayerLoopTiming* timing; // 0x10
		::System::Threading::SpinLock* gate; // 0x14
		::System::Boolean dequing; // 0x18
		::System::Int32 actionListCount; // 0x1C
		::Il2CppArray<::System::Object*>* actionList; // 0x20
		::System::Int32 waitingListCount; // 0x28
		::Il2CppArray<::System::Object*>* waitingList; // 0x30

		::System::Void .ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET))(nullptr);
		}

		::System::Void Enqueue(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void RunCore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET))(nullptr);
		}

	};
}

