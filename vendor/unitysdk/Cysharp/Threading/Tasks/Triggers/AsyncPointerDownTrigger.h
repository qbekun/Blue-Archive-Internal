#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerDownHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERDOWNHANDLER.ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9DF0570)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF05C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0630)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x9DF06B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0880)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerDownTrigger_TypeDefinitionIndex = 36110;

	class AsyncPointerDownTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERDOWNHANDLER.ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* GetOnPointerDownAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_GETONPOINTERDOWNASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnPointerDownAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnPointerDownAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_ONPOINTERDOWNASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERDOWNTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

