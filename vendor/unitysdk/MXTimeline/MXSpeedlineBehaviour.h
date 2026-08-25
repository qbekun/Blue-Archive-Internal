#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class Vector2TimelineParameter; }
namespace MXTimeline { class FloatTimelineParameter; }
namespace MXTimeline { class FloatMinTimelineParameter; }
namespace MXTimeline { class ColorTimelineParameter; }
namespace MXTimeline { class BoolTimelineParameter; }
namespace MXTimeline { class FloatClampTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXSpeedline; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXSPEEDLINEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFD6F0)
#define MXTIMELINE_MXSPEEDLINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFDB60)
#define MXTIMELINE_MXSPEEDLINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFDC10)
#define MXTIMELINE_MXSPEEDLINEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFDC60)

namespace MXTimeline
{
	inline static constexpr unsigned int MXSpeedlineBehaviour_TypeDefinitionIndex = 10201;

	class MXSpeedlineBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::Vector2TimelineParameter* center; // 0x58
		::MXTimeline::FloatTimelineParameter* radialScale; // 0x78
		::MXTimeline::FloatTimelineParameter* lengthScale; // 0x90
		::MXTimeline::FloatTimelineParameter* noiseScale; // 0xA8
		::MXTimeline::FloatMinTimelineParameter* sharpness; // 0xC0
		::MXTimeline::FloatMinTimelineParameter* intensity; // 0xD8
		::MXTimeline::FloatMinTimelineParameter* fadeline; // 0xF0
		::MXTimeline::ColorTimelineParameter* color; // 0x108
		::MXTimeline::BoolTimelineParameter* useNoiseAnimation; // 0x128
		::MXTimeline::FloatTimelineParameter* noiseAnimateSpeed; // 0x130
		::MXTimeline::FloatTimelineParameter* noiseAnimatePower; // 0x148
		::MXTimeline::BoolTimelineParameter* useDepthCut; // 0x160
		::MXTimeline::FloatClampTimelineParameter* DepthCutDistance; // 0x168
		::UnityEngine::Rendering::Universal::MXSpeedline* mxSpeedlineStack; // 0x188

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSPEEDLINEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSPEEDLINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSPEEDLINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSPEEDLINEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

	};
}

