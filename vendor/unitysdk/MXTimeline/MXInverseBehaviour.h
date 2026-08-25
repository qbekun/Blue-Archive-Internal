#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class BoolTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class MXInverse; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_MXINVERSEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xDFD350)
#define MXTIMELINE_MXINVERSEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xDFD400)
#define MXTIMELINE_MXINVERSEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xDFD500)
#define MXTIMELINE_MXINVERSEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFD550)

namespace MXTimeline
{
	inline static constexpr unsigned int MXInverseBehaviour_TypeDefinitionIndex = 10199;

	class MXInverseBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::BoolTimelineParameter* use; // 0x58
		::UnityEngine::Rendering::Universal::MXInverse* mxInverseStack; // 0x60

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

