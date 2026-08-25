#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xA1AF410)
#define UNITYENGINE_TIMELINE_TIMEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1AF5D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeUtility_TypeDefinitionIndex = 36341;

	class TimeUtility : public Il2CppObject
	{
	public:
		::System::Double kTimeEpsilon; // 0x0
		::System::Double kFrameRateEpsilon; // 0x8
		::System::Double k_MaxTimelineDurationInSeconds; // 0x10
		::System::Double kFrameRateRounding; // 0x18

		::System::Double GetAnimationClipLength(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_GETANIMATIONCLIPLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

