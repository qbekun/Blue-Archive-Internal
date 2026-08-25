#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationPosePlayable; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D0F30)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D1010)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D1020)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D10C0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPosePlayable_TypeDefinitionIndex = 36502;

	class AnimationPosePlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationPosePlayable* m_NullPlayable; // 0x0

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationPosePlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationPosePlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPOSEPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

