#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationClipPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CE2A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CE4B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CE590)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CE6C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1CE6D0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA1CE710)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1CE7A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA1CE820)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0xA1CE8A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYPLAYABLEIK_OFFSET UNITYSDK_OFFSET(0xA1CE920)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYPLAYABLEIK_OFFSET UNITYSDK_OFFSET(0xA1CE9A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET UNITYSDK_OFFSET(0xA1CEA20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET UNITYSDK_OFFSET(0xA1CEAA0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET UNITYSDK_OFFSET(0xA1CEB20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CE670)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYFOOTIKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CE860)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CE8E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYPLAYABLEIKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CE960)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYPLAYABLEIKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CE9E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CEA60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CEAE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CEB60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CEBA0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationClipPlayable_TypeDefinitionIndex = 36493;

	class AnimationClipPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Animations::AnimationClipPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::UnityEngine::Animations::AnimationClipPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationClipPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationClipPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimationClipPlayable* op_Explicit(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Animations::AnimationClipPlayable*(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationClipPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationClipPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void SetApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetApplyPlayableIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYPLAYABLEIK_OFFSET))(nullptr);
		}

		::System::Void SetApplyPlayableIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYPLAYABLEIK_OFFSET))(arg, nullptr);
		}

		::System::Void SetRemoveStartOffset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void SetOverrideLoopTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetLoopTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetApplyFootIKInternal(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYFOOTIKINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetApplyFootIKInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYFOOTIKINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetApplyPlayableIKInternal(::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_GETAPPLYPLAYABLEIKINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetApplyPlayableIKInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETAPPLYPLAYABLEIKINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRemoveStartOffsetInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETREMOVESTARTOFFSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetOverrideLoopTimeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETOVERRIDELOOPTIMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLoopTimeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_SETLOOPTIMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONCLIPPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

