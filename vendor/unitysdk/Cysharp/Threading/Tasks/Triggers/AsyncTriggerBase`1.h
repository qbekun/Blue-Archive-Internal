#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_RAISEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_ADDHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_REMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerBase`1_TypeDefinitionIndex = 35974;

	class AsyncTriggerBase`1 : public Il2CppObject
	{
	public:
		Il2CppObject* triggerEvent; // 0x0
		::System::Boolean calledAwake; // 0x0
		::System::Boolean calledDestroy; // 0x0

		::System::Void RaiseEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_RAISEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void AddHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_ADDHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RemoveHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_REMOVEHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAsyncEnumerator(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGERBASE`1_GETASYNCENUMERATOR_OFFSET))(arg, nullptr);
		}

	};
}

