#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnInitializePotentialDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IINITIALIZEPOTENTIALDRAGHANDLER.ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x9DEFB80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEFBD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEFC40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEFCC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEFDA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEFE90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncInitializePotentialDragTrigger_TypeDefinitionIndex = 36104;

	class AsyncInitializePotentialDragTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IInitializePotentialDragHandler.OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IINITIALIZEPOTENTIALDRAGHANDLER.ONINITIALIZEPOTENTIALDRAG_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* GetOnInitializePotentialDragAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* GetOnInitializePotentialDragAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_GETONINITIALIZEPOTENTIALDRAGASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnInitializePotentialDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnInitializePotentialDragAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_ONINITIALIZEPOTENTIALDRAGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCINITIALIZEPOTENTIALDRAGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

