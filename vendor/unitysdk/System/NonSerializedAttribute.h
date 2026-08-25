#pragma once
#include "../unitysdk.h"

#define SYSTEM_NONSERIALIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E080)

namespace System
{
	inline static constexpr unsigned int NonSerializedAttribute_TypeDefinitionIndex = 23803;

	class NonSerializedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NONSERIALIZEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

