#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.CONCURRENT.IPRODUCERCONSUMERCOLLECTION_T_.TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SNAPFOROBSERVATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETITEMWHENAVAILABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENQUEUESLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TRYDEQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TRYDEQUEUESLOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue`1_TypeDefinitionIndex = 25102;

	class ConcurrentQueue`1 : public Il2CppObject
	{
	public:
		::System::Int32 InitialSegmentLength; // 0x0
		::System::Int32 MaxSegmentLength; // 0x0
		::System::Object* _crossSegmentLock; // 0x0
		Il2CppObject* _tail; // 0x0
		Il2CppObject* _head; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Concurrent.IProducerConsumerCollection_T_.TryAdd(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SYSTEM.COLLECTIONS.CONCURRENT.IPRODUCERCONSUMERCOLLECTION_T_.TRYADD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetCount(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 GetCount(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETCOUNT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void SnapForObservation(Il2CppObject&* arg, int32_t&* arg, Il2CppObject&* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, int32_t&*, Il2CppObject&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_SNAPFOROBSERVATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetItemWhenAvailable(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_GETITEMWHENAVAILABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Enumerate(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENUMERATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Enqueue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void EnqueueSlow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_ENQUEUESLOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryDequeue(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TRYDEQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryDequeueSlow(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_TRYDEQUEUESLOW_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CONCURRENTQUEUE`1_CLEAR_OFFSET))(nullptr);
		}

	};
}

