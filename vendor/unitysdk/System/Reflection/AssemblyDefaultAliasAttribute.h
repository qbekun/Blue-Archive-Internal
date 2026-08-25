#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239840)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDefaultAliasAttribute_TypeDefinitionIndex = 24832;

	class AssemblyDefaultAliasAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _DefaultAlias_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDEFAULTALIASATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

