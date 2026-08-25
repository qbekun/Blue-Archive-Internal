#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x9DE9030)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9090)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9260)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE9350)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpTrigger_TypeDefinitionIndex = 36040;

	class AsyncMouseUpTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUP_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* GetOnMouseUpAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_GETONMOUSEUPASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_ONMOUSEUPASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

