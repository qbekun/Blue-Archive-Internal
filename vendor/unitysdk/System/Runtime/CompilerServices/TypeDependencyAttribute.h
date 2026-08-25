#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEDEPENDENCYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B1B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeDependencyAttribute_TypeDefinitionIndex = 24797;

	class TypeDependencyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* typeName; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEDEPENDENCYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

