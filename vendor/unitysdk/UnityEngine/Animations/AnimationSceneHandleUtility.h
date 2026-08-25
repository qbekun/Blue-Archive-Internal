#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }
namespace UnityEngine::Animations { class AnimationStream&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_READFLOATS_OFFSET UNITYSDK_OFFSET(0xA1D35C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_VALIDATEANDGETARRAYCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_READSCENEFLOATSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D36C0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationSceneHandleUtility_TypeDefinitionIndex = 36510;

	class AnimationSceneHandleUtility : public Il2CppObject
	{
	public:
		::System::Void ReadFloats(::UnityEngine::Animations::AnimationStream* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_READFLOATS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ValidateAndGetArrayCount(::UnityEngine::Animations::AnimationStream&* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::AnimationStream&*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_VALIDATEANDGETARRAYCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadSceneFloatsInternal(::UnityEngine::Animations::AnimationStream&* arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONSCENEHANDLEUTILITY_READSCENEFLOATSINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

