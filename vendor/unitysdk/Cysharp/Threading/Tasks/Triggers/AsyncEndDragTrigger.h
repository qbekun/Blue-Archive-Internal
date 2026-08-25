#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnEndDragHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IENDDRAGHANDLER.ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9DEF830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF880)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEF8F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DEFA50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEFB40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncEndDragTrigger_TypeDefinitionIndex = 36102;

	class AsyncEndDragTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IEndDragHandler.OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_UNITYENGINE.EVENTSYSTEMS.IENDDRAGHANDLER.ONENDDRAG_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* GetOnEndDragAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_GETONENDDRAGASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnEndDragAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnEndDragAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_ONENDDRAGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENDDRAGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

