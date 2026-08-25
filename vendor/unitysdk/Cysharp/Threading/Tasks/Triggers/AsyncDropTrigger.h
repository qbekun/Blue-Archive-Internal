#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDropHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET UNITYSDK_OFFSET(0x9DEF4E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF5A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF700)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEF7F0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDropTrigger_TypeDefinitionIndex = 36100;

	class AsyncDropTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IDropHandler.OnDrop(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* GetOnDropAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_GETONDROPASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnDropAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnDropAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_ONDROPASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDROPTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

