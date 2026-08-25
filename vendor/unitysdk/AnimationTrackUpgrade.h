#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class AnimationTrack; }

#define ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET UNITYSDK_OFFSET(0xA18B8E0)
#define ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET UNITYSDK_OFFSET(0xA18B990)
#define ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET UNITYSDK_OFFSET(0xA18B7D0)

	inline static constexpr unsigned int AnimationTrackUpgrade_TypeDefinitionIndex = 36252;

	class AnimationTrackUpgrade : public Il2CppObject
	{
	public:
		::System::Void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONTRACKUPGRADE_CONVERTROOTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONTRACKUPGRADE_CONVERTINFINITETRACK_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::AnimationTrack*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONTRACKUPGRADE_CONVERTROTATIONSTOEULER_OFFSET))(arg, nullptr);
		}

	};

