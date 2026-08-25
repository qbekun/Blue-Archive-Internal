#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_CUSTOMTRACKMIXERBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE03A20)
#define MXTIMELINE_CUSTOMTRACKMIXERBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE03A30)

namespace MXTimeline
{
	inline static constexpr unsigned int CustomTrackMixerBehaviour_TypeDefinitionIndex = 10242;

	class CustomTrackMixerBehaviour : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKMIXERBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKMIXERBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

	};
}

