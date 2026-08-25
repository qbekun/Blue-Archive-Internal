#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreRenderHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x9DEAB20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEAB80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEABF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEAC70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET UNITYSDK_OFFSET(0x9DEAD50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEAE40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreRenderTrigger_TypeDefinitionIndex = 36056;

	class AsyncPreRenderTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnPreRender()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPreRenderAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnPreRenderAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

