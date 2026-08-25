#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBeforeTransformParentChangedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x9DE49E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4A40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE4AB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4B30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DE4C10)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE4D00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBeforeTransformParentChangedTrigger_TypeDefinitionIndex = 35998;

	class AsyncBeforeTransformParentChangedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnBeforeTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler* GetOnBeforeTransformParentChangedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler* GetOnBeforeTransformParentChangedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_GETONBEFORETRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBeforeTransformParentChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnBeforeTransformParentChangedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_ONBEFORETRANSFORMPARENTCHANGEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBEFORETRANSFORMPARENTCHANGEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

