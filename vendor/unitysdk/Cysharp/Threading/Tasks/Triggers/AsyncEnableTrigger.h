#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnEnableHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9DE71F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7250)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE72C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7340)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7420)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE7510)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncEnableTrigger_TypeDefinitionIndex = 36022;

	class AsyncEnableTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* GetOnEnableAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_GETONENABLEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnEnableAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnEnableAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_ONENABLEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCENABLETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

