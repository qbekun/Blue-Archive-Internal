#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYCOMPANYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92397B0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyCompanyAttribute_TypeDefinitionIndex = 24828;

	class AssemblyCompanyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Company_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCOMPANYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

