#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92397E0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyConfigurationAttribute_TypeDefinitionIndex = 24829;

	class AssemblyConfigurationAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Configuration_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCONFIGURATIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

