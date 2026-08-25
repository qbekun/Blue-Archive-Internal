#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Playables { class Playable&; }
namespace Animancer { class AnimancerLayer; }
namespace Animancer { class IPlayableWrapper; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class Vector3; }
namespace Animancer { class ClipState; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class ITransition; }
namespace Animancer { class FadeMode; }
namespace Animancer { class AnimancerState&; }

#define ANIMANCER_ANIMANCERLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x497970)
#define ANIMANCER_ANIMANCERLAYER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x497BA0)
#define ANIMANCER_ANIMANCERLAYER_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x497C40)
#define ANIMANCER_ANIMANCERLAYER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x497C50)
#define ANIMANCER_ANIMANCERLAYER_GET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x497C60)
#define ANIMANCER_ANIMANCERLAYER_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x497C80)
#define ANIMANCER_ANIMANCERLAYER_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x497C90)
#define ANIMANCER_ANIMANCERLAYER_GET_COMMANDCOUNT_OFFSET UNITYSDK_OFFSET(0x497CB0)
#define ANIMANCER_ANIMANCERLAYER_SET_COMMANDCOUNT_OFFSET UNITYSDK_OFFSET(0x497CC0)
#define ANIMANCER_ANIMANCERLAYER_GET_ISADDITIVE_OFFSET UNITYSDK_OFFSET(0x497CD0)
#define ANIMANCER_ANIMANCERLAYER_SET_ISADDITIVE_OFFSET UNITYSDK_OFFSET(0x497D10)
#define ANIMANCER_ANIMANCERLAYER_SETMASK_OFFSET UNITYSDK_OFFSET(0x497D50)
#define ANIMANCER_ANIMANCERLAYER_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x497D90)
#define ANIMANCER_ANIMANCERLAYER_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x497E90)
#define ANIMANCER_ANIMANCERLAYER_GETCHILD_OFFSET UNITYSDK_OFFSET(0x497ED0)
#define ANIMANCER_ANIMANCERLAYER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x497F20)
#define ANIMANCER_ANIMANCERLAYER_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x497F70)
#define ANIMANCER_ANIMANCERLAYER_ONADDCHILD_OFFSET UNITYSDK_OFFSET(0x498480)
#define ANIMANCER_ANIMANCERLAYER_ONREMOVECHILD_OFFSET UNITYSDK_OFFSET(0x498720)
#define ANIMANCER_ANIMANCERLAYER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x498B80)
#define ANIMANCER_ANIMANCERLAYER_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x498BD0)
#define ANIMANCER_ANIMANCERLAYER_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x498DA0)
#define ANIMANCER_ANIMANCERLAYER_GETSTATE_OFFSET UNITYSDK_OFFSET(0x498E20)
#define ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x499080)
#define ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x499180)
#define ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x4991C0)
#define ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x499220)
#define ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET UNITYSDK_OFFSET(0x4990B0)
#define ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET UNITYSDK_OFFSET(0x499450)
#define ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET UNITYSDK_OFFSET(0x4992D0)
#define ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET UNITYSDK_OFFSET(0x499750)
#define ANIMANCER_ANIMANCERLAYER_GET_WEIGHTLESSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x499820)
#define ANIMANCER_ANIMANCERLAYER_SET_WEIGHTLESSTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x499870)
#define ANIMANCER_ANIMANCERLAYER_GET_MAXCLONECOUNT_OFFSET UNITYSDK_OFFSET(0x4998D0)
#define ANIMANCER_ANIMANCERLAYER_SET_MAXCLONECOUNT_OFFSET UNITYSDK_OFFSET(0x499920)
#define ANIMANCER_ANIMANCERLAYER_GETORCREATEWEIGHTLESSSTATE_OFFSET UNITYSDK_OFFSET(0x499970)
#define ANIMANCER_ANIMANCERLAYER_DESTROYSTATES_OFFSET UNITYSDK_OFFSET(0x49A2E0)
#define ANIMANCER_ANIMANCERLAYER_ONSTARTFADE_OFFSET UNITYSDK_OFFSET(0x49A3B0)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49A450)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49A470)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49A760)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49A7A0)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49AEB0)
#define ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x49AFD0)
#define ANIMANCER_ANIMANCERLAYER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x49B0A0)
#define ANIMANCER_ANIMANCERLAYER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x49B140)
#define ANIMANCER_ANIMANCERLAYER_EVALUATEFADEMODE_OFFSET UNITYSDK_OFFSET(0x49AB30)
#define ANIMANCER_ANIMANCERLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x49B200)
#define ANIMANCER_ANIMANCERLAYER_ISPLAYINGCLIP_OFFSET UNITYSDK_OFFSET(0x49B390)
#define ANIMANCER_ANIMANCERLAYER_ISANYSTATEPLAYING_OFFSET UNITYSDK_OFFSET(0x49B480)
#define ANIMANCER_ANIMANCERLAYER_ISPLAYINGANDNOTENDING_OFFSET UNITYSDK_OFFSET(0x49B510)
#define ANIMANCER_ANIMANCERLAYER_GETTOTALWEIGHT_OFFSET UNITYSDK_OFFSET(0x49B530)
#define ANIMANCER_ANIMANCERLAYER_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49B5C0)
#define ANIMANCER_ANIMANCERLAYER_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49B5D0)
#define ANIMANCER_ANIMANCERLAYER_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49B6A0)
#define ANIMANCER_ANIMANCERLAYER_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49B6B0)
#define ANIMANCER_ANIMANCERLAYER_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x49B780)
#define ANIMANCER_ANIMANCERLAYER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x49BA90)
#define ANIMANCER_ANIMANCERLAYER_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x49BAE0)
#define ANIMANCER_ANIMANCERLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x49C010)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerLayer_TypeDefinitionIndex = 35112;

	class AnimancerLayer : public ::UnityEngine::AnimationPlayMode
	{
	public:
		Il2CppObject* States; // 0x48
		::Animancer::AnimancerState* _CurrentState; // 0x50
		::System::Int32 _CommandCount_k__BackingField; // 0x58
		::System::Single _WeightlessThreshold_k__BackingField; // 0x0
		::System::Int32 _MaxCloneCount_k__BackingField; // 0x4
		::System::Boolean _ApplyAnimatorIK; // 0x5C
		::System::Boolean _ApplyFootIK; // 0x5D

		::System::Void .ctor(::Animancer::AnimancerPlayable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerLayer* get_Layer()
		{
			return (return (::Animancer::AnimancerLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_LAYER_OFFSET))(nullptr);
		}

		::Animancer::IPlayableWrapper* get_Parent()
		{
			return (return (::Animancer::IPlayableWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Boolean get_KeepChildrenConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_KEEPCHILDRENCONNECTED_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* get_CurrentState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentState(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_CURRENTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CommandCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_COMMANDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CommandCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_COMMANDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAdditive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_ISADDITIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsAdditive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_ISADDITIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMask(::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SETMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETCHILD_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_Item(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnAddChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ONADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoveChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ONREMOVECHILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::Animancer::ClipState* CreateState(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::ClipState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATESTATE_OFFSET))(arg, nullptr);
		}

		::Animancer::ClipState* CreateState(::System::Object* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::ClipState*(*)(::System::Object*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATESTATE_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* GetState(::System::Object&* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_CREATEIFNEW_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreateState(::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreateState(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreateState(::System::Object* arg, ::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreateState(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETORCREATESTATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_WeightlessThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_WEIGHTLESSTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_WeightlessThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_WEIGHTLESSTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxCloneCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_MAXCLONECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_MaxCloneCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_MAXCLONECOUNT_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreateWeightlessState(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETORCREATEWEIGHTLESSSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyStates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_DESTROYSTATES_OFFSET))(nullptr);
		}

		::System::Void OnStartFade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ONSTARTFADE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_TRYPLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_TRYPLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EvaluateFadeMode(::Animancer::FadeMode* arg, ::Animancer::AnimancerState&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::Animancer::FadeMode*, ::Animancer::AnimancerState&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_EVALUATEFADEMODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_STOP_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingClip(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ISPLAYINGCLIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnyStatePlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ISANYSTATEPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingAndNotEnding()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_ISPLAYINGANDNOTENDING_OFFSET))(nullptr);
		}

		::System::Single GetTotalWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GETTOTALWEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERLAYER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

