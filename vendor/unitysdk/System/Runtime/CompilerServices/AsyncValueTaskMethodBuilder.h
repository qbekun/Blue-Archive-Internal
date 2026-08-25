#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x9227540)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9227550)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x92275B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9227610)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9227670)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncValueTaskMethodBuilder_TypeDefinitionIndex = 24735;

	class AsyncValueTaskMethodBuilder : public Il2CppObject
	{
	public:
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* _methodBuilder; // 0x10
		::System::Boolean _haveResult; // 0x28
		::System::Boolean _useBuilder; // 0x29

		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder* Create()
		{
			return (return (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_CREATE_OFFSET))(nullptr);
		}

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_START_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* get_Task()
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVALUETASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

	};
}

