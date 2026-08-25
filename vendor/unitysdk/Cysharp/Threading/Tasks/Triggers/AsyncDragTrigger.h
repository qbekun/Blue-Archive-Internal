#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDRAGHANDLER.ONDRAG_OFFSET UNITYSDK_OFFSET(0x9DEF190)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF1E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF250)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF2D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF3B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEF4A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDragTrigger_TypeDefinitionIndex = 36098;

	class AsyncDragTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IDragHandler.OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDRAGHANDLER.ONDRAG_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* GetOnDragAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_GETONDRAGASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnDragAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_ONDRAGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

