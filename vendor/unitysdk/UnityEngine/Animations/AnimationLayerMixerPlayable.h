#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationLayerMixerPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CEBF0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CECD0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CED70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CEF20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CF130)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1CF140)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1CF1C0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_ISLAYERADDITIVE_OFFSET UNITYSDK_OFFSET(0xA1CF260)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVE_OFFSET UNITYSDK_OFFSET(0xA1CF420)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASK_OFFSET UNITYSDK_OFFSET(0xA1CF600)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CF060)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_ISLAYERADDITIVEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CF3E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CF5B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETSINGLELAYEROPTIMIZATIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CF0F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASKINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1CF810)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1CF8A0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CF860)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationLayerMixerPlayable_TypeDefinitionIndex = 36495;

	class AnimationLayerMixerPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationLayerMixerPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationLayerMixerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationLayerMixerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::AnimationLayerMixerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Animations::AnimationLayerMixerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationLayerMixerPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationLayerMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationLayerMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLayerAdditive(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_ISLAYERADDITIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayerAdditive(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLayerMaskFromAvatarMask(::System::UInt32 arg, ::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLayerAdditiveInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_ISLAYERADDITIVEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLayerAdditiveInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERADDITIVEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSingleLayerOptimizationInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETSINGLELAYEROPTIMIZATIONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLayerMaskFromAvatarMaskInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::UInt32 arg, ::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::UInt32, ::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_SETLAYERMASKFROMAVATARMASKINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONLAYERMIXERPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

