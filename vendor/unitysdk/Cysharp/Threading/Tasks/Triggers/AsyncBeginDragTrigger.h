#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBeginDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IBEGINDRAGHANDLER.ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9DEE7A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE7F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE860)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE8E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE9C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEEAB0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBeginDragTrigger_TypeDefinitionIndex = 36092;

	class AsyncBeginDragTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IBEGINDRAGHANDLER.ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* GetOnBeginDragAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_GETONBEGINDRAGASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnBeginDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnBeginDragAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_ONBEGINDRAGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEGINDRAGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

