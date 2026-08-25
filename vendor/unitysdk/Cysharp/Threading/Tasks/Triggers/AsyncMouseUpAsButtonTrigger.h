#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseUpAsButtonHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET UNITYSDK_OFFSET(0x9DE9390)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE93F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET UNITYSDK_OFFSET(0x9DE94E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET UNITYSDK_OFFSET(0x9DE95C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE96B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseUpAsButtonTrigger_TypeDefinitionIndex = 36042;

	class AsyncMouseUpAsButtonTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnMouseUpAsButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTON_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* GetOnMouseUpAsButtonAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_GETONMOUSEUPASBUTTONASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsButtonAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnMouseUpAsButtonAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_ONMOUSEUPASBUTTONASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEUPASBUTTONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

