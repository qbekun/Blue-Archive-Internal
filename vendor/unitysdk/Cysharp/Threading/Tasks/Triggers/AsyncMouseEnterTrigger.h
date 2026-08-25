#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseEnterHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x9DE8610)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE8670)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE86E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET UNITYSDK_OFFSET(0x9DE8840)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE8930)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseEnterTrigger_TypeDefinitionIndex = 36034;

	class AsyncMouseEnterTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler* GetOnMouseEnterAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler* GetOnMouseEnterAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseEnterAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseEnterAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

