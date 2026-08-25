#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerNode; }
namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class IPlayableWrapper; }
namespace Animancer { class AnimancerLayer; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector3; }
namespace Animancer { class AnimancerState; }

#define ANIMANCER_ANIMANCERSTATE_SETROOT_OFFSET UNITYSDK_OFFSET(0x498120)
#define ANIMANCER_ANIMANCERSTATE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x4A30B0)
#define ANIMANCER_ANIMANCERSTATE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x4983D0)
#define ANIMANCER_ANIMANCERSTATE_SETPARENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x49CC50)
#define ANIMANCER_ANIMANCERSTATE_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x4A30C0)
#define ANIMANCER_ANIMANCERSTATE_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x4A30E0)
#define ANIMANCER_ANIMANCERSTATE_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x48B310)
#define ANIMANCER_ANIMANCERSTATE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4A3120)
#define ANIMANCER_ANIMANCERSTATE_SET_KEY_OFFSET UNITYSDK_OFFSET(0x499590)
#define ANIMANCER_ANIMANCERSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x4A3130)
#define ANIMANCER_ANIMANCERSTATE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x4A3140)
#define ANIMANCER_ANIMANCERSTATE_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4A31D0)
#define ANIMANCER_ANIMANCERSTATE_SET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4A31E0)
#define ANIMANCER_ANIMANCERSTATE_CHANGEMAINOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERSTATE_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4A3270)
#define ANIMANCER_ANIMANCERSTATE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x4A3290)
#define ANIMANCER_ANIMANCERSTATE_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x48FC60)
#define ANIMANCER_ANIMANCERSTATE_ONSETISPLAYING_OFFSET UNITYSDK_OFFSET(0x4A32A0)
#define ANIMANCER_ANIMANCERSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4A32B0)
#define ANIMANCER_ANIMANCERSTATE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x4A33B0)
#define ANIMANCER_ANIMANCERSTATE_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x4A33D0)
#define ANIMANCER_ANIMANCERSTATE_PLAY_OFFSET UNITYSDK_OFFSET(0x49A5C0)
#define ANIMANCER_ANIMANCERSTATE_STOP_OFFSET UNITYSDK_OFFSET(0x4A3400)
#define ANIMANCER_ANIMANCERSTATE_ONSTARTFADE_OFFSET UNITYSDK_OFFSET(0x4A35B0)
#define ANIMANCER_ANIMANCERSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x4943E0)
#define ANIMANCER_ANIMANCERSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x48B7D0)
#define ANIMANCER_ANIMANCERSTATE_GET_TIMED_OFFSET UNITYSDK_OFFSET(0x4A3690)
#define ANIMANCER_ANIMANCERSTATE_SET_TIMED_OFFSET UNITYSDK_OFFSET(0x49A0D0)
#define ANIMANCER_ANIMANCERSTATE_GET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x4A37A0)
#define ANIMANCER_ANIMANCERSTATE_SET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x4A37F0)
#define ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x4A3870)
#define ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x48B380)
#define ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDTIMED_OFFSET UNITYSDK_OFFSET(0x4A3910)
#define ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDTIMED_OFFSET UNITYSDK_OFFSET(0x4A39B0)
#define ANIMANCER_ANIMANCERSTATE_MOVETIME_OFFSET UNITYSDK_OFFSET(0x4A39F0)
#define ANIMANCER_ANIMANCERSTATE_MOVETIME_OFFSET UNITYSDK_OFFSET(0x4A3A10)
#define ANIMANCER_ANIMANCERSTATE_CANCELSETTIME_OFFSET UNITYSDK_OFFSET(0x48FF30)
#define ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x4A3AB0)
#define ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDENDTIME_OFFSET UNITYSDK_OFFSET(0x4A3C10)
#define ANIMANCER_ANIMANCERSTATE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x4A3D00)
#define ANIMANCER_ANIMANCERSTATE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x4A3EA0)
#define ANIMANCER_ANIMANCERSTATE_GET_REMAININGDURATION_OFFSET UNITYSDK_OFFSET(0x4A4080)
#define ANIMANCER_ANIMANCERSTATE_SET_REMAININGDURATION_OFFSET UNITYSDK_OFFSET(0x4A4150)
#define ANIMANCER_ANIMANCERSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERSTATE_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x4A4290)
#define ANIMANCER_ANIMANCERSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x4A42A0)
#define ANIMANCER_ANIMANCERSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x490130)
#define ANIMANCER_ANIMANCERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4A4360)
#define ANIMANCER_ANIMANCERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERSTATE_SETNEWCLONEROOT_OFFSET UNITYSDK_OFFSET(0x490350)
#define ANIMANCER_ANIMANCERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.ANIMANCERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4A4380)
#define ANIMANCER_ANIMANCERSTATE_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4A4550)
#define ANIMANCER_ANIMANCERSTATE_ISPLAYINGANDNOTENDING_OFFSET UNITYSDK_OFFSET(0x4A4740)
#define ANIMANCER_ANIMANCERSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4A4A40)
#define ANIMANCER_ANIMANCERSTATE_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x4A4B30)
#define ANIMANCER_ANIMANCERSTATE_GETPATH_OFFSET UNITYSDK_OFFSET(0x4A5250)
#define ANIMANCER_ANIMANCERSTATE_APPENDPATH_OFFSET UNITYSDK_OFFSET(0x4A5320)
#define ANIMANCER_ANIMANCERSTATE_APPENDPORTANDTYPE_OFFSET UNITYSDK_OFFSET(0x4A54E0)
#define ANIMANCER_ANIMANCERSTATE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4A3C90)
#define ANIMANCER_ANIMANCERSTATE_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x48FCF0)
#define ANIMANCER_ANIMANCERSTATE_GET_HASEVENTS_OFFSET UNITYSDK_OFFSET(0x4A4530)
#define ANIMANCER_ANIMANCERSTATE_GET_AUTOMATICALLYCLEAREVENTS_OFFSET UNITYSDK_OFFSET(0x4A5820)
#define ANIMANCER_ANIMANCERSTATE_SET_AUTOMATICALLYCLEAREVENTS_OFFSET UNITYSDK_OFFSET(0x4A5870)
#define ANIMANCER_ANIMANCERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x48EDB0)
#define ANIMANCER_ANIMANCERSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4A58C0)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerState_TypeDefinitionIndex = 35120;

	class AnimancerState : public ::UnityEngine::AnimationPlayMode
	{
	public:
		::Animancer::AnimancerNode* _Parent; // 0x48
		::System::Object* _Key; // 0x50
		::System::Boolean _IsPlaying; // 0x58
		::System::Boolean _IsPlayingDirty; // 0x59
		::System::Double _Time; // 0x60
		::System::Boolean _MustSetTime; // 0x68
		::System::UInt64 _TimeFrameID; // 0x70
		EventDispatcher* _EventDispatcher; // 0x78
		::System::Boolean _AutomaticallyClearEvents_k__BackingField; // 0x0

		::System::Void SetRoot(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SETROOT_OFFSET))(arg, nullptr);
		}

		::Animancer::IPlayableWrapper* get_Parent()
		{
			return (return (::Animancer::IPlayableWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void SetParent(::Animancer::AnimancerNode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SETPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParentInternal(::Animancer::AnimancerNode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SETPARENTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerLayer* get_Layer()
		{
			return (return (::Animancer::AnimancerLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_LAYER_OFFSET))(nullptr);
		}

		::System::Int32 get_LayerIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_LAYERINDEX_OFFSET))(nullptr);
		}

		::System::Void set_LayerIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_LAYERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_KEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_Clip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_MainObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_MAINOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeMainObject(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_CHANGEMAINOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void OnSetIsPlaying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_ONSETISPLAYING_OFFSET))(nullptr);
		}

		::System::Void CreatePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_CREATEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStopped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_ISSTOPPED_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_PLAY_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_STOP_OFFSET))(nullptr);
		}

		::System::Void OnStartFade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_ONSTARTFADE_OFFSET))(nullptr);
		}

		::System::Single get_Time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_Time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_TimeD()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_TIMED_OFFSET))(nullptr);
		}

		::System::Void set_TimeD(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_TIMED_OFFSET))(arg, nullptr);
		}

		::System::Double get_RawTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_RAWTIME_OFFSET))(nullptr);
		}

		::System::Void set_RawTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_RAWTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_NormalizedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Double get_NormalizedTimeD()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDTIMED_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedTimeD(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDTIMED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveTime(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_MOVETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveTime(::System::Double arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Double, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_MOVETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CancelSetTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_CANCELSETTIME_OFFSET))(nullptr);
		}

		::System::Single get_NormalizedEndTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_NORMALIZEDENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedEndTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_NORMALIZEDENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_RemainingDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_REMAININGDURATION_OFFSET))(nullptr);
		}

		::System::Void set_RemainingDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_REMAININGDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void Update(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_DESTROY_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Clone()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_CLONE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNewCloneRoot(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SETNEWCLONEROOT_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.AnimancerState_.CopyFrom(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.ANIMANCERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlayingAndNotEnding()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_ISPLAYINGANDNOTENDING_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GETPATH_OFFSET))(nullptr);
		}

		::System::Void AppendPath(::System::Text::StringBuilder* arg, ::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_APPENDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AppendPortAndType(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_APPENDPORTANDTYPE_OFFSET))(arg, nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_Events(Sequence* arg)
		{
			((::System::Void(*)(Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_HASEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_AutomaticallyClearEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_GET_AUTOMATICALLYCLEAREVENTS_OFFSET))(nullptr);
		}

		::System::Void set_AutomaticallyClearEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_SET_AUTOMATICALLYCLEAREVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERSTATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

