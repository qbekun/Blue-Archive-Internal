#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class ActivationMixerPlayable; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA189550)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0xA189690)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xA1896D0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0xA189850)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0xA1899A0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET UNITYSDK_OFFSET(0xA1896B0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xA1899B0)
#define UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA189A20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationTrack_TypeDefinitionIndex = 36241;

	class ActivationTrack : public Il2CppObject
	{
	public:
		PostPlaybackState* m_PostPlaybackState; // 0xA0
		::UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_postPlaybackState(PostPlaybackState* arg)
		{
			((::System::Void(*)(PostPlaybackState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_SET_POSTPLAYBACKSTATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanCompileClips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_CANCOMPILECLIPS_OFFSET))(nullptr);
		}

		PostPlaybackState* get_postPlaybackState()
		{
			return (return (PostPlaybackState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GET_POSTPLAYBACKSTATE_OFFSET))(nullptr);
		}

		::System::Void UpdateTrackMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_UPDATETRACKMODE_OFFSET))(nullptr);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_ONCREATECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONTRACK_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

