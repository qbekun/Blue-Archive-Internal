#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_VIDEO_VIDEOCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A89C0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoClip_TypeDefinitionIndex = 37727;

	class VideoClip : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOCLIP_.CTOR_OFFSET))(nullptr);
		}

	};
}

