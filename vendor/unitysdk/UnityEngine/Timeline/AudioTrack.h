#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class AudioMixerProperties; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine { class AudioClip; }

#define UNITYENGINE_TIMELINE_AUDIOTRACK_COMPILECLIPS_OFFSET UNITYSDK_OFFSET(0xA19F3D0)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA19FE10)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19FEC0)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA19FF60)
#define UNITYENGINE_TIMELINE_AUDIOTRACK_CREATECLIP_OFFSET UNITYSDK_OFFSET(0xA1A0040)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioTrack_TypeDefinitionIndex = 36274;

	class AudioTrack : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties; // 0xA0

		::UnityEngine::Playables::Playable* CompileClips(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_COMPILECLIPS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_ONVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AudioClip* arg)
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOTRACK_CREATECLIP_OFFSET))(arg, nullptr);
		}

	};
}

