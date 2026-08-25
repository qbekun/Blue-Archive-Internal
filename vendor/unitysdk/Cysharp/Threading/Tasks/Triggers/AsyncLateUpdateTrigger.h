#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncLateUpdateHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9DE2B90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2BF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2C60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2CE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2DC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE2EB0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncLateUpdateTrigger_TypeDefinitionIndex = 35980;

	class AsyncLateUpdateTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* GetLateUpdateAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_GETLATEUPDATEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LateUpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* LateUpdateAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_LATEUPDATEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCLATEUPDATETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

