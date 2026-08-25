#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYFILEVERSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92398C0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyFileVersionAttribute_TypeDefinitionIndex = 24835;

	class AssemblyFileVersionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Version_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYFILEVERSIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

