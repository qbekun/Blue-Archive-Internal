#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DEPENDENCYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B0C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DependencyAttribute_TypeDefinitionIndex = 24792;

	class DependencyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* dependentAssembly; // 0x10
		::System::Runtime::CompilerServices::LoadHint* loadHint; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Runtime::CompilerServices::LoadHint* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::CompilerServices::LoadHint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DEPENDENCYATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

