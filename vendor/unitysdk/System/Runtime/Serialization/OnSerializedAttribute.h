#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9202580)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnSerializedAttribute_TypeDefinitionIndex = 24606;

	class OnSerializedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

