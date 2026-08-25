#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnUpdateSelectedHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE.EVENTSYSTEMS.IUPDATESELECTEDHANDLER.ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x9DF1CA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1CF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DF1D60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1DE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DF1EC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF1FB0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncUpdateSelectedTrigger_TypeDefinitionIndex = 36124;

	class AsyncUpdateSelectedTrigger : public ::FlatData::StarGoalType
	{
	public:
		::System::Void UnityEngine.EventSystems.IUpdateSelectedHandler.OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_UNITYENGINE.EVENTSYSTEMS.IUPDATESELECTEDHANDLER.ONUPDATESELECTED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* GetOnUpdateSelectedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_GETONUPDATESELECTEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnUpdateSelectedAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnUpdateSelectedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_ONUPDATESELECTEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATESELECTEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

