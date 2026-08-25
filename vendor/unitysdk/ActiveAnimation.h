#pragma once
#include "unitysdk.h"

class ActiveAnimation;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace AnimationOrTween { class Direction; }
namespace UnityEngine { class Animator; }
namespace AnimationOrTween { class EnableCondition; }
namespace AnimationOrTween { class DisableCondition; }

#define ACTIVEANIMATION_GET_PLAYBACKTIME_OFFSET UNITYSDK_OFFSET(0xA44440)
#define ACTIVEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA444C0)
#define ACTIVEANIMATION_FINISH_OFFSET UNITYSDK_OFFSET(0xA410A0)
#define ACTIVEANIMATION_RESET_OFFSET UNITYSDK_OFFSET(0xA44A30)
#define ACTIVEANIMATION_START_OFFSET UNITYSDK_OFFSET(0xA44E30)
#define ACTIVEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA44F80)
#define ACTIVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA45670)
#define ACTIVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA414E0)
#define ACTIVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA45CF0)
#define ACTIVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA45D10)
#define ACTIVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xA40DD0)
#define ACTIVEANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA45D30)

	inline static constexpr unsigned int ActiveAnimation_TypeDefinitionIndex = 90;

	class ActiveAnimation : public Il2CppObject
	{
	public:
		ActiveAnimation* current; // 0x0
		Il2CppObject* onFinished; // 0x18
		::UnityEngine::GameObject* eventReceiver; // 0x20
		::System::String* callWhenFinished; // 0x28
		::UnityEngine::Animation* mAnim; // 0x30
		::AnimationOrTween::Direction* mLastDirection; // 0x38
		::AnimationOrTween::Direction* mDisableDirection; // 0x3C
		::System::Boolean mNotify; // 0x40
		::UnityEngine::Animator* mAnimator; // 0x48
		::System::String* mClip; // 0x50

		::System::Single get_playbackTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_GET_PLAYBACKTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_FINISH_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_RESET_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Play(::System::String* str, ::AnimationOrTween::Direction* arg)
		{
			((::System::Void(*)(::System::String*, ::AnimationOrTween::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_PLAY_OFFSET))(str, arg, nullptr);
		}

		ActiveAnimation* Play(::UnityEngine::Animation* arg, ::System::String* str, ::AnimationOrTween::Direction* arg2, ::AnimationOrTween::EnableCondition* arg3, ::AnimationOrTween::DisableCondition* arg4)
		{
			return ((ActiveAnimation*(*)(::UnityEngine::Animation*, ::System::String*, ::AnimationOrTween::Direction*, ::AnimationOrTween::EnableCondition*, ::AnimationOrTween::DisableCondition*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_PLAY_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		ActiveAnimation* Play(::UnityEngine::Animation* arg, ::System::String* str, ::AnimationOrTween::Direction* arg2)
		{
			return ((ActiveAnimation*(*)(::UnityEngine::Animation*, ::System::String*, ::AnimationOrTween::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_PLAY_OFFSET))(arg, str, arg2, nullptr);
		}

		ActiveAnimation* Play(::UnityEngine::Animation* arg, ::AnimationOrTween::Direction* arg2)
		{
			return ((ActiveAnimation*(*)(::UnityEngine::Animation*, ::AnimationOrTween::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		ActiveAnimation* Play(::UnityEngine::Animator* arg, ::System::String* str, ::AnimationOrTween::Direction* arg2, ::AnimationOrTween::EnableCondition* arg3, ::AnimationOrTween::DisableCondition* arg4)
		{
			return ((ActiveAnimation*(*)(::UnityEngine::Animator*, ::System::String*, ::AnimationOrTween::Direction*, ::AnimationOrTween::EnableCondition*, ::AnimationOrTween::DisableCondition*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_PLAY_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};

