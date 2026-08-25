#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_CUSTOMTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE03800)
#define MXTIMELINE_CUSTOMTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE038C0)

namespace MXTimeline
{
	inline static constexpr unsigned int CustomTrack_TypeDefinitionIndex = 10239;

	class CustomTrack : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACK_CREATETRACKMIXER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

