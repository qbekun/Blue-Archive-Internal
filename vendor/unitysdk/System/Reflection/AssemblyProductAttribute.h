#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239A30)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyProductAttribute_TypeDefinitionIndex = 24841;

	class AssemblyProductAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Product_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYPRODUCTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

