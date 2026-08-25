#pragma once
#include "../unitysdk.h"

#define SYSTEM_SERIALIZABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9372AB0)

namespace System
{
	inline static constexpr unsigned int SerializableAttribute_TypeDefinitionIndex = 23827;

	class SerializableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SERIALIZABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

