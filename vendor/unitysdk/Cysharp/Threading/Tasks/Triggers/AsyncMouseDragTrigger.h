#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseDragHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x9DE82B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8400)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET UNITYSDK_OFFSET(0x9DE84E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE85D0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseDragTrigger_TypeDefinitionIndex = 36032;

	class AsyncMouseDragTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAG_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* GetOnMouseDragAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_GETONMOUSEDRAGASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseDragAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseDragAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_ONMOUSEDRAGASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDRAGTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

