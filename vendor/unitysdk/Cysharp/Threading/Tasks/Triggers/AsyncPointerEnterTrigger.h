#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerEnterHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERENTERHANDLER.ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x9DF08C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0910)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0980)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0A00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0AE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0BD0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerEnterTrigger_TypeDefinitionIndex = 36112;

	class AsyncPointerEnterTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERENTERHANDLER.ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler* GetOnPointerEnterAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler* GetOnPointerEnterAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_GETONPOINTERENTERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnPointerEnterAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnPointerEnterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_ONPOINTERENTERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERENTERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

