#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYMETADATAATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92399E0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyMetadataAttribute_TypeDefinitionIndex = 24839;

	class AssemblyMetadataAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYMETADATAATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

