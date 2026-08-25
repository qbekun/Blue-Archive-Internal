#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnTransformChildrenChangedHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET UNITYSDK_OFFSET(0x9DEBF80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEBFE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEC050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC0D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET UNITYSDK_OFFSET(0x9DEC1B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEC2A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTransformChildrenChangedTrigger_TypeDefinitionIndex = 36068;

	class AsyncTransformChildrenChangedTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnTransformChildrenChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGED_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* GetOnTransformChildrenChangedAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_GETONTRANSFORMCHILDRENCHANGEDASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnTransformChildrenChangedAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnTransformChildrenChangedAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_ONTRANSFORMCHILDRENCHANGEDASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRANSFORMCHILDRENCHANGEDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

