#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYDELAYSIGNATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239870)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyDelaySignAttribute_TypeDefinitionIndex = 24833;

	class AssemblyDelaySignAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _DelaySign_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYDELAYSIGNATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

