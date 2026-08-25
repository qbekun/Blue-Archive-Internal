#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunner; }
namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DE0C70)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x9DF3880)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9DF3890)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DF38A0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x9DF39B0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_START_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskVoidMethodBuilder_TypeDefinitionIndex = 36143;

	class AsyncUniTaskVoidMethodBuilder : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner* runner; // 0x10

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* Create()
		{
			return (return (::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_CREATE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_START_OFFSET))(arg, nullptr);
		}

	};
}

