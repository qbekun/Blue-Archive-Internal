#pragma once
#include "../../../unitysdk.h"

namespace Internal::Runtime::Augments { class ReflectionExecutionDomainCallbacks; }

#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x914C280)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x914C2B0)
#define INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x914C300)

namespace Internal::Runtime::Augments
{
	inline static constexpr unsigned int RuntimeAugments_TypeDefinitionIndex = 23660;

	class RuntimeAugments : public Il2CppObject
	{
	public:
		::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* s_reflectionExecutionDomainCallbacks; // 0x0

		::System::Void ReportUnhandledException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_REPORTUNHANDLEDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* get_Callbacks()
		{
			return (return (::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_GET_CALLBACKS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_RUNTIME_AUGMENTS_RUNTIMEAUGMENTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

