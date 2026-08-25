#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9202590)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int OnDeserializingAttribute_TypeDefinitionIndex = 24607;

	class OnDeserializingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

