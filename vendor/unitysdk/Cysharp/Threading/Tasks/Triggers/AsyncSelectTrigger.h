#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnSelectHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET UNITYSDK_OFFSET(0x9DF1600)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1650)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF16C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1910)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncSelectTrigger_TypeDefinitionIndex = 36120;

	class AsyncSelectTrigger : public ::FlatData::StarGoalType
	{
	public:
		::System::Void UnityEngine.EventSystems.ISelectHandler.OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* GetOnSelectAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_GETONSELECTASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnSelectAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnSelectAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_ONSELECTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSELECTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

