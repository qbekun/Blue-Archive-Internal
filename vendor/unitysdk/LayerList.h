#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Animations { class AnimationLayerMixerPlayable; }
namespace UnityEngine::Playables { class Playable&; }
namespace UnityEngine::Playables { class Playable; }
namespace Animancer { class AnimancerLayer; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class Vector3; }

#define LAYERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A0E90)
#define LAYERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x49E990)
#define LAYERLIST_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x4A0F80)
#define LAYERLIST_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x4A1010)
#define LAYERLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x4A1110)
#define LAYERLIST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x49E4C0)
#define LAYERLIST_SETMINCOUNT_OFFSET UNITYSDK_OFFSET(0x4A1230)
#define LAYERLIST_GET_DEFAULTCAPACITY_OFFSET UNITYSDK_OFFSET(0x4A1240)
#define LAYERLIST_SET_DEFAULTCAPACITY_OFFSET UNITYSDK_OFFSET(0x4A1290)
#define LAYERLIST_SETMINDEFAULTCAPACITY_OFFSET UNITYSDK_OFFSET(0x4A12E0)
#define LAYERLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x4A1410)
#define LAYERLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x4A1430)
#define LAYERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x4A1120)
#define LAYERLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x488910)
#define LAYERLIST_GETLAYER_OFFSET UNITYSDK_OFFSET(0x49E400)
#define LAYERLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A1520)
#define LAYERLIST_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERLAYER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A1570)
#define LAYERLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A1600)
#define LAYERLIST_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x49F9E0)
#define LAYERLIST_ISADDITIVE_OFFSET UNITYSDK_OFFSET(0x4A1690)
#define LAYERLIST_SETADDITIVE_OFFSET UNITYSDK_OFFSET(0x4A16F0)
#define LAYERLIST_SETMASK_OFFSET UNITYSDK_OFFSET(0x4A1770)
#define LAYERLIST_SETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x4A1880)
#define LAYERLIST_GET_AVERAGEVELOCITY_OFFSET UNITYSDK_OFFSET(0x4A1890)
#define LAYERLIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4A1950)

	inline static constexpr unsigned int LayerList_TypeDefinitionIndex = 35115;

	class LayerList : public Il2CppObject
	{
	public:
		::Animancer::AnimancerPlayable* Root; // 0x10
		::Il2CppArray<::System::Object*>* _Layers; // 0x18
		::UnityEngine::Animations::AnimationLayerMixerPlayable* LayerMixer; // 0x20
		::System::Int32 _Count; // 0x30
		::System::Int32 _DefaultCapacity_k__BackingField; // 0x0

		::System::Void .ctor(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Animancer::AnimancerPlayable* arg, ::UnityEngine::Playables::Playable&* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::UnityEngine::Playables::Playable&*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Activate(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::Animancer::AnimancerPlayable* arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_ACTIVATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetMinCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SETMINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DefaultCapacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GET_DEFAULTCAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_DefaultCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SET_DEFAULTCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetMinDefaultCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SETMINDEFAULTCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerLayer* Add()
		{
			return (return (::Animancer::AnimancerLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_ADD_OFFSET))(nullptr);
		}

		::Animancer::AnimancerLayer* get_Item(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerLayer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerLayer* GetLayer(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerLayer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GETLAYER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Animancer.AnimancerLayer_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERLAYER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAdditive(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_ISADDITIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAdditive(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SETADDITIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMask(::System::Int32 arg, ::UnityEngine::AvatarMask* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AvatarMask*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SETMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDebugName(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_SETDEBUGNAME_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Vector3* get_AverageVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_GET_AVERAGEVELOCITY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYERLIST_.CCTOR_OFFSET))(nullptr);
		}

	};

