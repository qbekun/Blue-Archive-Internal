#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class LogType; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DE1850)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DDC140)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DE1940)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskScheduler_TypeDefinitionIndex = 35962;

	class UniTaskScheduler : public Il2CppObject
	{
	public:
		Il2CppObject* UnobservedTaskException; // 0x0
		::System::Boolean PropagateOperationCanceledException; // 0x8
		::UnityEngine::LogType* UnobservedExceptionWriteLogType; // 0xC
		::System::Boolean DispatchUnityMainThread; // 0x10
		::System::Threading::SendOrPostCallback* handleExceptionInvoke; // 0x18

		::System::Void InvokeUnobservedTaskException(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void PublishUnobservedTaskException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

