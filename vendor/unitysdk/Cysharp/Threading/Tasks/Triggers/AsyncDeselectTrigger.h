#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDeselectHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDESELECTHANDLER.ONDESELECT_OFFSET UNITYSDK_OFFSET(0x9DEEE40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEEE90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEEF00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEEF80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DEF060)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEF150)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDeselectTrigger_TypeDefinitionIndex = 36096;

	class AsyncDeselectTrigger : public ::FlatData::StarGoalType
	{
	public:
		::System::Void UnityEngine.EventSystems.IDeselectHandler.OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_UNITYENGINE.EVENTSYSTEMS.IDESELECTHANDLER.ONDESELECT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler* GetOnDeselectAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler* GetOnDeselectAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_GETONDESELECTASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnDeselectAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnDeselectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_ONDESELECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDESELECTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

