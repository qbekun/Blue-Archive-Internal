#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationMotionXToDeltaPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CFF00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CFFB0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D0150)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D02C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D02D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D0350)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET UNITYSDK_OFFSET(0xA1D03F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D0230)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D0480)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D0500)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D04C0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMotionXToDeltaPlayable_TypeDefinitionIndex = 36497;

	class AnimationMotionXToDeltaPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg)
		{
			return (return (::UnityEngine::Animations::AnimationMotionXToDeltaPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAbsoluteMotion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAbsoluteMotionInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_SETABSOLUTEMOTIONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMOTIONXTODELTAPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

