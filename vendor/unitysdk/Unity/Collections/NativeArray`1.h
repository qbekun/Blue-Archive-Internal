#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Allocator; }
namespace Unity::Collections { class NativeArrayOptions; }
namespace Unity::Jobs { class JobHandle; }

#define UNITY_COLLECTIONS_NATIVEARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_INTERNALREINTERPRET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_REINTERPRET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_REINTERPRET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVEARRAY`1_GETSUBARRAY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArray`1_TypeDefinitionIndex = 30902;

	class NativeArray`1 : public Il2CppObject
	{
	public:
		::System::Object** m_Buffer; // 0x0
		::System::Int32 m_Length; // 0x0
		::Unity::Collections::Allocator* m_AllocatorLabel; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::Unity::Collections::Allocator* arg, ::Unity::Collections::NativeArrayOptions* arg)
		{
			((::System::Void(*)(::System::Int32, ::Unity::Collections::Allocator*, ::Unity::Collections::NativeArrayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Unity::Collections::Allocator* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Unity::Collections::Allocator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Allocate(::System::Int32 arg, ::Unity::Collections::Allocator* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Int32, ::Unity::Collections::Allocator*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GET_LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GET_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_DISPOSE_OFFSET))(nullptr);
		}

		::Unity::Jobs::JobHandle* Dispose(::Unity::Jobs::JobHandle* arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPYTO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_TOARRAY_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Copy(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Copy(Il2CppObject* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_COPY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* InternalReinterpret(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_INTERNALREINTERPRET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Reinterpret()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_REINTERPRET_OFFSET))(nullptr);
		}

		Il2CppObject* Reinterpret(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_REINTERPRET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSubArray(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEARRAY`1_GETSUBARRAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

