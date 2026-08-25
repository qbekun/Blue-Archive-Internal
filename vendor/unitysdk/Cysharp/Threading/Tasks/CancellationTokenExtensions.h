#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCFA60)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DCFAF0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCFCE0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DCFDD0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenExtensions_TypeDefinitionIndex = 35840;

	class CancellationTokenExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* cancellationTokenCallback; // 0x0
		Il2CppObject* disposeCallback; // 0x8

		::System::Void Callback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken* arg, Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(::System::Threading::CancellationToken*, Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_REGISTERWITHOUTCAPTUREEXECUTIONCONTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DisposeCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_DISPOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENEXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

