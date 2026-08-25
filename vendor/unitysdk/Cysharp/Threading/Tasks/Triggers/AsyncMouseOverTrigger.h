#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseOverHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x9DE8CD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8D30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8DA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8F00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE8FF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseOverTrigger_TypeDefinitionIndex = 36038;

	class AsyncMouseOverTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseOverAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseOverAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

