#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE00B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentMenu_TypeDefinitionIndex = 34083;

	class VolumeComponentMenu : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* menu; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

