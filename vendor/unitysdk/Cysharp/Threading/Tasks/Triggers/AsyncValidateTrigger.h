#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnValidateHandler; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9DEDA20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEDA80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEDAF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEDB70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEDC50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEDD40)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncValidateTrigger_TypeDefinitionIndex = 36084;

	class AsyncValidateTrigger : public ::FlatData::ResetContentType
	{
	public:
		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler* GetOnValidateAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler* GetOnValidateAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_GETONVALIDATEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnValidateAsync()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnValidateAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_ONVALIDATEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCVALIDATETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

