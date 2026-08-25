#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E369F0)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int NonVersionableAttribute_TypeDefinitionIndex = 38116;

	class NonVersionableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

