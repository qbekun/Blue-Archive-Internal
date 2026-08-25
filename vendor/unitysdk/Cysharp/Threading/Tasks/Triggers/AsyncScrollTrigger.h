#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnScrollHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISCROLLHANDLER.ONSCROLL_OFFSET UNITYSDK_OFFSET(0x9DF12B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1300)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1370)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x9DF13F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET UNITYSDK_OFFSET(0x9DF14D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF15C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncScrollTrigger_TypeDefinitionIndex = 36118;

	class AsyncScrollTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IScrollHandler.OnScroll(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISCROLLHANDLER.ONSCROLL_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* GetOnScrollAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_GETONSCROLLASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnScrollAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnScrollAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_ONSCROLLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSCROLLTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

