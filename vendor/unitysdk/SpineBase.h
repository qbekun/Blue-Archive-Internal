#pragma once
#include "unitysdk.h"

namespace Spine::Unity { class SkeletonAnimation; }
namespace Spine { class Animation; }
namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class AmbientAudioEvent; }
namespace UnityEngine::Playables { class PlayableDirector; }
class SpineClip;
namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace UnityEngine { class ScriptableObject; }

#define SPINEBASE_GET_ONETIMEACTIONONENABLE_OFFSET UNITYSDK_OFFSET(0x20E1B30)
#define SPINEBASE_SET_ONETIMEACTIONONENABLE_OFFSET UNITYSDK_OFFSET(0x20E1B40)
#define SPINEBASE_GET_REINITIALIZEONENABLE_OFFSET UNITYSDK_OFFSET(0x20E1B50)
#define SPINEBASE_SET_REINITIALIZEONENABLE_OFFSET UNITYSDK_OFFSET(0x20E1B60)
#define SPINEBASE_GET_REINITIALIZEONENABLEONCE_OFFSET UNITYSDK_OFFSET(0x20E1B70)
#define SPINEBASE_SET_REINITIALIZEONENABLEONCE_OFFSET UNITYSDK_OFFSET(0x20E1B80)
#define SPINEBASE_GET_ISPRESSING_OFFSET UNITYSDK_OFFSET(0x20E1B90)
#define SPINEBASE_SET_ISPRESSING_OFFSET UNITYSDK_OFFSET(0x20E1BA0)
#define SPINEBASE_GET_AUDIOPLAYER_OFFSET UNITYSDK_OFFSET(0x20E1BB0)
#define SPINEBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x20E1CB0)
#define SPINEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20DDDB0)
#define SPINEBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20E21A0)
#define SPINEBASE_REFRESHSPINECLIPTABLE_OFFSET UNITYSDK_OFFSET(0x20E1D50)
#define SPINEBASE_PLAYBASECLIP_OFFSET UNITYSDK_OFFSET(0x20E20F0)
#define SPINEBASE_PLAYBASERANDOMCLIP_OFFSET UNITYSDK_OFFSET(0x20E22E0)
#define SPINEBASE_COPLAYBASERANDOMWITHTIMELINE_OFFSET UNITYSDK_OFFSET(0x20E23C0)
#define SPINEBASE_PLAYBASERANDOMCLIP_OFFSET UNITYSDK_OFFSET(0x20E2440)
#define SPINEBASE_RUNONENABLEONCE_OFFSET UNITYSDK_OFFSET(0x20DE0A0)
#define SPINEBASE_POPONETIMERUNONENABLE_OFFSET UNITYSDK_OFFSET(0x20E1D00)
#define SPINEBASE_GETIDLECLIPOFBASETRACK_OFFSET UNITYSDK_OFFSET(0x20E2700)
#define SPINEBASE_ISBASETRACK_OFFSET UNITYSDK_OFFSET(0x20E2780)
#define SPINEBASE_PLAYSPINEANIMATION_OFFSET UNITYSDK_OFFSET(0x20E27D0)
#define SPINEBASE_PLAYTALKANIMATION_OFFSET UNITYSDK_OFFSET(0x20E2920)
#define SPINEBASE_PLAYSPINECLIP_OFFSET UNITYSDK_OFFSET(0x20E2930)
#define SPINEBASE_ENQUEUESPINEANIMATION_OFFSET UNITYSDK_OFFSET(0x20E29C0)
#define SPINEBASE_RETURNTOIDLE_OFFSET UNITYSDK_OFFSET(0x20DEB10)
#define SPINEBASE_RETURNTOIDLEWITHSPINECLIPS_OFFSET UNITYSDK_OFFSET(0x20E2DC0)
#define SPINEBASE_STOPALLMASKS_OFFSET UNITYSDK_OFFSET(0x20E35C0)
#define SPINEBASE_STOPSPINECLIPMASK_OFFSET UNITYSDK_OFFSET(0x20E3AC0)
#define SPINEBASE_STOPALLTRACKS_OFFSET UNITYSDK_OFFSET(0x20E3DB0)
#define SPINEBASE_ISIDLE_OFFSET UNITYSDK_OFFSET(0x20E3FB0)
#define SPINEBASE_SKIPTOIDLEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x20E4170)
#define SPINEBASE_ISTRACKENTRYNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x20DF400)
#define SPINEBASE_TRYGETDURATIONOFCLIP_OFFSET UNITYSDK_OFFSET(0x20E4230)
#define SPINEBASE_HASCLIP_OFFSET UNITYSDK_OFFSET(0x20E42D0)
#define SPINEBASE_STOPSPINECLIPMASK_OFFSET UNITYSDK_OFFSET(0x20E3B50)
#define SPINEBASE_ENQUEUESPINECLIP_OFFSET UNITYSDK_OFFSET(0x20E2B30)
#define SPINEBASE_PLAYSPINECLIP_OFFSET UNITYSDK_OFFSET(0x20DEC00)
#define SPINEBASE_SETANIMATION_OFFSET UNITYSDK_OFFSET(0x20DEEC0)
#define SPINEBASE_PLAYBASETRACK_OFFSET UNITYSDK_OFFSET(0x20E4900)
#define SPINEBASE_ADDIDLE_OFFSET UNITYSDK_OFFSET(0x20E4DC0)
#define SPINEBASE_PLAYMASKED_OFFSET UNITYSDK_OFFSET(0x20E49E0)
#define SPINEBASE_QUEUETRACKCLOSE_OFFSET UNITYSDK_OFFSET(0x20E4F30)
#define SPINEBASE_COPLAYMASKEDRANDOMTIMING_OFFSET UNITYSDK_OFFSET(0x20E4AD0)
#define SPINEBASE_COPLAYBASERANDOM_OFFSET UNITYSDK_OFFSET(0x20E2660)
#define SPINEBASE_RESETRANDOMIZEDDELAYWITHDURATION_OFFSET UNITYSDK_OFFSET(0x20E0350)
#define SPINEBASE_ADDRANDOMCOUNTLOOP_OFFSET UNITYSDK_OFFSET(0x20E03B0)
#define SPINEBASE_PLAYSYNCCLIPS_OFFSET UNITYSDK_OFFSET(0x20E47C0)
#define SPINEBASE_PLAYSYNCCLIPSIFNOTPLAYING_OFFSET UNITYSDK_OFFSET(0x20E3380)
#define SPINEBASE_ENQUEUEBASETRACK_OFFSET UNITYSDK_OFFSET(0x20E4340)
#define SPINEBASE_ENQUEUEMASKED_OFFSET UNITYSDK_OFFSET(0x20E4460)
#define SPINEBASE_ENQUEUERANDOMTIMING_OFFSET UNITYSDK_OFFSET(0x20E45E0)
#define SPINEBASE_BLOCKINTERACTION_OFFSET UNITYSDK_OFFSET(0x20E4F80)
#define SPINEBASE_ISINTERACTIVE_OFFSET UNITYSDK_OFFSET(0x20E4F90)
#define SPINEBASE_ENQUEUESOUNDKEYS_OFFSET UNITYSDK_OFFSET(0x20E4B70)
#define SPINEBASE_COPLAYSOUNDKEYS_OFFSET UNITYSDK_OFFSET(0x20E4FA0)
#define SPINEBASE_STOPSOUNDCOROUTINE_OFFSET UNITYSDK_OFFSET(0x20E5040)
#define SPINEBASE_PLAYSOUNDKEYEVENT_OFFSET UNITYSDK_OFFSET(0x20E50E0)
#define SPINEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E52D0)

	inline static constexpr unsigned int SpineBase_TypeDefinitionIndex = 3779;

	class SpineBase : public Il2CppObject
	{
	public:
		::System::Int32 maxTrackEntryCount; // 0x0
		::System::String* DummyClipName; // 0x0
		::Spine::Unity::SkeletonAnimation* SkeletonAnimation; // 0x18
		::Il2CppArray<::System::Object*>* spineClipPool; // 0x20
		::Il2CppArray<::System::Object*>* idleClipPool; // 0x28
		::Il2CppArray<::System::Object*>* idleBaseRandomClipPool; // 0x30
		::System::String* IdleName; // 0x38
		Il2CppObject* IdleClipTable; // 0x40
		Il2CppObject* IdleBaseRandomClipTable; // 0x48
		Il2CppObject* IdleClipIncludingSyncsTable; // 0x50
		Il2CppObject* SpineClipTable; // 0x58
		Il2CppObject* SpineClipCoroutineTable; // 0x60
		Il2CppObject* soundCoroutineTable; // 0x68
		::Spine::Animation* dummyClip; // 0x70
		::System::Action* _OnetimeActionOnEnable_k__BackingField; // 0x78
		::System::Boolean _ReInitializeOnEnable_k__BackingField; // 0x80
		::System::Boolean _ReInitializeOnEnableOnce_k__BackingField; // 0x81
		::System::Boolean _IsPressing_k__BackingField; // 0x82
		::System::Boolean IsInitialized; // 0x83
		::MX::Audio::AudioPlayer* audioPlayer; // 0x88
		::MX::Audio::AmbientAudioEvent* ambientEvent; // 0x90

		::System::Action* get_OnetimeActionOnEnable()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GET_ONETIMEACTIONONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_OnetimeActionOnEnable(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SET_ONETIMEACTIONONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReInitializeOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GET_REINITIALIZEONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_ReInitializeOnEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SET_REINITIALIZEONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReInitializeOnEnableOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GET_REINITIALIZEONENABLEONCE_OFFSET))(nullptr);
		}

		::System::Void set_ReInitializeOnEnableOnce(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SET_REINITIALIZEONENABLEONCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPressing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GET_ISPRESSING_OFFSET))(nullptr);
		}

		::System::Void set_IsPressing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SET_ISPRESSING_OFFSET))(arg, nullptr);
		}

		::MX::Audio::AudioPlayer* get_AudioPlayer()
		{
			return ((::MX::Audio::AudioPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GET_AUDIOPLAYER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshSpineClipTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_REFRESHSPINECLIPTABLE_OFFSET))(nullptr);
		}

		::System::Void PlayBaseClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYBASECLIP_OFFSET))(nullptr);
		}

		::System::Void PlayBaseRandomClip(::UnityEngine::Playables::PlayableDirector* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYBASERANDOMCLIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayBaseRandomWithTimeline(::UnityEngine::Playables::PlayableDirector* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_COPLAYBASERANDOMWITHTIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayBaseRandomClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYBASERANDOMCLIP_OFFSET))(nullptr);
		}

		::System::Void RunOnEnableOnce(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_RUNONENABLEONCE_OFFSET))(arg, nullptr);
		}

		::System::Void PopOnetimeRunOnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_POPONETIMERUNONENABLE_OFFSET))(nullptr);
		}

		SpineClip* GetIdleClipOfBaseTrack(::System::Int32 arg)
		{
			return ((SpineClip*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_GETIDLECLIPOFBASETRACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBaseTrack(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ISBASETRACK_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySpineAnimation(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSPINEANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void PlayTalkAnimation(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYTALKANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void PlaySpineClip(SpineClip* arg)
		{
			((::System::Void(*)(SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSPINECLIP_OFFSET))(arg, nullptr);
		}

		::System::Void EnqueueSpineAnimation(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUESPINEANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void ReturnToIdle(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_RETURNTOIDLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReturnToIdleWithSpineClips(::Spine::AnimationState* arg, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Spine::AnimationState*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_RETURNTOIDLEWITHSPINECLIPS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StopAllMasks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_STOPALLMASKS_OFFSET))(arg, nullptr);
		}

		::System::Void StopSpineClipMask(SpineClip* arg)
		{
			((::System::Void(*)(SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_STOPSPINECLIPMASK_OFFSET))(arg, nullptr);
		}

		::System::Void StopAllTracks(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_STOPALLTRACKS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIdle(::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ISIDLE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipToIdleImmediately()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SKIPTOIDLEIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Boolean IsTrackEntryNullOrEmpty(::Spine::TrackEntry* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::Spine::TrackEntry*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ISTRACKENTRYNULLOREMPTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetDurationOfClip(::System::String* str, float&* arg, bool&* arg2)
		{
			return ((::System::Boolean(*)(::System::String*, float&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_TRYGETDURATIONOFCLIP_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Boolean HasClip(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_HASCLIP_OFFSET))(str, nullptr);
		}

		::System::Void StopSpineClipMask(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_STOPSPINECLIPMASK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EnqueueSpineClip(::Spine::AnimationState* arg, SpineClip* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUESPINECLIP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlaySpineClip(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSPINECLIP_OFFSET))(arg, arg2, nullptr);
		}

		::Spine::TrackEntry* SetAnimation(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			return ((::Spine::TrackEntry*(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_SETANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayBaseTrack(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYBASETRACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIdle(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ADDIDLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayMasked(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYMASKED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void QueueTrackClose(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_QUEUETRACKCLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayMaskedRandomTiming(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_COPLAYMASKEDRANDOMTIMING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayBaseRandom(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_COPLAYBASERANDOM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetRandomizedDelayWithDuration(SpineClip* arg, ::System::Single arg2)
		{
			((::System::Void(*)(SpineClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_RESETRANDOMIZEDDELAYWITHDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 AddRandomCountLoop(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			return ((::System::Int32(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ADDRANDOMCOUNTLOOP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlaySyncClips(::Spine::AnimationState* arg, SpineClip* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSYNCCLIPS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* PlaySyncClipsIfNotPlaying(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			return ((Il2CppObject*(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSYNCCLIPSIFNOTPLAYING_OFFSET))(arg, arg2, nullptr);
		}

		::Spine::TrackEntry* EnqueueBaseTrack(::Spine::AnimationState* arg, SpineClip* arg2, ::System::Single arg3)
		{
			return ((::Spine::TrackEntry*(*)(::Spine::AnimationState*, SpineClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUEBASETRACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Spine::TrackEntry* EnqueueMasked(::Spine::AnimationState* arg, SpineClip* arg2, ::System::Single arg3)
		{
			return ((::Spine::TrackEntry*(*)(::Spine::AnimationState*, SpineClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUEMASKED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void EnqueueRandomTiming(::Spine::AnimationState* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::AnimationState*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUERANDOMTIMING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void BlockInteraction(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_BLOCKINTERACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsInteractive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ISINTERACTIVE_OFFSET))(nullptr);
		}

		::System::Void EnqueueSoundKeys(::Spine::TrackEntry* arg, SpineClip* arg2)
		{
			((::System::Void(*)(::Spine::TrackEntry*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_ENQUEUESOUNDKEYS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlaySoundKeys(::Spine::TrackEntry* arg, SpineClip* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Spine::TrackEntry*, SpineClip*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_COPLAYSOUNDKEYS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StopSoundCoroutine(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_STOPSOUNDCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySoundKeyEvent(::UnityEngine::ScriptableObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_PLAYSOUNDKEYEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEBASE_.CTOR_OFFSET))(nullptr);
		}

	};

