#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_POSTPROCESSTRACKMIXERBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE03F70)
#define MXTIMELINE_POSTPROCESSTRACKMIXERBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE04140)

namespace MXTimeline
{
	inline static constexpr unsigned int PostProcessTrackMixerBehaviour_TypeDefinitionIndex = 10246;

	class PostProcessTrackMixerBehaviour : public Il2CppObject
	{
	public:
		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKMIXERBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKMIXERBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

