#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_ASSEMBLYTRADEMARKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239A90)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyTrademarkAttribute_TypeDefinitionIndex = 24843;

	class AssemblyTrademarkAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Trademark_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYTRADEMARKATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

