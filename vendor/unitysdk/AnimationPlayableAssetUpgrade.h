#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class AnimationPlayableAsset; }

#define ANIMATIONPLAYABLEASSETUPGRADE_CONVERTROTATIONTOEULER_OFFSET UNITYSDK_OFFSET(0xA18B2A0)

	inline static constexpr unsigned int AnimationPlayableAssetUpgrade_TypeDefinitionIndex = 36245;

	class AnimationPlayableAssetUpgrade : public Il2CppObject
	{
	public:
		::System::Void ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::AnimationPlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYABLEASSETUPGRADE_CONVERTROTATIONTOEULER_OFFSET))(arg, nullptr);
		}

	};

