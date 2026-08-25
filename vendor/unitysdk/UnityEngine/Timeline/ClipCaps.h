#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class ClipCaps; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ClipCaps_TypeDefinitionIndex = 36275;

	class ClipCaps : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Timeline::ClipCaps* None; // 0x0
		::UnityEngine::Timeline::ClipCaps* Looping; // 0x0
		::UnityEngine::Timeline::ClipCaps* Extrapolation; // 0x0
		::UnityEngine::Timeline::ClipCaps* ClipIn; // 0x0
		::UnityEngine::Timeline::ClipCaps* SpeedMultiplier; // 0x0
		::UnityEngine::Timeline::ClipCaps* Blending; // 0x0
		::UnityEngine::Timeline::ClipCaps* AutoScale; // 0x0
		::UnityEngine::Timeline::ClipCaps* All; // 0x0

	};
}

