#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerClickHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9DF0220)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0270)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF02E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0360)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0530)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerClickTrigger_TypeDefinitionIndex = 36108;

	class AsyncPointerClickTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERCLICKHANDLER.ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler* GetOnPointerClickAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler* GetOnPointerClickAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_GETONPOINTERCLICKASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnPointerClickAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnPointerClickAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_ONPOINTERCLICKASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERCLICKTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

