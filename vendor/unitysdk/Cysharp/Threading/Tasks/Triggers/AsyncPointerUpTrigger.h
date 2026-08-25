#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPointerUpHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERUPHANDLER.ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9DF0F60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF0FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET UNITYSDK_OFFSET(0x9DF10A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1270)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPointerUpTrigger_TypeDefinitionIndex = 36116;

	class AsyncPointerUpTrigger : public ::FlatData::CollectionUnlockType
	{
	public:
		::System::Void UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_UNITYENGINE.EVENTSYSTEMS.IPOINTERUPHANDLER.ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* GetOnPointerUpAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_GETONPOINTERUPASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnPointerUpAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnPointerUpAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_ONPOINTERUPASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOINTERUPTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

