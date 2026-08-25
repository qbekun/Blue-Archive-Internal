#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackOffset; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackOffset_TypeDefinitionIndex = 36249;

	class TrackOffset : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Timeline::TrackOffset* ApplyTransformOffsets; // 0x0
		::UnityEngine::Timeline::TrackOffset* ApplySceneOffsets; // 0x0
		::UnityEngine::Timeline::TrackOffset* Auto; // 0x0

	};
}

