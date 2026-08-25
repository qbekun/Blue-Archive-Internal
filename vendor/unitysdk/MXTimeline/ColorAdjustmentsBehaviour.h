#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFF5E0)
#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFF700)
#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFF750)
#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFF800)

namespace MXTimeline
{
	inline static constexpr unsigned int ColorAdjustmentsBehaviour_TypeDefinitionIndex = 10207;

	class ColorAdjustmentsBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::FloatTimelineParameter* postExposure; // 0x58
		::UnityEngine::Rendering::Universal::ColorAdjustments* colorAdjustmentsStack; // 0x70

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

