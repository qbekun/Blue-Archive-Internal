#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_GET_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_SETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int IStateMachineRunnerPromise_TypeDefinitionIndex = 36145;

	class IStateMachineRunnerPromise : public Il2CppObject
	{
	public:
		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Action* get_MoveNext()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_GET_MOVENEXT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ISTATEMACHINERUNNERPROMISE_SETRESULT_OFFSET))(nullptr);
		}

	};
}

