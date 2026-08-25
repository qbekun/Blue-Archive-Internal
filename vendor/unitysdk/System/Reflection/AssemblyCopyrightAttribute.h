#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYCOPYRIGHTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239810)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyCopyrightAttribute_TypeDefinitionIndex = 24831;

	class AssemblyCopyrightAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Copyright_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYCOPYRIGHTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

