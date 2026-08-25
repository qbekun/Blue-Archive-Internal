#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncFixedUpdateHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9DE2830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2890)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE2900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2980)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DE2A60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE2B50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncFixedUpdateTrigger_TypeDefinitionIndex = 35978;

	class AsyncFixedUpdateTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler* GetFixedUpdateAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler* GetFixedUpdateAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_GETFIXEDUPDATEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* FixedUpdateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* FixedUpdateAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_FIXEDUPDATEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCFIXEDUPDATETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

