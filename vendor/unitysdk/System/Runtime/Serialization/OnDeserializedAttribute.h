#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92025A0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnDeserializedAttribute_TypeDefinitionIndex = 24608;

	class OnDeserializedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

