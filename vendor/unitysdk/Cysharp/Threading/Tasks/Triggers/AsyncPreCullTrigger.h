#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreCullHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET UNITYSDK_OFFSET(0x9DEA7C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA820)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA890)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA910)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA9F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEAAE0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreCullTrigger_TypeDefinitionIndex = 36054;

	class AsyncPreCullTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnPreCull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPreCullAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPreCullAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

