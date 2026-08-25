#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239890)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDescriptionAttribute_TypeDefinitionIndex = 24834;

	class AssemblyDescriptionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Description_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

