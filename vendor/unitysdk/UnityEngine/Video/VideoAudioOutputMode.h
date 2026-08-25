#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoAudioOutputMode; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoAudioOutputMode_TypeDefinitionIndex = 37734;

	class VideoAudioOutputMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoAudioOutputMode* None; // 0x0
		::UnityEngine::Video::VideoAudioOutputMode* AudioSource; // 0x0
		::UnityEngine::Video::VideoAudioOutputMode* Direct; // 0x0
		::UnityEngine::Video::VideoAudioOutputMode* APIOnly; // 0x0

	};
}

