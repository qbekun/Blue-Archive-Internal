#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Playables { class Playable&; }
namespace Animancer { class AnimancerNode; }
namespace Animancer { class AnimancerLayer; }
namespace Animancer { class IPlayableWrapper; }
namespace Animancer { class AnimancerState; }

#define ANIMANCER_ANIMANCERNODE_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x49C060)
#define ANIMANCER_ANIMANCERNODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x49C070)
#define ANIMANCER_ANIMANCERNODE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x49C0C0)
#define ANIMANCER_ANIMANCERNODE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERNODE_DESTROYPLAYABLE_OFFSET UNITYSDK_OFFSET(0x49C270)
#define ANIMANCER_ANIMANCERNODE_RECREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x48F3D0)
#define ANIMANCER_ANIMANCERNODE_RECREATEPLAYABLERECURSIVE_OFFSET UNITYSDK_OFFSET(0x49C300)
#define ANIMANCER_ANIMANCERNODE_ANIMANCER.ICOPYABLE_ANIMANCER.ANIMANCERNODE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x49C380)
#define ANIMANCER_ANIMANCERNODE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x49C510)
#define ANIMANCER_ANIMANCERNODE_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x49C520)
#define ANIMANCER_ANIMANCERNODE_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERNODE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x49C530)
#define ANIMANCER_ANIMANCERNODE_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x49C540)
#define ANIMANCER_ANIMANCERNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x497B80)
#define ANIMANCER_ANIMANCERNODE_CONNECTTOGRAPH_OFFSET UNITYSDK_OFFSET(0x498A40)
#define ANIMANCER_ANIMANCERNODE_DISCONNECTFROMGRAPH_OFFSET UNITYSDK_OFFSET(0x4988F0)
#define ANIMANCER_ANIMANCERNODE_APPLYCONNECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x49C160)
#define ANIMANCER_ANIMANCERNODE_REQUIREUPDATE_OFFSET UNITYSDK_OFFSET(0x49C5A0)
#define ANIMANCER_ANIMANCERNODE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x49C600)
#define ANIMANCER_ANIMANCERNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x49C6A0)
#define ANIMANCER_ANIMANCERNODE_ISPLAYINGANDNOTENDING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x49CA90)
#define ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x49CAB0)
#define ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x49CAC0)
#define ANIMANCER_ANIMANCERNODE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x49CAD0)
#define ANIMANCER_ANIMANCERNODE_ANIMANCER.IPLAYABLEWRAPPER.GETCHILD_OFFSET UNITYSDK_OFFSET(0x49CAE0)
#define ANIMANCER_ANIMANCERNODE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x49CB00)
#define ANIMANCER_ANIMANCERNODE_ONADDCHILD_OFFSET UNITYSDK_OFFSET(0x49CB90)
#define ANIMANCER_ANIMANCERNODE_ONREMOVECHILD_OFFSET UNITYSDK_OFFSET(0x49CC80)
#define ANIMANCER_ANIMANCERNODE_ONADDCHILD_OFFSET UNITYSDK_OFFSET(0x498490)
#define ANIMANCER_ANIMANCERNODE_GET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x49CD40)
#define ANIMANCER_ANIMANCERNODE_CONNECTALLCHILDRENTOGRAPH_OFFSET UNITYSDK_OFFSET(0x49CD50)
#define ANIMANCER_ANIMANCERNODE_DISCONNECTWEIGHTLESSCHILDRENFROMGRAPH_OFFSET UNITYSDK_OFFSET(0x49CEC0)
#define ANIMANCER_ANIMANCERNODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x49CF40)
#define ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERSTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x49CF50)
#define ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x49CFB0)
#define ANIMANCER_ANIMANCERNODE_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x49D010)
#define ANIMANCER_ANIMANCERNODE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x48FBD0)
#define ANIMANCER_ANIMANCERNODE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x49D020)
#define ANIMANCER_ANIMANCERNODE_SETWEIGHTDIRTY_OFFSET UNITYSDK_OFFSET(0x49D090)
#define ANIMANCER_ANIMANCERNODE_APPLYWEIGHT_OFFSET UNITYSDK_OFFSET(0x49C850)
#define ANIMANCER_ANIMANCERNODE_GET_EFFECTIVEWEIGHT_OFFSET UNITYSDK_OFFSET(0x49D0F0)
#define ANIMANCER_ANIMANCERNODE_GET_TARGETWEIGHT_OFFSET UNITYSDK_OFFSET(0x49D250)
#define ANIMANCER_ANIMANCERNODE_SET_TARGETWEIGHT_OFFSET UNITYSDK_OFFSET(0x49D260)
#define ANIMANCER_ANIMANCERNODE_GET_FADESPEED_OFFSET UNITYSDK_OFFSET(0x49D270)
#define ANIMANCER_ANIMANCERNODE_SET_FADESPEED_OFFSET UNITYSDK_OFFSET(0x49D280)
#define ANIMANCER_ANIMANCERNODE_STARTFADE_OFFSET UNITYSDK_OFFSET(0x49D290)
#define ANIMANCER_ANIMANCERNODE_STARTFADE_OFFSET UNITYSDK_OFFSET(0x49AD50)
#define ANIMANCER_ANIMANCERNODE_ONSTARTFADE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERNODE_STOP_OFFSET UNITYSDK_OFFSET(0x49B310)
#define ANIMANCER_ANIMANCERNODE_UPDATEFADE_OFFSET UNITYSDK_OFFSET(0x49C6C0)
#define ANIMANCER_ANIMANCERNODE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x49D520)
#define ANIMANCER_ANIMANCERNODE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x49C470)
#define ANIMANCER_ANIMANCERNODE_GET_PARENTEFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x49D360)
#define ANIMANCER_ANIMANCERNODE_GET_EFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x494430)
#define ANIMANCER_ANIMANCERNODE_SET_EFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x49D530)
#define ANIMANCER_ANIMANCERNODE_GET_APPLYPARENTANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49D5D0)
#define ANIMANCER_ANIMANCERNODE_SET_APPLYPARENTANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49D620)
#define ANIMANCER_ANIMANCERNODE_GET_APPLYPARENTFOOTIK_OFFSET UNITYSDK_OFFSET(0x49D670)
#define ANIMANCER_ANIMANCERNODE_SET_APPLYPARENTFOOTIK_OFFSET UNITYSDK_OFFSET(0x49D6C0)
#define ANIMANCER_ANIMANCERNODE_COPYIKFLAGS_OFFSET UNITYSDK_OFFSET(0x49D710)
#define ANIMANCER_ANIMANCERNODE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49D900)
#define ANIMANCER_ANIMANCERNODE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49B640)
#define ANIMANCER_ANIMANCERNODE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49D970)
#define ANIMANCER_ANIMANCERNODE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49B720)
#define ANIMANCER_ANIMANCERNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x49D9E0)
#define ANIMANCER_ANIMANCERNODE_SETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x49D9F0)
#define ANIMANCER_ANIMANCERNODE_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x49DA00)
#define ANIMANCER_ANIMANCERNODE_APPENDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x49DA80)
#define ANIMANCER_ANIMANCERNODE_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x49BC30)
#define ANIMANCER_ANIMANCERNODE_APPENDIKDETAILS_OFFSET UNITYSDK_OFFSET(0x49DD90)
#define ANIMANCER_ANIMANCERNODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x49E030)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerNode_TypeDefinitionIndex = 35113;

	class AnimancerNode : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* _Playable; // 0x18
		::Animancer::AnimancerPlayable* _Root; // 0x28
		::System::Int32 _Index_k__BackingField; // 0x30
		::System::Single _Weight; // 0x34
		::System::Boolean _IsWeightDirty; // 0x38
		::System::Single _TargetWeight_k__BackingField; // 0x3C
		::System::Single _FadeSpeed_k__BackingField; // 0x40
		::System::Single _Speed; // 0x44
		::System::Boolean _ApplyParentAnimatorIK_k__BackingField; // 0x0
		::System::Boolean _ApplyParentFootIK_k__BackingField; // 0x1

		::UnityEngine::Playables::Playable* get_Playable()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void CreatePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_CREATEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyPlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_DESTROYPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void RecreatePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_RECREATEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void RecreatePlayableRecursive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_RECREATEPLAYABLERECURSIVE_OFFSET))(nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.AnimancerNode_.CopyFrom(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ANIMANCER.ICOPYABLE_ANIMANCER.ANIMANCERNODE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerPlayable* get_Root()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_ROOT_OFFSET))(nullptr);
		}

		::System::Void set_Root(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_ROOT_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerLayer* get_Layer()
		{
			return (return (::Animancer::AnimancerLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_LAYER_OFFSET))(nullptr);
		}

		::Animancer::IPlayableWrapper* get_Parent()
		{
			return (return (::Animancer::IPlayableWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ConnectToGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_CONNECTTOGRAPH_OFFSET))(nullptr);
		}

		::System::Void DisconnectFromGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_DISCONNECTFROMGRAPH_OFFSET))(nullptr);
		}

		::System::Void ApplyConnectedState(::Animancer::IPlayableWrapper* arg)
		{
			((::System::Void(*)(::Animancer::IPlayableWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_APPLYCONNECTEDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void RequireUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_REQUIREUPDATE_OFFSET))(nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlayingAndNotEnding()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ISPLAYINGANDNOTENDING_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::Animancer::AnimancerNode* Animancer.IPlayableWrapper.GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ANIMANCER.IPLAYABLEWRAPPER.GETCHILD_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnAddChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ONADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoveChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ONREMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnAddChild(Il2CppObject* arg, ::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ONADDCHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_KeepChildrenConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_KEEPCHILDRENCONNECTED_OFFSET))(nullptr);
		}

		::System::Void ConnectAllChildrenToGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_CONNECTALLCHILDRENTOGRAPH_OFFSET))(nullptr);
		}

		::System::Void DisconnectWeightlessChildrenFromGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_DISCONNECTWEIGHTLESSCHILDRENFROMGRAPH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Animancer.AnimancerState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERSTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Single get_Weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeightDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SETWEIGHTDIRTY_OFFSET))(nullptr);
		}

		::System::Void ApplyWeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_APPLYWEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_EffectiveWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_EFFECTIVEWEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_TargetWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_TARGETWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_TargetWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_TARGETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_FadeSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_FADESPEED_OFFSET))(nullptr);
		}

		::System::Void set_FadeSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_FADESPEED_OFFSET))(arg, nullptr);
		}

		::System::Void StartFade(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_STARTFADE_OFFSET))(arg, nullptr);
		}

		::System::Void StartFade(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_STARTFADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnStartFade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_ONSTARTFADE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_STOP_OFFSET))(nullptr);
		}

		::System::Void UpdateFade(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_UPDATEFADE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParentEffectiveSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_PARENTEFFECTIVESPEED_OFFSET))(nullptr);
		}

		::System::Single get_EffectiveSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_EFFECTIVESPEED_OFFSET))(nullptr);
		}

		::System::Void set_EffectiveSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_EFFECTIVESPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyParentAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_APPLYPARENTANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyParentAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_APPLYPARENTANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyParentFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_APPLYPARENTFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyParentFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_APPLYPARENTFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIKFlags(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_COPYIKFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetDebugName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_SETDEBUGNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetDescription(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_GETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void AppendDescription(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_APPENDDESCRIPTION_OFFSET))(arg, str, nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void AppendIKDetails(::System::Text::StringBuilder* arg, ::System::String* str, ::Animancer::IPlayableWrapper* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::Animancer::IPlayableWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_APPENDIKDETAILS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERNODE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

