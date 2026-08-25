#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::EventSystems { class AxisEventData; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMoveHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE.EVENTSYSTEMS.IMOVEHANDLER.ONMOVE_OFFSET UNITYSDK_OFFSET(0x9DEFED0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEFF20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEFF90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x9DF0010)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x9DF00F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF01E0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMoveTrigger_TypeDefinitionIndex = 36106;

	class AsyncMoveTrigger : public ::FlatData::WeekDungeonType
	{
	public:
		::System::Void UnityEngine.EventSystems.IMoveHandler.OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_UNITYENGINE.EVENTSYSTEMS.IMOVEHANDLER.ONMOVE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* GetOnMoveAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_GETONMOVEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnMoveAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnMoveAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_ONMOVEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOVETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

