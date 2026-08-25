#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatClampTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXChromaticAberration; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFC410)
#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFC620)
#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFC670)
#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFC720)

namespace MXTimeline
{
	inline static constexpr unsigned int MXChromaticAberrationBehaviour_TypeDefinitionIndex = 10195;

	class MXChromaticAberrationBehaviour : public Il2CppObject
	{
	public:
		Il2CppObject* mode; // 0x58
		::MXTimeline::FloatClampTimelineParameter* intensity; // 0x60
		::MXTimeline::FloatClampTimelineParameter* direction; // 0x80
		::UnityEngine::Rendering::Universal::MXChromaticAberration* chromaticAberrationStack; // 0xA0

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

