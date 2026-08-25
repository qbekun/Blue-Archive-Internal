#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnServerInitializedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DEBC20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEBC80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEBCF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEBD70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEBE50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEBF40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncServerInitializedTrigger_TypeDefinitionIndex = 36066;

	class AsyncServerInitializedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnServerInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler* GetOnServerInitializedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler* GetOnServerInitializedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_GETONSERVERINITIALIZEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnServerInitializedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnServerInitializedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_ONSERVERINITIALIZEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCSERVERINITIALIZEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

