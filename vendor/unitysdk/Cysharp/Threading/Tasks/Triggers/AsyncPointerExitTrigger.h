#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerExitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTEREXITHANDLER.ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9DF0C10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0C60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0CD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0D50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0E30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0F20)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerExitTrigger_TypeDefinitionIndex = 36114;

	class AsyncPointerExitTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTEREXITHANDLER.ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* GetOnPointerExitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_GETONPOINTEREXITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnPointerExitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnPointerExitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_ONPOINTEREXITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTEREXITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

