#pragma once
#include "../../../unitysdk.h"

namespace Internal::Runtime::Augments { class RuntimeThread; }

#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x914C3E0)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_CREATE_OFFSET UNITYSDK_OFFSET(0x914C410)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x914C4B0)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_START_OFFSET UNITYSDK_OFFSET(0x914C4D0)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SLEEP_OFFSET UNITYSDK_OFFSET(0x914C4F0)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_YIELD_OFFSET UNITYSDK_OFFSET(0x914C500)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SPINWAIT_OFFSET UNITYSDK_OFFSET(0x914C510)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_GETCURRENTPROCESSORID_OFFSET UNITYSDK_OFFSET(0x914C530)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x914C540)

namespace Internal::Runtime::Augments
{
	inline static constexpr unsigned int RuntimeThread_TypeDefinitionIndex = 23662;

	class RuntimeThread : public Il2CppObject
	{
	public:
		::System::Int32 OptimalMaxSpinWaitsPerSpinIteration; // 0x0
		::System::Threading::Thread* thread; // 0x10

		::System::Void .ctor(::System::Threading::Thread* arg)
		{
			((::System::Void(*)(::System::Threading::Thread*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_.CTOR_OFFSET))(arg, nullptr);
		}

		::Internal::Runtime::Augments::RuntimeThread* Create(::System::Threading::ParameterizedThreadStart* arg, ::System::Int32 arg)
		{
			return (return (::Internal::Runtime::Augments::RuntimeThread*(*)(::System::Threading::ParameterizedThreadStart*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_IsBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SET_ISBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void Start(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_START_OFFSET))(arg, nullptr);
		}

		::System::Void Sleep(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SLEEP_OFFSET))(arg, nullptr);
		}

		::System::Boolean Yield()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_YIELD_OFFSET))(nullptr);
		}

		::System::Boolean SpinWait(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_SPINWAIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCurrentProcessorId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_GETCURRENTPROCESSORID_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMETHREAD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

