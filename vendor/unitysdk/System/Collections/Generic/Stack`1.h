#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_PEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_TRYPEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_TRYPOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_PUSHWITHRESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_STACK`1_THROWFOREMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Stack`1_TypeDefinitionIndex = 25163;

	class Stack`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Int32 DefaultCapacity; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* Peek()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_PEEK_OFFSET))(nullptr);
		}

		::System::Boolean TryPeek(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_TRYPEEK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Pop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_POP_OFFSET))(nullptr);
		}

		::System::Boolean TryPop(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_TRYPOP_OFFSET))(arg, nullptr);
		}

		::System::Void Push(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void PushWithResize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_PUSHWITHRESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowForEmptyStack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_STACK`1_THROWFOREMPTYSTACK_OFFSET))(nullptr);
		}

	};
}

