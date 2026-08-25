#pragma once
#include "../unitysdk.h"

#define ANIMANCER_FASTENUMERATOR`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_INSERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_ASSERTINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_FASTENUMERATOR`1_ASSERTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int FastEnumerator`1_TypeDefinitionIndex = 35086;

	class FastEnumerator`1 : public Il2CppObject
	{
	public:
		Il2CppObject* List; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _Index; // 0x0

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SET_INDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean MovePrevious()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_MOVEPREVIOUS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_RESET_OFFSET))(nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_INDEXOF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssertIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_ASSERTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void AssertCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTENUMERATOR`1_ASSERTCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

