#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBecameInvisibleHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x9DE4320)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4380)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE43F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4470)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4550)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE4640)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBecameInvisibleTrigger_TypeDefinitionIndex = 35994;

	class AsyncBecameInvisibleTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnBecameInvisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler* GetOnBecameInvisibleAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler* GetOnBecameInvisibleAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBecameInvisibleAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBecameInvisibleAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

