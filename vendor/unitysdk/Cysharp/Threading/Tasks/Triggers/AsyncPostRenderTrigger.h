#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPostRenderHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x9DEA460)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA4C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEA530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA5B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEA690)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEA780)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPostRenderTrigger_TypeDefinitionIndex = 36052;

	class AsyncPostRenderTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnPostRender()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPostRenderAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPostRenderAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

