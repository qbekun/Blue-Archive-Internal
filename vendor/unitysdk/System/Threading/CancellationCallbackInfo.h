#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DB570)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET UNITYSDK_OFFSET(0x93DC020)
#define SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x93DCD70)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationCallbackInfo_TypeDefinitionIndex = 24066;

	class CancellationCallbackInfo : public Il2CppObject
	{
	public:
		Il2CppObject* Callback; // 0x10
		::System::Object* StateForCallback; // 0x18
		::System::Threading::ExecutionContext* TargetExecutionContext; // 0x20
		::System::Threading::CancellationTokenSource* CancellationTokenSource; // 0x28
		::System::Threading::ContextCallback* s_executionContextCallback; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Object* arg, ::System::Threading::ExecutionContext* arg, ::System::Threading::CancellationTokenSource* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ExecuteCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTECALLBACK_OFFSET))(nullptr);
		}

		::System::Void ExecutionContextCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKINFO_EXECUTIONCONTEXTCALLBACK_OFFSET))(arg, nullptr);
		}

	};
}

