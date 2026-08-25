#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoSource; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoSource_TypeDefinitionIndex = 37733;

	class VideoSource : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoSource* VideoClip; // 0x0
		::UnityEngine::Video::VideoSource* Url; // 0x0

	};
}

