#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class Vector2TimelineParameter; }
namespace MXTimeline { class FloatTimelineParameter; }
namespace MXTimeline { class BoolTimelineParameter; }
namespace MXTimeline { class FloatMinTimelineParameter; }
namespace MXTimeline { class TextureTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXBlurEffect; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXBLUREFFECTBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFB6A0)
#define MXTIMELINE_MXBLUREFFECTBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFBDE0)
#define MXTIMELINE_MXBLUREFFECTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFC1B0)
#define MXTIMELINE_MXBLUREFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFC200)

namespace MXTimeline
{
	inline static constexpr unsigned int MXBlurEffectBehaviour_TypeDefinitionIndex = 10193;

	class MXBlurEffectBehaviour : public Il2CppObject
	{
	public:
		Il2CppObject* mode; // 0x58
		::MXTimeline::Vector2TimelineParameter* center; // 0x60
		::MXTimeline::FloatTimelineParameter* startline; // 0x80
		::MXTimeline::FloatTimelineParameter* blurPower; // 0x98
		::MXTimeline::BoolTimelineParameter* useShakeAnimation; // 0xB0
		::MXTimeline::FloatMinTimelineParameter* shakePower; // 0xB8
		::MXTimeline::BoolTimelineParameter* useJitter; // 0xD0
		::MXTimeline::FloatTimelineParameter* jitterScale; // 0xD8
		::MXTimeline::FloatMinTimelineParameter* jitterSharpness; // 0xF0
		::MXTimeline::FloatMinTimelineParameter* jitterIntensity; // 0x108
		::MXTimeline::FloatMinTimelineParameter* jitterPower; // 0x120
		Il2CppObject* quality; // 0x138
		::MXTimeline::TextureTimelineParameter* maskTexture; // 0x140
		::UnityEngine::Rendering::Universal::MXBlurEffect* mxBlurEffectStack; // 0x150

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

