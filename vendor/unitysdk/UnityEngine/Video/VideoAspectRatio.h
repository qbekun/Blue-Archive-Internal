#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoAspectRatio; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoAspectRatio_TypeDefinitionIndex = 37730;

	class VideoAspectRatio : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoAspectRatio* NoScaling; // 0x0
		::UnityEngine::Video::VideoAspectRatio* FitVertically; // 0x0
		::UnityEngine::Video::VideoAspectRatio* FitHorizontally; // 0x0
		::UnityEngine::Video::VideoAspectRatio* FitInside; // 0x0
		::UnityEngine::Video::VideoAspectRatio* FitOutside; // 0x0
		::UnityEngine::Video::VideoAspectRatio* Stretch; // 0x0

	};
}

