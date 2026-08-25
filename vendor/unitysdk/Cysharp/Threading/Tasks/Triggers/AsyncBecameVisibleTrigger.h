#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBecameVisibleHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x9DE4680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE46E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4750)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE47D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE48B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE49A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBecameVisibleTrigger_TypeDefinitionIndex = 35996;

	class AsyncBecameVisibleTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnBecameVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler* GetOnBecameVisibleAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler* GetOnBecameVisibleAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_GETONBECAMEVISIBLEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBecameVisibleAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBecameVisibleAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_ONBECAMEVISIBLEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEVISIBLETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

