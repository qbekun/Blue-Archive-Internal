#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A8520)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTDISCONTINUITY_OFFSET UNITYSDK_OFFSET(0xA1A8540)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTOUTOFSYNC_OFFSET UNITYSDK_OFFSET(0xA1A8660)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xA1A87C0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1A8950)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA1A8A40)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA1A8B10)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSTOP_OFFSET UNITYSDK_OFFSET(0xA1A8F20)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSTART_OFFSET UNITYSDK_OFFSET(0xA1A8E60)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A31A0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA1A9000)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSPEED_OFFSET UNITYSDK_OFFSET(0xA1A8CF0)
#define UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA1A9270)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int DirectorControlPlayable_TypeDefinitionIndex = 36307;

	class DirectorControlPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* director; // 0x10
		PauseAction* pauseAction; // 0x18
		::System::Boolean m_SyncTime; // 0x1C
		::System::Double m_AssetDuration; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean DetectDiscontinuity(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTDISCONTINUITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DetectOutOfSync(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_DETECTOUTOFSYNC_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTime(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_UPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SyncStop(::UnityEngine::Playables::PlayableGraph* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSTOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SyncStart(::UnityEngine::Playables::PlayableGraph* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSTART_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableDirector* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SyncSpeed(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_SYNCSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_DIRECTORCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

	};
}

