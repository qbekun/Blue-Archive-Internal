#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosSelectedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9DE6E90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6EF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6F60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6FE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE70C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE71B0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDrawGizmosSelectedTrigger_TypeDefinitionIndex = 36020;

	class AsyncDrawGizmosSelectedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnDrawGizmosSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* GetOnDrawGizmosSelectedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_GETONDRAWGIZMOSSELECTEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosSelectedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosSelectedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_ONDRAWGIZMOSSELECTEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSSELECTEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

