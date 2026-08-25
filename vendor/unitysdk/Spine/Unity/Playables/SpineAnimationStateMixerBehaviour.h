#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity { class IAnimationStateComponent; }
namespace Spine { class TrackEntry; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace Spine::Unity::Playables { class SpineAnimationStateBehaviour; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET UNITYSDK_OFFSET(0x95E4600)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET UNITYSDK_OFFSET(0x95E4730)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x95E4950)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x95E5700)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x95E5800)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x95E5940)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET UNITYSDK_OFFSET(0x95E5720)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E59C0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET UNITYSDK_OFFSET(0x95E54D0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET UNITYSDK_OFFSET(0x95E5660)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET UNITYSDK_OFFSET(0x95E5830)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateMixerBehaviour_TypeDefinitionIndex = 37939;

	class SpineAnimationStateMixerBehaviour : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lastInputWeights; // 0x10
		::System::Boolean lastAnyClipPlaying; // 0x18
		::System::Int32 trackIndex; // 0x1C
		::System::Boolean unscaledTime; // 0x20
		::Il2CppArray<::System::Object*>* startingClips; // 0x28
		::Spine::Unity::IAnimationStateComponent* animationStateComponent; // 0x30
		::System::Boolean pauseWithDirector; // 0x38
		::System::Boolean endAtClipEnd; // 0x39
		::System::Single endMixOutDuration; // 0x3C
		::System::Boolean isPaused; // 0x40
		::Spine::TrackEntry* pausedTrackEntry; // 0x48
		::System::Single previousTimeScale; // 0x50
		::System::Single rootPlayableSpeed; // 0x54
		::Spine::TrackEntry* timelineStartedTrackEntry; // 0x58

		::System::Void HandleClipEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLECLIPEND_OFFSET))(nullptr);
		}

		::System::Single GetRootPlayableSpeed(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETROOTPLAYABLESPEED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void HandleResume(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLERESUME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AdjustTrackEntryTimeScale(::UnityEngine::Playables::Playable* arg, ::System::Int32 arg, ::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::System::Int32, ::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_ADJUSTTRACKENTRYTIMESCALE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetCustomMixDuration(::Spine::Unity::Playables::SpineAnimationStateBehaviour* arg)
		{
			return (return (::System::Single(*)(::Spine::Unity::Playables::SpineAnimationStateBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_GETCUSTOMMIXDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void HandlePause(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEMIXERBEHAVIOUR_HANDLEPAUSE_OFFSET))(arg, nullptr);
		}

	};
}

