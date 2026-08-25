#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x9229280)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92292F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x9229300)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x92294F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_NOTIFYSYNCHRONIZATIONCONTEXTOFCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9229420)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x92293B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncVoidMethodBuilder_TypeDefinitionIndex = 24779;

	class AsyncVoidMethodBuilder : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContext* m_synchronizationContext; // 0x10
		::System::Runtime::CompilerServices::AsyncMethodBuilderCore* m_coreState; // 0x18
		::System::Threading::Tasks::Task* m_task; // 0x28

		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* Create()
		{
			return (return (::System::Runtime::CompilerServices::AsyncVoidMethodBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_CREATE_OFFSET))(nullptr);
		}

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_START_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void NotifySynchronizationContextOfCompletion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_NOTIFYSYNCHRONIZATIONCONTEXTOFCOMPLETION_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* get_Task()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCVOIDMETHODBUILDER_GET_TASK_OFFSET))(nullptr);
		}

	};
}

