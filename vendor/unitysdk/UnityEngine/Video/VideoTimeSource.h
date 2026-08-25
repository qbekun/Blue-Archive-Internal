#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoTimeSource; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoTimeSource_TypeDefinitionIndex = 37731;

	class VideoTimeSource : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoTimeSource* AudioDSPTimeSource; // 0x0
		::UnityEngine::Video::VideoTimeSource* GameTimeSource; // 0x0

	};
}

