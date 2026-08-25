#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class ColorTimelineParameter; }
namespace MXTimeline { class FloatClampTimelineParameter; }
namespace MXTimeline { class ScreenPositionTimelineParameter; }
namespace MXTimeline { class BoolTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXVignette; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXVIGNETTEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFECF0)
#define MXTIMELINE_MXVIGNETTEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFEDF0)
#define MXTIMELINE_MXVIGNETTEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFF1D0)
#define MXTIMELINE_MXVIGNETTEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFF220)

namespace MXTimeline
{
	inline static constexpr unsigned int MXVignetteBehaviour_TypeDefinitionIndex = 10205;

	class MXVignetteBehaviour : public Il2CppObject
	{
	public:
		Il2CppObject* blend; // 0x58
		::MXTimeline::ColorTimelineParameter* color; // 0x60
		::MXTimeline::FloatClampTimelineParameter* intensity; // 0x80
		::MXTimeline::FloatClampTimelineParameter* smoothness; // 0xA0
		::MXTimeline::ScreenPositionTimelineParameter* center; // 0xC0
		::MXTimeline::BoolTimelineParameter* rounded; // 0x100
		::UnityEngine::Rendering::Universal::MXVignette* vignetteStack; // 0x108
		::UnityEngine::Transform* ownerTransform; // 0x110

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

