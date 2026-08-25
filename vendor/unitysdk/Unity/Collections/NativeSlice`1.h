#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVESLICE`1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeSlice`1_TypeDefinitionIndex = 30908;

	class NativeSlice`1 : public Il2CppObject
	{
	public:
		::System::Object** m_Buffer; // 0x0
		::System::Int32 m_Stride; // 0x0
		::System::Int32 m_Length; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Stride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_GET_STRIDE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_GET_LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Inequality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVESLICE`1_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

