#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_PREFERBINARYSERIALIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA237000)

namespace UnityEngine
{
	inline static constexpr unsigned int PreferBinarySerialization_TypeDefinitionIndex = 31191;

	class PreferBinarySerialization : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PREFERBINARYSERIALIZATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

