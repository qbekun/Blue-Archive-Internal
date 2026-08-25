#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseExitHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x9DE8970)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE89D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8A40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8AC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8BA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE8C90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseExitTrigger_TypeDefinitionIndex = 36036;

	class AsyncMouseExitTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXIT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* GetOnMouseExitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_GETONMOUSEEXITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseExitAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseExitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_ONMOUSEEXITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEEXITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

