#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C5170)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ConditionalAttribute_TypeDefinitionIndex = 25019;

	class ConditionalAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _ConditionString_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CONDITIONALATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

