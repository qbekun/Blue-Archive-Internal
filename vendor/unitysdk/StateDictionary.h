#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class ClipState; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class IHasKey; }
namespace Animancer { class AnimancerState&; }
namespace Animancer { class ITransition; }
namespace UnityEngine { class IAnimationClipSource; }
namespace Animancer { class IAnimationClipCollection; }

#define STATEDICTIONARY_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x4A1990)
#define STATEDICTIONARY_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x4A19E0)
#define STATEDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x49EAB0)
#define STATEDICTIONARY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x4A1A50)
#define STATEDICTIONARY_CREATE_OFFSET UNITYSDK_OFFSET(0x4A1AA0)
#define STATEDICTIONARY_CREATE_OFFSET UNITYSDK_OFFSET(0x4A1B70)
#define STATEDICTIONARY_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x4A1C40)
#define STATEDICTIONARY_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x4A1C70)
#define STATEDICTIONARY_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x4A1CB0)
#define STATEDICTIONARY_CREATEIFNEW_OFFSET UNITYSDK_OFFSET(0x4A1D10)
#define STATEDICTIONARY_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4A1DC0)
#define STATEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4A1E20)
#define STATEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4A1F20)
#define STATEDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4A1FE0)
#define STATEDICTIONARY_TRYGET_OFFSET UNITYSDK_OFFSET(0x4A2030)
#define STATEDICTIONARY_TRYGET_OFFSET UNITYSDK_OFFSET(0x4A2190)
#define STATEDICTIONARY_TRYGET_OFFSET UNITYSDK_OFFSET(0x48B290)
#define STATEDICTIONARY_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x489060)
#define STATEDICTIONARY_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x49F760)
#define STATEDICTIONARY_GETORCREATE_OFFSET UNITYSDK_OFFSET(0x4A2290)
#define STATEDICTIONARY_GETCLIPMISMATCHERROR_OFFSET UNITYSDK_OFFSET(0x499690)
#define STATEDICTIONARY_REGISTER_OFFSET UNITYSDK_OFFSET(0x49A060)
#define STATEDICTIONARY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x4A2400)
#define STATEDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A2460)
#define STATEDICTIONARY_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERSTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A24D0)
#define STATEDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4A25A0)
#define STATEDICTIONARY_GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4A2670)
#define STATEDICTIONARY_DESTROY_OFFSET UNITYSDK_OFFSET(0x4A2800)
#define STATEDICTIONARY_DESTROY_OFFSET UNITYSDK_OFFSET(0x4A29B0)
#define STATEDICTIONARY_DESTROY_OFFSET UNITYSDK_OFFSET(0x4A2910)
#define STATEDICTIONARY_DESTROYALL_OFFSET UNITYSDK_OFFSET(0x4A2A50)
#define STATEDICTIONARY_DESTROYALL_OFFSET UNITYSDK_OFFSET(0x4A2B80)
#define STATEDICTIONARY_DESTROYALL_OFFSET UNITYSDK_OFFSET(0x4A2E50)
#define STATEDICTIONARY_DESTROYALL_OFFSET UNITYSDK_OFFSET(0x4A2F40)
#define STATEDICTIONARY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4A3030)

	inline static constexpr unsigned int StateDictionary_TypeDefinitionIndex = 35116;

	class StateDictionary : public Il2CppObject
	{
	public:
		::Animancer::AnimancerPlayable* Root; // 0x10
		Il2CppObject* _EqualityComparer_k__BackingField; // 0x0
		Il2CppObject* States; // 0x18

		Il2CppObject* get_EqualityComparer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_EQUALITYCOMPARER_OFFSET))(nullptr);
		}

		::System::Void set_EqualityComparer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_SET_EQUALITYCOMPARER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_COUNT_OFFSET))(nullptr);
		}

		::Animancer::ClipState* Create(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::ClipState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATE_OFFSET))(arg, nullptr);
		}

		::Animancer::ClipState* Create(::System::Object* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::ClipState*(*)(::System::Object*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATEIFNEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATEIFNEW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATEIFNEW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateIfNew(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_CREATEIFNEW_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_Current()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_CURRENT_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* get_Item(::UnityEngine::AnimationClip* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_Item(::Animancer::IHasKey* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_Item(::System::Object* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGet(::UnityEngine::AnimationClip* arg, ::Animancer::AnimancerState&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::Animancer::AnimancerState&*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGet(::Animancer::IHasKey* arg, ::Animancer::AnimancerState&* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::IHasKey*, ::Animancer::AnimancerState&*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGet(::System::Object* arg, ::Animancer::AnimancerState&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Animancer::AnimancerState&*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_TRYGET_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreate(::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GETORCREATE_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreate(::Animancer::ITransition* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GETORCREATE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* GetOrCreate(::System::Object* arg, ::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, ::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GETORCREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetClipMismatchError(::System::Object* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GETCLIPMISMATCHERROR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Register(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_UNREGISTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Animancer.AnimancerState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ANIMANCER.ANIMANCERSTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Destroy(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Destroy(::Animancer::IHasKey* arg)
		{
			return (return (::System::Boolean(*)(::Animancer::IHasKey*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Destroy(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROYALL_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROYALL_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAll(::UnityEngine::IAnimationClipSource* arg)
		{
			((::System::Void(*)(::UnityEngine::IAnimationClipSource*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROYALL_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAll(::Animancer::IAnimationClipCollection* arg)
		{
			((::System::Void(*)(::Animancer::IAnimationClipCollection*, ::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_DESTROYALL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEDICTIONARY_.CCTOR_OFFSET))(nullptr);
		}

	};

