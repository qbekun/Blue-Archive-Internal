#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class WeightedTransform; }
namespace UnityEngine::Animations::Rigging { class WeightedTransformArray&; }

#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9E2B3A0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x9E2B3B0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_OFFSET UNITYSDK_OFFSET(0x9E2B6C0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E23910)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9E2B970)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x9E2BB30)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E2BF10)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x9E2BF70)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9E2C070)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E2C080)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E2C270)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x9E2C320)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_INSERT_OFFSET UNITYSDK_OFFSET(0x9E2BBE0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x9E2C520)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2C7C0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CHECKOUTOFRANGEINDEX_OFFSET UNITYSDK_OFFSET(0x9E2B860)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9E2C800)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E2CAC0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x9E2C3D0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SET_OFFSET UNITYSDK_OFFSET(0x9E2B770)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E23D50)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E2CB90)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E23270)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x9E2CC40)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x9E2CD70)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9E24150)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9E2CE20)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x9E2D020)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x9E2D030)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9E2D0E0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E2D0F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9E2D220)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int WeightedTransformArray_TypeDefinitionIndex = 37186;

	class WeightedTransformArray : public Il2CppObject
	{
	public:
		::System::Int32 k_MaxLength; // 0x0
		::System::Int32 m_Length; // 0x10
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item0; // 0x18
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item1; // 0x28
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item2; // 0x38
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item3; // 0x48
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item4; // 0x58
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item5; // 0x68
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item6; // 0x78
		::UnityEngine::Animations::Rigging::WeightedTransform* m_Item7; // 0x88

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_REMOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::WeightedTransform* Get(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::Rigging::WeightedTransform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetWeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CheckOutOfRangeIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_CHECKOUTOFRANGEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Add(::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SET_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::WeightedTransform* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::Rigging::WeightedTransform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SETWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate(::UnityEngine::Animations::Rigging::WeightedTransformArray&* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::WeightedTransformArray&*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_ONVALIDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORMARRAY_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

	};
}

