#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYKEYFILEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239980)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyKeyFileAttribute_TypeDefinitionIndex = 24837;

	class AssemblyKeyFileAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _KeyFile_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYKEYFILEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

