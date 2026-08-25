#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDisableHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9DE67D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE68A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6920)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6A00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE6AF0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDisableTrigger_TypeDefinitionIndex = 36016;

	class AsyncDisableTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler* GetOnDisableAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler* GetOnDisableAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_GETONDISABLEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDisableAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDisableAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_ONDISABLEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDISABLETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

