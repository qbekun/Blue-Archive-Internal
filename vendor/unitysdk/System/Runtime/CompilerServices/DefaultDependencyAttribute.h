#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B0A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DefaultDependencyAttribute_TypeDefinitionIndex = 24791;

	class DefaultDependencyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::CompilerServices::LoadHint* loadHint; // 0x10

		::System::Void .ctor(::System::Runtime::CompilerServices::LoadHint* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::LoadHint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

