#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnDrawGizmosHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x9DE6B30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6B90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE6C00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6C80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET UNITYSDK_OFFSET(0x9DE6D60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE6E50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncDrawGizmosTrigger_TypeDefinitionIndex = 36018;

	class AsyncDrawGizmosTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* GetOnDrawGizmosAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_GETONDRAWGIZMOSASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnDrawGizmosAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_ONDRAWGIZMOSASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCDRAWGIZMOSTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

