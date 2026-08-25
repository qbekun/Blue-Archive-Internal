#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackBindingFlags; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackBindingFlags_TypeDefinitionIndex = 36319;

	class TrackBindingFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Timeline::TrackBindingFlags* None; // 0x0
		::UnityEngine::Timeline::TrackBindingFlags* AllowCreateComponent; // 0x0
		::UnityEngine::Timeline::TrackBindingFlags* All; // 0x0

	};
}

