#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class FixedBytes4094; }

#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_LENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList4096Bytes`1_TypeDefinitionIndex = 37029;

	class FixedList4096Bytes`1 : public Il2CppObject
	{
	public:
		::System::UInt16 length; // 0x0
		::Unity::Collections::FixedBytes4094* buffer; // 0x0

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_LengthInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_LENGTHINBYTES_OFFSET))(nullptr);
		}

		::System::Object** get_Buffer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_BUFFER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_FIXEDLIST4096BYTES`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

