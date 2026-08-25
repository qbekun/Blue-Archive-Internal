#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_GET_ISADDINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_TRYADDWITHNOTIMEVALIDATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int BlockingCollection`1_TypeDefinitionIndex = 29580;

	class BlockingCollection`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _collection; // 0x0
		::System::Int32 _boundedCapacity; // 0x0
		::System::Threading::SemaphoreSlim* _freeNodes; // 0x0
		::System::Threading::SemaphoreSlim* _occupiedNodes; // 0x0
		::System::Boolean _isDisposed; // 0x0
		::System::Threading::CancellationTokenSource* _consumersCancellationTokenSource; // 0x0
		::System::Threading::CancellationTokenSource* _producersCancellationTokenSource; // 0x0
		::System::Int32 _currentAdders; // 0x0

		::System::Boolean get_IsAddingCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_GET_ISADDINGCOMPLETED_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAddWithNoTimeValidation(Il2CppObject* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_TRYADDWITHNOTIMEVALIDATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_BLOCKINGCOLLECTION`1_CHECKDISPOSED_OFFSET))(nullptr);
		}

	};
}

