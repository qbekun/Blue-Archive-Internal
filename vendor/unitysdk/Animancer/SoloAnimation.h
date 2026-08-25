#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class AnimationClipPlayable; }

#define ANIMANCER_SOLOANIMATION_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x4AB5C0)
#define ANIMANCER_SOLOANIMATION_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x4AB5D0)
#define ANIMANCER_SOLOANIMATION_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x4AB630)
#define ANIMANCER_SOLOANIMATION_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x4AB640)
#define ANIMANCER_SOLOANIMATION_GET_STOPONDISABLE_OFFSET UNITYSDK_OFFSET(0x4AB680)
#define ANIMANCER_SOLOANIMATION_SET_STOPONDISABLE_OFFSET UNITYSDK_OFFSET(0x4AB6B0)
#define ANIMANCER_SOLOANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x4AB6E0)
#define ANIMANCER_SOLOANIMATION_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x4AB6F0)
#define ANIMANCER_SOLOANIMATION_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x4AB760)
#define ANIMANCER_SOLOANIMATION_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x4AB770)
#define ANIMANCER_SOLOANIMATION_GET_FOOTIK_OFFSET UNITYSDK_OFFSET(0x4AB830)
#define ANIMANCER_SOLOANIMATION_SET_FOOTIK_OFFSET UNITYSDK_OFFSET(0x4AB840)
#define ANIMANCER_SOLOANIMATION_GET_TIME_OFFSET UNITYSDK_OFFSET(0x4AB850)
#define ANIMANCER_SOLOANIMATION_SET_TIME_OFFSET UNITYSDK_OFFSET(0x4AB8A0)
#define ANIMANCER_SOLOANIMATION_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x4AB950)
#define ANIMANCER_SOLOANIMATION_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x4AB9D0)
#define ANIMANCER_SOLOANIMATION_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x4AB610)
#define ANIMANCER_SOLOANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x4AB620)
#define ANIMANCER_SOLOANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x4ABA10)
#define ANIMANCER_SOLOANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x4ABB80)
#define ANIMANCER_SOLOANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x4ABBD0)
#define ANIMANCER_SOLOANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x4ABCA0)
#define ANIMANCER_SOLOANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x4ABD50)
#define ANIMANCER_SOLOANIMATION_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4ABD80)
#define ANIMANCER_SOLOANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ABE60)

namespace Animancer
{
	inline static constexpr unsigned int SoloAnimation_TypeDefinitionIndex = 35127;

	class SoloAnimation : public Il2CppObject
	{
	public:
		::System::Int32 DefaultExecutionOrder; // 0x0
		::UnityEngine::Animator* _Animator; // 0x18
		::UnityEngine::AnimationClip* _Clip; // 0x20
		::UnityEngine::Playables::PlayableGraph* _Graph; // 0x28
		::UnityEngine::Animations::AnimationClipPlayable* _Playable; // 0x38
		::System::Boolean _IsPlaying; // 0x48
		::System::Single _Speed; // 0x4C
		::System::Boolean _FootIK; // 0x50

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_Clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StopOnDisable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_STOPONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_StopOnDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_STOPONDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_FOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_FootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_FOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Single get_Time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_Time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_NormalizedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_SET_NORMALIZEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_PLAY_OFFSET))(nullptr);
		}

		::System::Void Play(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SOLOANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

