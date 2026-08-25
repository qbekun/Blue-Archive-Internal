#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnApplicationQuitHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9DE3C40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE3CA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE3D10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3D90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET UNITYSDK_OFFSET(0x9DE3E70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE3F60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncApplicationQuitTrigger_TypeDefinitionIndex = 35990;

	class AsyncApplicationQuitTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* GetOnApplicationQuitAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_GETONAPPLICATIONQUITASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnApplicationQuitAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnApplicationQuitAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_ONAPPLICATIONQUITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAPPLICATIONQUITTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

