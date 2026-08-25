#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoRenderMode; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoRenderMode_TypeDefinitionIndex = 37728;

	class VideoRenderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoRenderMode* CameraFarPlane; // 0x0
		::UnityEngine::Video::VideoRenderMode* CameraNearPlane; // 0x0
		::UnityEngine::Video::VideoRenderMode* RenderTexture; // 0x0
		::UnityEngine::Video::VideoRenderMode* MaterialOverride; // 0x0
		::UnityEngine::Video::VideoRenderMode* APIOnly; // 0x0

	};
}

