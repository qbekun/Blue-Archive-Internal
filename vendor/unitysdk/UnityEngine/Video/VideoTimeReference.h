#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoTimeReference; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoTimeReference_TypeDefinitionIndex = 37732;

	class VideoTimeReference : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::VideoTimeReference* Freerun; // 0x0
		::UnityEngine::Video::VideoTimeReference* InternalTime; // 0x0
		::UnityEngine::Video::VideoTimeReference* ExternalTime; // 0x0

	};
}

