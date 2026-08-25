#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseDownHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x9DE7F50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7FB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x9DE80A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE8270)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseDownTrigger_TypeDefinitionIndex = 36030;

	class AsyncMouseDownTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler* GetOnMouseDownAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler* GetOnMouseDownAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_GETONMOUSEDOWNASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseDownAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseDownAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_ONMOUSEDOWNASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEDOWNTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

