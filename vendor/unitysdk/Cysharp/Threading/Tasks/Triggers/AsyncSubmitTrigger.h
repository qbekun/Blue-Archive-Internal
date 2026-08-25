#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnSubmitHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x9DF1950)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF19A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1A10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1A90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1B70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1C60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncSubmitTrigger_TypeDefinitionIndex = 36122;

	class AsyncSubmitTrigger : public ::FlatData::StarGoalType
	{
	public:
		::System::Void UnityEngine.EventSystems.ISubmitHandler.OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISUBMITHANDLER.ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler* GetOnSubmitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler* GetOnSubmitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_GETONSUBMITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSubmitAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnSubmitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_ONSUBMITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSUBMITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

