#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }
namespace Cysharp::Threading::Tasks { class IPlayerLoopItem; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x9DF2470)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET UNITYSDK_OFFSET(0x9DF2480)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD3D30)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x9DD36D0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner_TypeDefinitionIndex = 36132;

	class PlayerLoopRunner : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::PlayerLoopTiming* timing; // 0x10
		::System::Object* runningAndQueueLock; // 0x18
		::System::Object* arrayLock; // 0x20
		Il2CppObject* unhandledExceptionCallback; // 0x28
		::System::Int32 tail; // 0x30
		::System::Boolean running; // 0x34
		::Il2CppArray<::System::Object*>* loopItems; // 0x38
		Il2CppObject* waitQueue; // 0x40

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET))(nullptr);
		}

		::System::Void RunCore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddAction(::Cysharp::Threading::Tasks::IPlayerLoopItem* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::IPlayerLoopItem*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET))(arg, nullptr);
		}

	};
}

