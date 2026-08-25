#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine::Playables { class Playable&; }
namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class ManualMixerState; }
namespace Animancer { class ClipState; }
namespace Animancer { class ITransition; }
namespace UnityEngine::Animations { class AnimationScriptPlayable; }
namespace Animancer { class IPlayableWrapper; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimatorControllerParameterType; }

#define ANIMANCER_MANUALMIXERSTATE_GET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x4AF430)
#define ANIMANCER_MANUALMIXERSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x4AF440)
#define ANIMANCER_MANUALMIXERSTATE_GET_CHILDSTATES_OFFSET UNITYSDK_OFFSET(0x4AF450)
#define ANIMANCER_MANUALMIXERSTATE_SET_CHILDSTATES_OFFSET UNITYSDK_OFFSET(0x4AF460)
#define ANIMANCER_MANUALMIXERSTATE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x4AF470)
#define ANIMANCER_MANUALMIXERSTATE_GET_CHILDCAPACITY_OFFSET UNITYSDK_OFFSET(0x4AF480)
#define ANIMANCER_MANUALMIXERSTATE_SET_CHILDCAPACITY_OFFSET UNITYSDK_OFFSET(0x4AF4A0)
#define ANIMANCER_MANUALMIXERSTATE_ONCHILDCAPACITYCHANGED_OFFSET UNITYSDK_OFFSET(0x4AF640)
#define ANIMANCER_MANUALMIXERSTATE_GET_DEFAULTCHILDCAPACITY_OFFSET UNITYSDK_OFFSET(0x4AF650)
#define ANIMANCER_MANUALMIXERSTATE_SET_DEFAULTCHILDCAPACITY_OFFSET UNITYSDK_OFFSET(0x4AF6A0)
#define ANIMANCER_MANUALMIXERSTATE_ENSUREREMAININGCHILDCAPACITY_OFFSET UNITYSDK_OFFSET(0x4AF6F0)
#define ANIMANCER_MANUALMIXERSTATE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x4AF820)
#define ANIMANCER_MANUALMIXERSTATE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4AF850)
#define ANIMANCER_MANUALMIXERSTATE_ONSETISPLAYING_OFFSET UNITYSDK_OFFSET(0x4AF8B0)
#define ANIMANCER_MANUALMIXERSTATE_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x4AF910)
#define ANIMANCER_MANUALMIXERSTATE_GET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x4AF990)
#define ANIMANCER_MANUALMIXERSTATE_SET_RAWTIME_OFFSET UNITYSDK_OFFSET(0x4AFEE0)
#define ANIMANCER_MANUALMIXERSTATE_MOVETIME_OFFSET UNITYSDK_OFFSET(0x4AFFC0)
#define ANIMANCER_MANUALMIXERSTATE_GETSYNCHRONIZEDTIMEDETAILS_OFFSET UNITYSDK_OFFSET(0x4AFBC0)
#define ANIMANCER_MANUALMIXERSTATE_GETTIMEDETAILS_OFFSET UNITYSDK_OFFSET(0x4AFDB0)
#define ANIMANCER_MANUALMIXERSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x4B0040)
#define ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4B02D0)
#define ANIMANCER_MANUALMIXERSTATE_ONADDCHILD_OFFSET UNITYSDK_OFFSET(0x4B03B0)
#define ANIMANCER_MANUALMIXERSTATE_ONREMOVECHILD_OFFSET UNITYSDK_OFFSET(0x4B0630)
#define ANIMANCER_MANUALMIXERSTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x4B0970)
#define ANIMANCER_MANUALMIXERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4B0A90)
#define ANIMANCER_MANUALMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.MANUALMIXERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4B0C40)
#define ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET UNITYSDK_OFFSET(0x4B1090)
#define ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET UNITYSDK_OFFSET(0x4B10E0)
#define ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET UNITYSDK_OFFSET(0x4B11B0)
#define ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET UNITYSDK_OFFSET(0x4B1210)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B14A0)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B15F0)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B1600)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B1780)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B1790)
#define ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x4B18E0)
#define ANIMANCER_MANUALMIXERSTATE_REMOVE_OFFSET UNITYSDK_OFFSET(0x4B18F0)
#define ANIMANCER_MANUALMIXERSTATE_REMOVE_OFFSET UNITYSDK_OFFSET(0x4B1960)
#define ANIMANCER_MANUALMIXERSTATE_SET_OFFSET UNITYSDK_OFFSET(0x4B19B0)
#define ANIMANCER_MANUALMIXERSTATE_SET_OFFSET UNITYSDK_OFFSET(0x4B1BF0)
#define ANIMANCER_MANUALMIXERSTATE_SET_OFFSET UNITYSDK_OFFSET(0x4B1CB0)
#define ANIMANCER_MANUALMIXERSTATE_SET_OFFSET UNITYSDK_OFFSET(0x4B1CF0)
#define ANIMANCER_MANUALMIXERSTATE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x4B1F70)
#define ANIMANCER_MANUALMIXERSTATE_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B0A00)
#define ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERSTATE_GETJOBDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERSTATE_SETJOBDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MANUALMIXERSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x4B1FD0)
#define ANIMANCER_MANUALMIXERSTATE_GET_WEIGHTSAREDIRTY_OFFSET UNITYSDK_OFFSET(0x4B24D0)
#define ANIMANCER_MANUALMIXERSTATE_SET_WEIGHTSAREDIRTY_OFFSET UNITYSDK_OFFSET(0x4B24E0)
#define ANIMANCER_MANUALMIXERSTATE_RECALCULATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4AFB90)
#define ANIMANCER_MANUALMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4B24F0)
#define ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZENEWCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2500)
#define ANIMANCER_MANUALMIXERSTATE_SET_SYNCHRONIZENEWCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2550)
#define ANIMANCER_MANUALMIXERSTATE_GET_MINIMUMSYNCHRONIZECHILDRENWEIGHT_OFFSET UNITYSDK_OFFSET(0x4B25A0)
#define ANIMANCER_MANUALMIXERSTATE_SET_MINIMUMSYNCHRONIZECHILDRENWEIGHT_OFFSET UNITYSDK_OFFSET(0x4B25F0)
#define ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZEDCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2650)
#define ANIMANCER_MANUALMIXERSTATE_SET_SYNCHRONIZEDCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B27A0)
#define ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZEDCHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x4B2750)
#define ANIMANCER_MANUALMIXERSTATE_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x4B1020)
#define ANIMANCER_MANUALMIXERSTATE_SYNCHRONIZE_OFFSET UNITYSDK_OFFSET(0x4B05F0)
#define ANIMANCER_MANUALMIXERSTATE_SYNCHRONIZEDIRECT_OFFSET UNITYSDK_OFFSET(0x4B29E0)
#define ANIMANCER_MANUALMIXERSTATE_DONTSYNCHRONIZE_OFFSET UNITYSDK_OFFSET(0x4B08A0)
#define ANIMANCER_MANUALMIXERSTATE_DONTSYNCHRONIZECHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2BF0)
#define ANIMANCER_MANUALMIXERSTATE_INITIALIZESYNCHRONIZEDCHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2F80)
#define ANIMANCER_MANUALMIXERSTATE_GETPARENTMIXER_OFFSET UNITYSDK_OFFSET(0x4B28B0)
#define ANIMANCER_MANUALMIXERSTATE_GETPARENTMIXER_OFFSET UNITYSDK_OFFSET(0x4B3050)
#define ANIMANCER_MANUALMIXERSTATE_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x4B2EC0)
#define ANIMANCER_MANUALMIXERSTATE_APPLYSYNCHRONIZECHILDREN_OFFSET UNITYSDK_OFFSET(0x4B2060)
#define ANIMANCER_MANUALMIXERSTATE_CALCULATEREALEFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x4B3170)
#define ANIMANCER_MANUALMIXERSTATE_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4B3320)
#define ANIMANCER_MANUALMIXERSTATE_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x4B3330)
#define ANIMANCER_MANUALMIXERSTATE_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4B3340)
#define ANIMANCER_MANUALMIXERSTATE_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x4B3350)
#define ANIMANCER_MANUALMIXERSTATE_CALCULATETOTALWEIGHT_OFFSET UNITYSDK_OFFSET(0x4B0280)
#define ANIMANCER_MANUALMIXERSTATE_SETCHILDRENTIME_OFFSET UNITYSDK_OFFSET(0x4B3360)
#define ANIMANCER_MANUALMIXERSTATE_DISABLEREMAININGSTATES_OFFSET UNITYSDK_OFFSET(0x4AF360)
#define ANIMANCER_MANUALMIXERSTATE_NORMALIZEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4AD4D0)
#define ANIMANCER_MANUALMIXERSTATE_GETDISPLAYKEY_OFFSET UNITYSDK_OFFSET(0x4B3400)
#define ANIMANCER_MANUALMIXERSTATE_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4B3470)
#define ANIMANCER_MANUALMIXERSTATE_NORMALIZEDURATIONS_OFFSET UNITYSDK_OFFSET(0x4B3550)
#define ANIMANCER_MANUALMIXERSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4B3620)
#define ANIMANCER_MANUALMIXERSTATE_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x4B3BD0)
#define ANIMANCER_MANUALMIXERSTATE_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4B3D70)
#define ANIMANCER_MANUALMIXERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4B3D90)
#define ANIMANCER_MANUALMIXERSTATE_GETPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x4B3DA0)
#define ANIMANCER_MANUALMIXERSTATE_GETPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x4B3DF0)
#define ANIMANCER_MANUALMIXERSTATE_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4B3E40)
#define ANIMANCER_MANUALMIXERSTATE_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4B3E90)
#define ANIMANCER_MANUALMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B0B60)
#define ANIMANCER_MANUALMIXERSTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4B3EE0)

namespace Animancer
{
	inline static constexpr unsigned int ManualMixerState_TypeDefinitionIndex = 35164;

	class ManualMixerState : public ::UnityEngine::AvatarIKHint
	{
	public:
		::Il2CppArray<::System::Object*>* _ChildStates_k__BackingField; // 0x80
		::System::Int32 _ChildCount; // 0x88
		::System::Int32 _DefaultChildCapacity_k__BackingField; // 0x0
		::System::Boolean _WeightsAreDirty_k__BackingField; // 0x8C
		::System::Boolean _SynchronizeNewChildren_k__BackingField; // 0x4
		::System::Single _MinimumSynchronizeChildrenWeight_k__BackingField; // 0x8
		Il2CppObject* _SynchronizedChildren; // 0x90
		::System::Boolean _ApplyAnimatorIK; // 0x98
		::System::Boolean _ApplyFootIK; // 0x99

		::System::Boolean get_KeepChildrenConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_KEEPCHILDRENCONNECTED_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* get_Clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_CLIP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChildStates()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_CHILDSTATES_OFFSET))(nullptr);
		}

		::System::Void set_ChildStates(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_CHILDSTATES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_CHILDCAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_ChildCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_CHILDCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnChildCapacityChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ONCHILDCAPACITYCHANGED_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultChildCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_DEFAULTCHILDCAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_DefaultChildCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_DEFAULTCHILDCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureRemainingChildCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ENSUREREMAININGCHILDCAPACITY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETCHILD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void OnSetIsPlaying()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ONSETISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Double get_RawTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_RAWTIME_OFFSET))(nullptr);
		}

		::System::Void set_RawTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_RAWTIME_OFFSET))(arg, nullptr);
		}

		::System::Void MoveTime(::System::Double arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Double, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_MOVETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetSynchronizedTimeDetails(float&* arg, float&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETSYNCHRONIZEDTIMEDETAILS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetTimeDetails(float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETTIMEDETAILS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAddChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ONADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoveChild(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ONREMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_DESTROY_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.ManualMixerState_.CopyFrom(::Animancer::ManualMixerState* arg)
		{
			((::System::Void(*)(::Animancer::ManualMixerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.MANUALMIXERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET))(arg, nullptr);
		}

		::Animancer::ClipState* Add(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::ClipState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Add(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Add(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_REMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::Animancer::AnimancerState* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_REMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::Animancer::AnimancerState* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::Animancer::AnimancerState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::ClipState* Set(::System::Int32 arg, ::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::ClipState*(*)(::System::Int32, ::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Set(::System::Int32 arg, ::Animancer::ITransition* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::Animancer::ITransition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Set(::System::Int32 arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Int32, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::Animancer::AnimancerState* arg)
		{
			return (return (::System::Int32(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_DESTROYCHILDREN_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::AnimationScriptPlayable* CreatePlayable(::Animancer::AnimancerPlayable* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Animations::AnimationScriptPlayable*(*)(::Animancer::AnimancerPlayable*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreatePlayable(::UnityEngine::Playables::Playable&* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable&*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CREATEPLAYABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetJobData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETJOBDATA_OFFSET))(nullptr);
		}

		::System::Void SetJobData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SETJOBDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Update(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WeightsAreDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_WEIGHTSAREDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_WeightsAreDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_WEIGHTSAREDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean RecalculateWeights()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_RECALCULATEWEIGHTS_OFFSET))(nullptr);
		}

		::System::Void ForceRecalculateWeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET))(nullptr);
		}

		::System::Boolean get_SynchronizeNewChildren()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZENEWCHILDREN_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizeNewChildren(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_SYNCHRONIZENEWCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinimumSynchronizeChildrenWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_MINIMUMSYNCHRONIZECHILDRENWEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_MinimumSynchronizeChildrenWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_MINIMUMSYNCHRONIZECHILDRENWEIGHT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SynchronizedChildren()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZEDCHILDREN_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizedChildren(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_SYNCHRONIZEDCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SynchronizedChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_SYNCHRONIZEDCHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsSynchronized(::Animancer::AnimancerState* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ISSYNCHRONIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Synchronize(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SYNCHRONIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SynchronizeDirect(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SYNCHRONIZEDIRECT_OFFSET))(arg, nullptr);
		}

		::System::Void DontSynchronize(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_DONTSYNCHRONIZE_OFFSET))(arg, nullptr);
		}

		::System::Void DontSynchronizeChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_DONTSYNCHRONIZECHILDREN_OFFSET))(nullptr);
		}

		::System::Void InitializeSynchronizedChildren(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_INITIALIZESYNCHRONIZEDCHILDREN_OFFSET))(arg, nullptr);
		}

		::Animancer::ManualMixerState* GetParentMixer()
		{
			return (return (::Animancer::ManualMixerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETPARENTMIXER_OFFSET))(nullptr);
		}

		::Animancer::ManualMixerState* GetParentMixer(::Animancer::IPlayableWrapper* arg)
		{
			return (return (::Animancer::ManualMixerState*(*)(::Animancer::IPlayableWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETPARENTMIXER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChildOf(::Animancer::IPlayableWrapper* arg, ::Animancer::IPlayableWrapper* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::IPlayableWrapper*, ::Animancer::IPlayableWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_ISCHILDOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplySynchronizeChildren(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_APPLYSYNCHRONIZECHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateRealEffectiveSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CALCULATEREALEFFECTIVESPEED_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateTotalWeight(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_CALCULATETOTALWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetChildrenTime(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SETCHILDRENTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisableRemainingStates(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_DISABLEREMAININGSTATES_OFFSET))(arg, nullptr);
		}

		::System::Void NormalizeWeights(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_NORMALIZEWEIGHTS_OFFSET))(arg, nullptr);
		}

		::System::String* GetDisplayKey(::Animancer::AnimancerState* arg)
		{
			return (return (::System::String*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETDISPLAYKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void NormalizeDurations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_NORMALIZEDURATIONS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetParameterName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETPARAMETERNAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimatorControllerParameterType* GetParameterType(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETPARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetParameterValue(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_GETPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetParameterValue(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_SETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERSTATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

