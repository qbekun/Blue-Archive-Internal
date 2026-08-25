#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }

#define UNITYENGINE_ANIMATIONS_IANIMATIONJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_IANIMATIONJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int IAnimationJob_TypeDefinitionIndex = 36487;

	class IAnimationJob : public Il2CppObject
	{
	public:
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_IANIMATIONJOB_PROCESSANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_IANIMATIONJOB_PROCESSROOTMOTION_OFFSET))(arg, nullptr);
		}

	};
}

