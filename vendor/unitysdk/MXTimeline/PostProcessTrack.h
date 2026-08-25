#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_POSTPROCESSTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE03C00)
#define MXTIMELINE_POSTPROCESSTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE03C50)

namespace MXTimeline
{
	inline static constexpr unsigned int PostProcessTrack_TypeDefinitionIndex = 10243;

	class PostProcessTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACK_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACK_CREATETRACKMIXER_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

