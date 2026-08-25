#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x92296E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9229700)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9229770)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x92297D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9229860)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92298D0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskMethodBuilder_TypeDefinitionIndex = 24780;

	class AsyncTaskMethodBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* s_cachedCompleted; // 0x0
		Il2CppObject* m_builder; // 0x10

		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* Create()
		{
			return (return (::System::Runtime::CompilerServices::AsyncTaskMethodBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_CREATE_OFFSET))(nullptr);
		}

		::System::Void Start(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_START_OFFSET))(arg, nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void AwaitUnsafeOnCompleted(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_AWAITUNSAFEONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* get_Task()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void SetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETRESULT_OFFSET))(nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKMETHODBUILDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

