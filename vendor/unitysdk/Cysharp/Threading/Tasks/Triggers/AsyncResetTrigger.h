#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncResetHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0x9DEE0E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE140)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE1B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE310)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEE400)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncResetTrigger_TypeDefinitionIndex = 36088;

	class AsyncResetTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESET_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* GetResetAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_GETRESETASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ResetAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ResetAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_RESETASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRESETTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

