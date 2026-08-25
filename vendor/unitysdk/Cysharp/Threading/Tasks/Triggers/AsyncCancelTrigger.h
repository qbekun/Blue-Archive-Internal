#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnCancelHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9DEEAF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEEB40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEEBB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET UNITYSDK_OFFSET(0x9DEEC30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET UNITYSDK_OFFSET(0x9DEED10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEEE00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncCancelTrigger_TypeDefinitionIndex = 36094;

	class AsyncCancelTrigger : public ::FlatData::StarGoalType
	{
	public:
		::System::Void UnityEngine.EventSystems.ICancelHandler.OnCancel(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_UNITYENGINE.EVENTSYSTEMS.ICANCELHANDLER.ONCANCEL_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* GetOnCancelAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_GETONCANCELASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnCancelAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnCancelAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_ONCANCELASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCCANCELTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

