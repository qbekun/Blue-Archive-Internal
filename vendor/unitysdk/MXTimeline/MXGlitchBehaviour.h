#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatTimelineParameter; }
namespace MXTimeline { class FloatClampTimelineParameter; }
namespace MXTimeline { class FloatMinTimelineParameter; }
namespace MXTimeline { class BoolTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXGlitch; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXGLITCHBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFC9A0)
#define MXTIMELINE_MXGLITCHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFCE40)
#define MXTIMELINE_MXGLITCHBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFCE90)
#define MXTIMELINE_MXGLITCHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFD140)

namespace MXTimeline
{
	inline static constexpr unsigned int MXGlitchBehaviour_TypeDefinitionIndex = 10197;

	class MXGlitchBehaviour : public Il2CppObject
	{
	public:
		Il2CppObject* mode; // 0x58
		::MXTimeline::FloatTimelineParameter* displacement; // 0x60
		::MXTimeline::FloatClampTimelineParameter* threshold; // 0x78
		::MXTimeline::FloatMinTimelineParameter* amount; // 0x98
		::MXTimeline::FloatTimelineParameter* noiseSpeed; // 0xB0
		::MXTimeline::FloatTimelineParameter* shakePower; // 0xC8
		::MXTimeline::FloatClampTimelineParameter* activeRatio; // 0xE0
		::MXTimeline::BoolTimelineParameter* horizontalMode; // 0x100
		::UnityEngine::Rendering::Universal::MXGlitch* glitchStack; // 0x108

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

