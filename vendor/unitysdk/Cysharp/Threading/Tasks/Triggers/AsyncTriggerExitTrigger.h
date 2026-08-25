#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Collider; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTriggerExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x9DECCE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DECD30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DECDA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DECE20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DECF00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DECFF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExitTrigger_TypeDefinitionIndex = 36076;

	class AsyncTriggerExitTrigger : public ::FlatData::ContentLockType
	{
	public:
		::System::Void OnTriggerExit(::UnityEngine::Collider* arg)
		{
			((::System::Void(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* GetOnTriggerExitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_GETONTRIGGEREXITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnTriggerExitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnTriggerExitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_ONTRIGGEREXITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

