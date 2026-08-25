#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatClampTimelineParameter; }
namespace MXTimeline { class FloatTimelineParameter; }
namespace MXTimeline { class Vector2TimelineParameter; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_LENSDISTORTIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00D30)
#define MXTIMELINE_LENSDISTORTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE00FE0)
#define MXTIMELINE_LENSDISTORTIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE01030)
#define MXTIMELINE_LENSDISTORTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE01670)

namespace MXTimeline
{
	inline static constexpr unsigned int LensDistortionBehaviour_TypeDefinitionIndex = 10212;

	class LensDistortionBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::FloatClampTimelineParameter* intensity; // 0x58
		::MXTimeline::FloatTimelineParameter* xMultiplier; // 0x78
		::MXTimeline::FloatTimelineParameter* yMultiplier; // 0x90
		::MXTimeline::Vector2TimelineParameter* center; // 0xA8
		::MXTimeline::FloatTimelineParameter* scale; // 0xC8
		::UnityEngine::Rendering::Universal::LensDistortion* lensDistortionStack; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

