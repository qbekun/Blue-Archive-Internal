#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_GET_TASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncValueTaskMethodBuilder`1_TypeDefinitionIndex = 24736;

	class AsyncValueTaskMethodBuilder`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _methodBuilder; // 0x0
		Il2CppObject* _result; // 0x0
		::System::Boolean _haveResult; // 0x0
		::System::Boolean _useBuilder; // 0x0

		Il2CppObject* Create()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_CREATE_OFFSET))(nullptr);
		}

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_START_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Task()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER`1_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

	};
}

