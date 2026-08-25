#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise&; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_RUN_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTask`1_TypeDefinitionIndex = 36150;

	class AsyncUniTask`1 : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		::System::Action* returnDelegate; // 0x0
		::System::Action* _MoveNext_k__BackingField; // 0x0
		Il2CppObject* stateMachine; // 0x0
		Il2CppObject* core; // 0x0
		Il2CppObject* nextNode; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_.CCTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void Return()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_RETURN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateMachine(Il2CppObject&* arg, ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise&*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETSTATEMACHINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_RUN_OFFSET))(nullptr);
		}

		::System::Action* get_MoveNext()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject&* get_NextNode()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* get_Task()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASK`1_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

	};
}

