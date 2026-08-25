#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatClampTimelineParameter; }
namespace MXTimeline { class ColorTimelineParameter; }
namespace MXTimeline { class FloatRangeTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXThreshold; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXTHRESHOLDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFE560)
#define MXTIMELINE_MXTHRESHOLDBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFE610)
#define MXTIMELINE_MXTHRESHOLDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFE7D0)
#define MXTIMELINE_MXTHRESHOLDBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFE820)

namespace MXTimeline
{
	inline static constexpr unsigned int MXThresholdBehaviour_TypeDefinitionIndex = 10203;

	class MXThresholdBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::FloatClampTimelineParameter* intensity; // 0x58
		::MXTimeline::ColorTimelineParameter* colorA; // 0x78
		::MXTimeline::ColorTimelineParameter* colorB; // 0x98
		::MXTimeline::FloatRangeTimelineParameter* blend; // 0xB8
		::UnityEngine::Rendering::Universal::MXThreshold* mxThresholdStack; // 0xE0

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

	};
}

