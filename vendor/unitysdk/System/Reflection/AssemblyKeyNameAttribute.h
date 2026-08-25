#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYKEYNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92399B0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyKeyNameAttribute_TypeDefinitionIndex = 24838;

	class AssemblyKeyNameAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _KeyName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYKEYNAMEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

