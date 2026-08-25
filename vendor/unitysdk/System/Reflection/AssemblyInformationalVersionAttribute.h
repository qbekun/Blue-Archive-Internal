#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239950)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyInformationalVersionAttribute_TypeDefinitionIndex = 24836;

	class AssemblyInformationalVersionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _InformationalVersion_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

