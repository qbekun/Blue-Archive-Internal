#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARRAYSEGMENT`1_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.IREADONLYLIST_T_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_THROWINVALIDOPERATIONIFDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ARRAYSEGMENT`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ArraySegment`1_TypeDefinitionIndex = 23707;

	class ArraySegment`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Empty_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* _array; // 0x0
		::System::Int32 _offset; // 0x0
		::System::Int32 _count; // 0x0

		Il2CppObject* get_Empty()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Array()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GET_ARRAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Offset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_EQUALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IList_T_.get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_T_.set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.Generic.IList_T_.IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_T_.Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_T_.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ILIST_T_.REMOVEAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IReadOnlyList_T_.get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.IREADONLYLIST_T_.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_T_.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_T_.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_T_.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_T_.Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_T_.Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_T_.REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void ThrowInvalidOperationIfDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_THROWINVALIDOPERATIONIFDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYSEGMENT`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

