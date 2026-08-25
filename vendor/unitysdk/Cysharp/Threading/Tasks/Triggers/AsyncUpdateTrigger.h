#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncUpdateHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DEE440)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE4A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEE510)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE590)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEE670)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEE760)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncUpdateTrigger_TypeDefinitionIndex = 36090;

	class AsyncUpdateTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler* GetUpdateAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler* GetUpdateAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* UpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* UpdateAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

