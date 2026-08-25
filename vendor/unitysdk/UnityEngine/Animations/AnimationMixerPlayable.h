#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationMixerPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CF930)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CF9E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CFB90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CFD00)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1CFD10)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1CFD90)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CFC70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1CFE70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CFE30)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationMixerPlayable_TypeDefinitionIndex = 36496;

	class AnimationMixerPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationMixerPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationMixerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationMixerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationMixerPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationMixerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

