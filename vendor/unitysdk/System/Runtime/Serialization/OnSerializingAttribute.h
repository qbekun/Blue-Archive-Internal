#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9202570)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnSerializingAttribute_TypeDefinitionIndex = 24605;

	class OnSerializingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONSERIALIZINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

