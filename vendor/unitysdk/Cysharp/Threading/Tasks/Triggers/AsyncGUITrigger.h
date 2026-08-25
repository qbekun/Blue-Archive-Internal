#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnGUIHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUI_OFFSET UNITYSDK_OFFSET(0x9DE7550)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE75B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7620)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET UNITYSDK_OFFSET(0x9DE76A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7780)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE7870)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncGUITrigger_TypeDefinitionIndex = 36024;

	class AsyncGUITrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUI_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* GetOnGUIAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* GetOnGUIAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_GETONGUIASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnGUIAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnGUIAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_ONGUIASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCGUITRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

