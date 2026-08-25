#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYTITLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239A60)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyTitleAttribute_TypeDefinitionIndex = 24842;

	class AssemblyTitleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Title_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYTITLEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

