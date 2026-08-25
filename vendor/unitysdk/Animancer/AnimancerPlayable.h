#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace Animancer { class IAnimancerComponent; }
namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class IPlayableWrapper; }
namespace Animancer { class AnimancerNode; }
namespace UnityEngine::Playables { class DirectorUpdateMode; }
namespace UnityEngine::Playables { class PlayableOutput&; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class FadeMode; }
namespace Animancer { class ITransition; }
namespace Animancer { class AnimancerLayer; }
namespace Animancer { class IHasKey; }
namespace Animancer { class IUpdatable; }
namespace UnityEngine::Playables { class FrameData; }

#define ANIMANCER_ANIMANCERPLAYABLE_GET_DEFAULTFADEDURATION_OFFSET UNITYSDK_OFFSET(0x49E080)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_DEFAULTFADEDURATION_OFFSET UNITYSDK_OFFSET(0x49E0D0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x49E130)
#define ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x49E140)
#define ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_PARENT_OFFSET UNITYSDK_OFFSET(0x49E150)
#define ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x49E160)
#define ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x49E170)
#define ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GETCHILD_OFFSET UNITYSDK_OFFSET(0x49E190)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x49E1E0)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_LAYERS_OFFSET UNITYSDK_OFFSET(0x49E1F0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_STATES_OFFSET UNITYSDK_OFFSET(0x49E200)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_STATES_OFFSET UNITYSDK_OFFSET(0x49E210)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x49E220)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x49E230)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_COMMANDCOUNT_OFFSET UNITYSDK_OFFSET(0x49E240)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x49E290)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x488A10)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x49E2A0)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x49E2B0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x49E310)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x48A4F0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_SKIPFIRSTFADE_OFFSET UNITYSDK_OFFSET(0x49E430)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_SKIPFIRSTFADE_OFFSET UNITYSDK_OFFSET(0x49E440)
#define ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x488D30)
#define ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x49E610)
#define ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERPLAYABLE_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x49E6A0)
#define ANIMANCER_ANIMANCERPLAYABLE_SETNEXTGRAPHNAME_OFFSET UNITYSDK_OFFSET(0x49EC00)
#define ANIMANCER_ANIMANCERPLAYABLE_TRYGETOUTPUT_OFFSET UNITYSDK_OFFSET(0x49EC10)
#define ANIMANCER_ANIMANCERPLAYABLE_CREATEOUTPUT_OFFSET UNITYSDK_OFFSET(0x49ED50)
#define ANIMANCER_ANIMANCERPLAYABLE_CREATEOUTPUT_OFFSET UNITYSDK_OFFSET(0x488560)
#define ANIMANCER_ANIMANCERPLAYABLE_INSERTOUTPUTPLAYABLE_OFFSET UNITYSDK_OFFSET(0x49EE00)
#define ANIMANCER_ANIMANCERPLAYABLE_INSERTOUTPUTJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x488810)
#define ANIMANCER_ANIMANCERPLAYABLE_DESTROYGRAPH_OFFSET UNITYSDK_OFFSET(0x488C80)
#define ANIMANCER_ANIMANCERPLAYABLE_DESTROYOUTPUT_OFFSET UNITYSDK_OFFSET(0x4884F0)
#define ANIMANCER_ANIMANCERPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x49EF20)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_DISPOSABLES_OFFSET UNITYSDK_OFFSET(0x49F3D0)
#define ANIMANCER_ANIMANCERPLAYABLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x49F450)
#define ANIMANCER_ANIMANCERPLAYABLE_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x49F130)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49F510)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x49F520)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49F5A0)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x49F5B0)
#define ANIMANCER_ANIMANCERPLAYABLE_GETKEY_OFFSET UNITYSDK_OFFSET(0x498CF0)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x49F630)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x489130)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x49F700)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x489230)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x489310)
#define ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET UNITYSDK_OFFSET(0x489480)
#define ANIMANCER_ANIMANCERPLAYABLE_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x4895B0)
#define ANIMANCER_ANIMANCERPLAYABLE_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x4896B0)
#define ANIMANCER_ANIMANCERPLAYABLE_GETLOCALLAYER_OFFSET UNITYSDK_OFFSET(0x49F680)
#define ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET UNITYSDK_OFFSET(0x489890)
#define ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET UNITYSDK_OFFSET(0x489930)
#define ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET UNITYSDK_OFFSET(0x4899E0)
#define ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489BE0)
#define ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489C80)
#define ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x489D70)
#define ANIMANCER_ANIMANCERPLAYABLE_ISPLAYINGCLIP_OFFSET UNITYSDK_OFFSET(0x489E40)
#define ANIMANCER_ANIMANCERPLAYABLE_GETTOTALWEIGHT_OFFSET UNITYSDK_OFFSET(0x49F960)
#define ANIMANCER_ANIMANCERPLAYABLE_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x48A190)
#define ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x49F9F0)
#define ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x49FA70)
#define ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x49FA80)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_ISGRAPHPLAYING_OFFSET UNITYSDK_OFFSET(0x49FA90)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_ISGRAPHPLAYING_OFFSET UNITYSDK_OFFSET(0x49FAA0)
#define ANIMANCER_ANIMANCERPLAYABLE_UNPAUSEGRAPH_OFFSET UNITYSDK_OFFSET(0x488A70)
#define ANIMANCER_ANIMANCERPLAYABLE_PAUSEGRAPH_OFFSET UNITYSDK_OFFSET(0x488C50)
#define ANIMANCER_ANIMANCERPLAYABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x489F00)
#define ANIMANCER_ANIMANCERPLAYABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x489F50)
#define ANIMANCER_ANIMANCERPLAYABLE_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x49FAF0)
#define ANIMANCER_ANIMANCERPLAYABLE_APPENDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x49FB60)
#define ANIMANCER_ANIMANCERPLAYABLE_APPENDINTERNALDETAILS_OFFSET UNITYSDK_OFFSET(0x49FD30)
#define ANIMANCER_ANIMANCERPLAYABLE_APPENDALL_OFFSET UNITYSDK_OFFSET(0x49FE30)
#define ANIMANCER_ANIMANCERPLAYABLE_REQUIREPREUPDATE_OFFSET UNITYSDK_OFFSET(0x49C550)
#define ANIMANCER_ANIMANCERPLAYABLE_REQUIREPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x4A0260)
#define ANIMANCER_ANIMANCERPLAYABLE_CANCELUPDATE_OFFSET UNITYSDK_OFFSET(0x4A02B0)
#define ANIMANCER_ANIMANCERPLAYABLE_CANCELPREUPDATE_OFFSET UNITYSDK_OFFSET(0x49C690)
#define ANIMANCER_ANIMANCERPLAYABLE_CANCELPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x4A03B0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_PREUPDATABLECOUNT_OFFSET UNITYSDK_OFFSET(0x4A03C0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_POSTUPDATABLECOUNT_OFFSET UNITYSDK_OFFSET(0x4A0410)
#define ANIMANCER_ANIMANCERPLAYABLE_GETPREUPDATABLE_OFFSET UNITYSDK_OFFSET(0x4A0460)
#define ANIMANCER_ANIMANCERPLAYABLE_GETPOSTUPDATABLE_OFFSET UNITYSDK_OFFSET(0x4A04B0)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4A0500)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4A0550)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x4A05C0)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x4A0610)
#define ANIMANCER_ANIMANCERPLAYABLE_GET_FRAMEID_OFFSET UNITYSDK_OFFSET(0x4A0670)
#define ANIMANCER_ANIMANCERPLAYABLE_SET_FRAMEID_OFFSET UNITYSDK_OFFSET(0x4A0680)
#define ANIMANCER_ANIMANCERPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x4A0690)
#define ANIMANCER_ANIMANCERPLAYABLE_UPDATEALL_OFFSET UNITYSDK_OFFSET(0x4A0740)
#define ANIMANCER_ANIMANCERPLAYABLE_ISRUNNINGPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x4A0C30)
#define ANIMANCER_ANIMANCERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A0CB0)
#define ANIMANCER_ANIMANCERPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4A0CD0)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerPlayable_TypeDefinitionIndex = 35117;

	class AnimancerPlayable : public Il2CppObject
	{
	public:
		::System::Single _DefaultFadeDuration; // 0x0
		::UnityEngine::Playables::PlayableGraph* _Graph; // 0x10
		::UnityEngine::Playables::Playable* _RootPlayable; // 0x20
		::UnityEngine::Playables::Playable* _LayerMixer; // 0x30
		LayerList* _Layers_k__BackingField; // 0x40
		StateDictionary* _States_k__BackingField; // 0x48
		Il2CppObject* _PreUpdatables; // 0x50
		Il2CppObject* _PostUpdatables; // 0x58
		PostUpdate* _PostUpdate; // 0x60
		::Animancer::IAnimancerComponent* _Component_k__BackingField; // 0x68
		::System::Single _Speed; // 0x70
		::System::Boolean _KeepChildrenConnected; // 0x74
		::System::Boolean _SkipFirstFade; // 0x75
		::Animancer::AnimancerPlayable* Template; // 0x8
		Il2CppObject* _Disposables; // 0x78
		::System::Boolean _ApplyAnimatorIK; // 0x80
		::System::Boolean _ApplyFootIK; // 0x81
		::System::Boolean _IsGraphPlaying; // 0x82
		::Animancer::AnimancerPlayable* _Current_k__BackingField; // 0x10
		::System::Single _DeltaTime_k__BackingField; // 0x18
		::System::UInt64 _FrameID_k__BackingField; // 0x88
		Il2CppObject* _CurrentUpdatables; // 0x20
		::System::Int32 _CurrentUpdatable; // 0x28

		::System::Single get_DefaultFadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_DEFAULTFADEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_DefaultFadeDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_DEFAULTFADEDURATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* get_Graph()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_GRAPH_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* Animancer.IPlayableWrapper.get_Playable()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_PLAYABLE_OFFSET))(nullptr);
		}

		::Animancer::IPlayableWrapper* Animancer.IPlayableWrapper.get_Parent()
		{
			return (return (::Animancer::IPlayableWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_PARENT_OFFSET))(nullptr);
		}

		::System::Single Animancer.IPlayableWrapper.get_Weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 Animancer.IPlayableWrapper.get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::Animancer::AnimancerNode* Animancer.IPlayableWrapper.GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ANIMANCER.IPLAYABLEWRAPPER.GETCHILD_OFFSET))(arg, nullptr);
		}

		LayerList* get_Layers()
		{
			return (return (LayerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_LAYERS_OFFSET))(nullptr);
		}

		::System::Void set_Layers(LayerList* arg)
		{
			((::System::Void(*)(LayerList*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_LAYERS_OFFSET))(arg, nullptr);
		}

		StateDictionary* get_States()
		{
			return (return (StateDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_STATES_OFFSET))(nullptr);
		}

		::System::Void set_States(StateDictionary* arg)
		{
			((::System::Void(*)(StateDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_STATES_OFFSET))(arg, nullptr);
		}

		::Animancer::IAnimancerComponent* get_Component()
		{
			return (return (::Animancer::IAnimancerComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_COMPONENT_OFFSET))(nullptr);
		}

		::System::Void set_Component(::Animancer::IAnimancerComponent* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_COMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CommandCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_COMMANDCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::DirectorUpdateMode* get_UpdateMode()
		{
			return (return (::UnityEngine::Playables::DirectorUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateMode(::UnityEngine::Playables::DirectorUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::DirectorUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_KeepChildrenConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_KEEPCHILDRENCONNECTED_OFFSET))(nullptr);
		}

		::System::Void set_KeepChildrenConnected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_KEEPCHILDRENCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkipFirstFade()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_SKIPFIRSTFADE_OFFSET))(nullptr);
		}

		::System::Void set_SkipFirstFade(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_SKIPFIRSTFADE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerPlayable* Create()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg)
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextGraphName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SETNEXTGRAPHNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetOutput(::UnityEngine::Playables::PlayableOutput&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutput&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_TRYGETOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Void CreateOutput(::Animancer::IAnimancerComponent* arg)
		{
			((::System::Void(*)(::Animancer::IAnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CREATEOUTPUT_OFFSET))(arg, nullptr);
		}

		::System::Void CreateOutput(::UnityEngine::Animator* arg, ::Animancer::IAnimancerComponent* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::Animancer::IAnimancerComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CREATEOUTPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertOutputPlayable(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_INSERTOUTPUTPLAYABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimationScriptPlayable* InsertOutputJob(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_INSERTOUTPUTJOB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void DestroyGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_DESTROYGRAPH_OFFSET))(nullptr);
		}

		::System::Boolean DestroyOutput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_DESTROYOUTPUT_OFFSET))(nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Disposables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_DISPOSABLES_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void DisposeAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_DISPOSEALL_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Object* GetKey(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETKEY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::AnimancerState* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerState*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Play(::Animancer::ITransition* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_TRYPLAY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* TryPlay(::System::Object* arg, ::System::Single arg, ::Animancer::FadeMode* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::System::Single, ::Animancer::FadeMode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_TRYPLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerLayer* GetLocalLayer(::Animancer::AnimancerState* arg)
		{
			return (return (::Animancer::AnimancerLayer*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETLOCALLAYER_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Stop(::Animancer::IHasKey* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Stop(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_STOP_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying(::Animancer::IHasKey* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingClip(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ISPLAYINGCLIP_OFFSET))(arg, nullptr);
		}

		::System::Single GetTotalWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETTOTALWEIGHT_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGraphPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_ISGRAPHPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_IsGraphPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_ISGRAPHPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void UnpauseGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_UNPAUSEGRAPH_OFFSET))(nullptr);
		}

		::System::Void PauseGraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PAUSEGRAPH_OFFSET))(nullptr);
		}

		::System::Void Evaluate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void Evaluate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void AppendDescription(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_APPENDDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void AppendInternalDetails(::System::Text::StringBuilder* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_APPENDINTERNALDETAILS_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void AppendAll(::System::Text::StringBuilder* arg, ::System::String* str, ::System::String* str, ::System::Collections::ICollection* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::System::String*, ::System::Collections::ICollection*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_APPENDALL_OFFSET))(arg, str, str, arg, str, nullptr);
		}

		::System::Void RequirePreUpdate(::Animancer::IUpdatable* arg)
		{
			((::System::Void(*)(::Animancer::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_REQUIREPREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RequirePostUpdate(::Animancer::IUpdatable* arg)
		{
			((::System::Void(*)(::Animancer::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_REQUIREPOSTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void CancelUpdate(Il2CppObject* arg, ::Animancer::IUpdatable* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Animancer::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CANCELUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CancelPreUpdate(::Animancer::IUpdatable* arg)
		{
			((::System::Void(*)(::Animancer::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CANCELPREUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void CancelPostUpdate(::Animancer::IUpdatable* arg)
		{
			((::System::Void(*)(::Animancer::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_CANCELPOSTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PreUpdatableCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_PREUPDATABLECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_PostUpdatableCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_POSTUPDATABLECOUNT_OFFSET))(nullptr);
		}

		::Animancer::IUpdatable* GetPreUpdatable(::System::Int32 arg)
		{
			return (return (::Animancer::IUpdatable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETPREUPDATABLE_OFFSET))(arg, nullptr);
		}

		::Animancer::IUpdatable* GetPostUpdatable(::System::Int32 arg)
		{
			return (return (::Animancer::IUpdatable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GETPOSTUPDATABLE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerPlayable* get_Current()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Single get_DeltaTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Void set_DeltaTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_DELTATIME_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_FrameID()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_GET_FRAMEID_OFFSET))(nullptr);
		}

		::System::Void set_FrameID(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_SET_FRAMEID_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateAll(Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_UPDATEALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsRunningPostUpdate(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_ISRUNNINGPOSTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

