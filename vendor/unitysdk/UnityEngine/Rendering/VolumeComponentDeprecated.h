#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE02D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentDeprecated_TypeDefinitionIndex = 34085;

	class VolumeComponentDeprecated : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED_.CTOR_OFFSET))(nullptr);
		}

	};
}

