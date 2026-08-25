#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9229B20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET UNITYSDK_OFFSET(0x9229BF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET UNITYSDK_OFFSET(0x9229E80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x922A010)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET UNITYSDK_OFFSET(0x922A1D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET UNITYSDK_OFFSET(0x9229F60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET UNITYSDK_OFFSET(0x922A5D0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_TypeDefinitionIndex = 24787;

	class AsyncMethodBuilderCore : public Il2CppObject
	{
	public:
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x10
		::System::Action* m_defaultContextAction; // 0x18

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Action* GetCompletionAction(::System::Threading::Tasks::Task* arg, MoveNextRunner&* arg)
		{
			return (return (::System::Action*(*)(::System::Threading::Tasks::Task*, MoveNextRunner&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_GETCOMPLETIONACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Action* OutputAsyncCausalityEvents(::System::Threading::Tasks::Task* arg, ::System::Action* arg)
		{
			return (return (::System::Action*(*)(::System::Threading::Tasks::Task*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_OUTPUTASYNCCAUSALITYEVENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostBoxInitialization(::System::Runtime::CompilerServices::IAsyncStateMachine* arg, MoveNextRunner* arg, ::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, MoveNextRunner*, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_POSTBOXINITIALIZATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ThrowAsync(::System::Exception* arg, ::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_THROWASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Action* CreateContinuationWrapper(::System::Action* arg, ::System::Action* arg, ::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Action*(*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_CREATECONTINUATIONWRAPPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* TryGetContinuationTask(::System::Action* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_TRYGETCONTINUATIONTASK_OFFSET))(arg, nullptr);
		}

	};
}

