#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class FloatClampTimelineParameter; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE01880)
#define MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE01A70)
#define MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE01B70)
#define MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE01BC0)

namespace MXTimeline
{
	inline static constexpr unsigned int PaniniProjectionBehaviour_TypeDefinitionIndex = 10214;

	class PaniniProjectionBehaviour : public Il2CppObject
	{
	public:
		::MXTimeline::FloatClampTimelineParameter* distance; // 0x58
		::MXTimeline::FloatClampTimelineParameter* cropToFit; // 0x78
		::UnityEngine::Rendering::Universal::PaniniProjection* paniniProjectionStack; // 0x98

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

