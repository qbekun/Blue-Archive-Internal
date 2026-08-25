#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_SETITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_ADDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CREATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int KeyedCollection`2_TypeDefinitionIndex = 25118;

	class KeyedCollection`2 : public ::MXUnderCover::Animation::UCStateMachine`1
	{
	public:
		::System::Int32 defaultThreshold; // 0x0
		Il2CppObject* comparer; // 0x0
		Il2CppObject* dict; // 0x0
		::System::Int32 keyCount; // 0x0
		::System::Int32 threshold; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Items()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_ITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Dictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GET_DICTIONARY_OFFSET))(nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CLEARITEMS_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeyForItem(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InsertItem(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_INSERTITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetItem(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_SETITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_CREATEDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void RemoveKey(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_KEYEDCOLLECTION`2_REMOVEKEY_OFFSET))(arg, nullptr);
		}

	};
}

