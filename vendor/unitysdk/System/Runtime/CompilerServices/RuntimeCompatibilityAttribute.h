#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227FD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_SET_WRAPNONEXCEPTIONTHROWS_OFFSET UNITYSDK_OFFSET(0x9227FE0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeCompatibilityAttribute_TypeDefinitionIndex = 24760;

	class RuntimeCompatibilityAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _WrapNonExceptionThrows_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WrapNonExceptionThrows(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMECOMPATIBILITYATTRIBUTE_SET_WRAPNONEXCEPTIONTHROWS_OFFSET))(arg, nullptr);
		}

	};
}

