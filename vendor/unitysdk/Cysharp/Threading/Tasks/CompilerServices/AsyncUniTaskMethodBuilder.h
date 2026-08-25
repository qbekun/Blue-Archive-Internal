#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9DF3610)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DDE5F0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x9DF3710)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x9DF3720)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DF37C0)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskMethodBuilder_TypeDefinitionIndex = 36141;

	class AsyncUniTaskMethodBuilder : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* runnerPromise; // 0x10
		::System::Exception* ex; // 0x18

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_START_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* Create()
		{
			return (return (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_CREATE_OFFSET))(nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

	};
}

