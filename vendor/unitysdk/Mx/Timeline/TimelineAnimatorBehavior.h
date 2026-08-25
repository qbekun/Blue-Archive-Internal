#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine { class Motion; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorStateInfo; }
class SingleUnityLayer;
class LayerTemporaryChanger;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class AnimationMixerPlayable; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TARGETLAYER_OFFSET UNITYSDK_OFFSET(0xE1F750)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR__ONBEHAVIOURPLAY_B__56_1_OFFSET UNITYSDK_OFFSET(0xE1F760)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0xE1F840)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xE1F850)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_GAMEPLAYANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0xE1F860)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xE1F880)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR__ONBEHAVIOURPLAY_G__PLAYOVERRIDEANIMATION|56_0_OFFSET UNITYSDK_OFFSET(0xE1F890)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE1FD60)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE1FD70)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_STATENAMEWITHPREFIX_OFFSET UNITYSDK_OFFSET(0xE20040)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0xE20050)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_BACKTOGAMEPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xE20060)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_GAMEPLAYANIMATORSTATEINFO_OFFSET UNITYSDK_OFFSET(0xE20070)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0xE20090)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_STATENAMEWITHPREFIX_OFFSET UNITYSDK_OFFSET(0xE200A0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TRACK_OFFSET UNITYSDK_OFFSET(0xE200B0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE200C0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TRANSITIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE200D0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TRANSITIONLENGTH_OFFSET UNITYSDK_OFFSET(0xE200E0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ALTERNATIVESTATE_OFFSET UNITYSDK_OFFSET(0xE200F0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE20100)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ALTERNATIVESTATE_OFFSET UNITYSDK_OFFSET(0xE20110)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE20120)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TRACK_OFFSET UNITYSDK_OFFSET(0xE20280)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_BACKTOGAMEPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xE20290)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE202A0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ISCROSSFADED_OFFSET UNITYSDK_OFFSET(0xE204F0)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_LAYERCHANGER_OFFSET UNITYSDK_OFFSET(0xE20500)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ISCROSSFADED_OFFSET UNITYSDK_OFFSET(0xE20510)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_LASTFRAMETIME_OFFSET UNITYSDK_OFFSET(0xE20520)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TARGETLAYER_OFFSET UNITYSDK_OFFSET(0xE20530)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_LAYERCHANGER_OFFSET UNITYSDK_OFFSET(0xE20540)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE20550)
#define MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE20B90)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAnimatorBehavior_TypeDefinitionIndex = 10358;

	class TimelineAnimatorBehavior : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::TrackAsset* _track_k__BackingField; // 0x10
		::UnityEngine::Playables::PlayableDirector* _director_k__BackingField; // 0x18
		::UnityEngine::Motion* _state_k__BackingField; // 0x20
		::UnityEngine::Motion* _alternativeState_k__BackingField; // 0x28
		::System::Single _transitionLength_k__BackingField; // 0x30
		::System::Boolean _backToGamePlayAnimation_k__BackingField; // 0x34
		::UnityEngine::Animator* _animator_k__BackingField; // 0x38
		::System::Double _lastFrameTime_k__BackingField; // 0x40
		::UnityEngine::AnimatorStateInfo* _gamePlayAnimatorStateInfo_k__BackingField; // 0x48
		::System::Boolean _isCrossfaded_k__BackingField; // 0x6C
		::System::String* _stateNameWithPrefix_k__BackingField; // 0x70
		SingleUnityLayer* _targetLayer_k__BackingField; // 0x78
		LayerTemporaryChanger* _layerChanger_k__BackingField; // 0x80
		::UnityEngine::AnimationClip* overrideClip; // 0x88
		::UnityEngine::Playables::PlayableGraph* playableGraph; // 0x90
		::UnityEngine::Animations::AnimationMixerPlayable* mixerPlayable; // 0xA0

		SingleUnityLayer* get_targetLayer()
		{
			return ((SingleUnityLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TARGETLAYER_OFFSET))(nullptr);
		}

		::System::Boolean _OnBehaviourPlay_b__56_1(::UnityEngine::Timeline::TimelineClip* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR__ONBEHAVIOURPLAY_B__56_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_director(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_DIRECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorStateInfo* get_gamePlayAnimatorStateInfo()
		{
			return ((::UnityEngine::AnimatorStateInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_GAMEPLAYANIMATORSTATEINFO_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void _OnBehaviourPlay_g__PlayOverrideAnimation|56_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR__ONBEHAVIOURPLAY_G__PLAYOVERRIDEANIMATION|56_0_OFFSET))(nullptr);
		}

		::UnityEngine::Motion* get_state()
		{
			return ((::UnityEngine::Motion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2, ::System::Object* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_PROCESSFRAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_stateNameWithPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_STATENAMEWITHPREFIX_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_director()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_DIRECTOR_OFFSET))(nullptr);
		}

		::System::Void set_backToGamePlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_BACKTOGAMEPLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_gamePlayAnimatorStateInfo(::UnityEngine::AnimatorStateInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorStateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_GAMEPLAYANIMATORSTATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_lastFrameTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_LASTFRAMETIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_stateNameWithPrefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_STATENAMEWITHPREFIX_OFFSET))(str, nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* get_track()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TRACK_OFFSET))(nullptr);
		}

		::System::Void set_state(::UnityEngine::Motion* arg)
		{
			((::System::Void(*)(::UnityEngine::Motion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_transitionLength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TRANSITIONLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_transitionLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_TRANSITIONLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_alternativeState(::UnityEngine::Motion* arg)
		{
			((::System::Void(*)(::UnityEngine::Motion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ALTERNATIVESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Motion* get_alternativeState()
		{
			return ((::UnityEngine::Motion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ALTERNATIVESTATE_OFFSET))(nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_track(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TRACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_backToGamePlayAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_BACKTOGAMEPLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void set_isCrossfaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_ISCROSSFADED_OFFSET))(arg, nullptr);
		}

		::System::Void set_layerChanger(LayerTemporaryChanger* arg)
		{
			((::System::Void(*)(LayerTemporaryChanger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_LAYERCHANGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isCrossfaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_ISCROSSFADED_OFFSET))(nullptr);
		}

		::System::Double get_lastFrameTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_LASTFRAMETIME_OFFSET))(nullptr);
		}

		::System::Void set_targetLayer(SingleUnityLayer* arg)
		{
			((::System::Void(*)(SingleUnityLayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_SET_TARGETLAYER_OFFSET))(arg, nullptr);
		}

		LayerTemporaryChanger* get_layerChanger()
		{
			return ((LayerTemporaryChanger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_GET_LAYERCHANGER_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::TrackAsset* arg2, ::UnityEngine::Motion* arg3, ::UnityEngine::Motion* arg4, ::System::Single arg5, ::System::Boolean arg6, SingleUnityLayer* arg7, ::UnityEngine::AnimationClip* arg8)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Motion*, ::UnityEngine::Motion*, ::System::Single, ::System::Boolean, SingleUnityLayer*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORBEHAVIOR_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

	};
}

