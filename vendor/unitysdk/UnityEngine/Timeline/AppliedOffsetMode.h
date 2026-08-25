#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class AppliedOffsetMode; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AppliedOffsetMode_TypeDefinitionIndex = 36250;

	class AppliedOffsetMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Timeline::AppliedOffsetMode* NoRootTransform; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* TransformOffset; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* SceneOffset; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* TransformOffsetLegacy; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* SceneOffsetLegacy; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* SceneOffsetEditor; // 0x0
		::UnityEngine::Timeline::AppliedOffsetMode* SceneOffsetLegacyEditor; // 0x0

	};
}

