#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformParentChangedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x9DEC2E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC340)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC3B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC430)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC510)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEC600)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformParentChangedTrigger_TypeDefinitionIndex = 36070;

	class AsyncTransformParentChangedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* GetOnTransformParentChangedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_GETONTRANSFORMPARENTCHANGEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnTransformParentChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnTransformParentChangedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_ONTRANSFORMPARENTCHANGEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMPARENTCHANGEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

