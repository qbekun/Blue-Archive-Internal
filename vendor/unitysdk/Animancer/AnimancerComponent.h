#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class AnimancerComponent; }
namespace Animancer { class AnimancerLayer; }
namespace UnityEngine { class AnimatorUpdateMode; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class FadeMode; }
namespace Animancer { class ITransition; }
namespace Animancer { class IHasKey; }
namespace UnityEngine { class GameObject; }

#define ANIMANCER_ANIMANCERCOMPONENT_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x488400)
#define ANIMANCER_ANIMANCERCOMPONENT_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x488410)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x4886D0)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_ISPLAYABLEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x4884D0)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_STATES_OFFSET UNITYSDK_OFFSET(0x488820)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x488850)
#define ANIMANCER_ANIMANCERCOMPONENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x488880)
#define ANIMANCER_ANIMANCERCOMPONENT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4888B0)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_ACTIONONDISABLE_OFFSET UNITYSDK_OFFSET(0x488960)
#define ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_RESETONDISABLE_OFFSET UNITYSDK_OFFSET(0x488970)
#define ANIMANCER_ANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x488980)
#define ANIMANCER_ANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x4889A0)
#define ANIMANCER_ANIMANCERCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x488A20)
#define ANIMANCER_ANIMANCERCOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x488AA0)
#define ANIMANCER_ANIMANCERCOMPONENT_INITIALIZEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4886F0)
#define ANIMANCER_ANIMANCERCOMPONENT_INITIALIZEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x488E20)
#define ANIMANCER_ANIMANCERCOMPONENT_ONINITIALIZEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x488F60)
#define ANIMANCER_ANIMANCERCOMPONENT_TRYGETANIMATOR_OFFSET UNITYSDK_OFFSET(0x488CB0)
#define ANIMANCER_ANIMANCERCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x488F70)
#define ANIMANCER_ANIMANCERCOMPONENT_GETKEY_OFFSET UNITYSDK_OFFSET(0x488FE0)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x488FF0)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x489160)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x4891A0)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x489280)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x4892E0)
#define ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x489430)
#define ANIMANCER_ANIMANCERCOMPONENT_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x489580)
#define ANIMANCER_ANIMANCERCOMPONENT_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x489660)
#define ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET UNITYSDK_OFFSET(0x489780)
#define ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET UNITYSDK_OFFSET(0x4897D0)
#define ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET UNITYSDK_OFFSET(0x4897C0)
#define ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET UNITYSDK_OFFSET(0x488C10)
#define ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489A50)
#define ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489B00)
#define ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489AB0)
#define ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489D20)
#define ANIMANCER_ANIMANCERCOMPONENT_ISPLAYINGCLIP_OFFSET UNITYSDK_OFFSET(0x489DF0)
#define ANIMANCER_ANIMANCERCOMPONENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x489ED0)
#define ANIMANCER_ANIMANCERCOMPONENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x489F10)
#define ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x489F60)
#define ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x48A020)
#define ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x48A030)
#define ANIMANCER_ANIMANCERCOMPONENT_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x48A040)
#define ANIMANCER_ANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x48A130)
#define ANIMANCER_ANIMANCERCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x48A1C0)
#define ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x48A1D0)
#define ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x48A1E0)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerComponent_TypeDefinitionIndex = 35081;

	class AnimancerComponent : public Il2CppObject
	{
	public:
		::System::Int32 DefaultExecutionOrder; // 0x0
		::UnityEngine::Animator* _Animator; // 0x18
		::Animancer::AnimancerPlayable* _Playable; // 0x20
		DisableAction* _ActionOnDisable; // 0x28

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerPlayable* get_Playable()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayableInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_ISPLAYABLEINITIALIZED_OFFSET))(nullptr);
		}

		StateDictionary* get_States()
		{
			return (return (StateDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_STATES_OFFSET))(nullptr);
		}

		LayerList* get_Layers()
		{
			return (return (LayerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_LAYERS_OFFSET))(nullptr);
		}

		::Animancer::AnimancerPlayable* op_Implicit(::Animancer::AnimancerComponent* arg)
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerLayer* op_Implicit(::Animancer::AnimancerComponent* arg)
		{
			return (return (::Animancer::AnimancerLayer*(*)(::Animancer::AnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		DisableAction&* get_ActionOnDisable()
		{
			return (return (DisableAction&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_ACTIONONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean Animancer.IAnimancerComponent.get_ResetOnDisable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_RESETONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorUpdateMode* get_UpdateMode()
		{
			return (return (::UnityEngine::AnimatorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateMode(::UnityEngine::AnimatorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InitializePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_INITIALIZEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void InitializePlayable(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_INITIALIZEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInitializePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ONINITIALIZEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAnimator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_TRYGETANIMATOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Object* GetKey(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GETKEY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_TRYPLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_TRYPLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Stop(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Stop(::Animancer::IHasKey* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Stop(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_STOP_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying(::Animancer::IHasKey* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingClip(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ISPLAYINGCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void Evaluate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Animancer.IAnimancerComponent.get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_ENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* Animancer.IAnimancerComponent.get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERCOMPONENT_ANIMANCER.IANIMANCERCOMPONENT.GET_GAMEOBJECT_OFFSET))(nullptr);
		}

	};
}

