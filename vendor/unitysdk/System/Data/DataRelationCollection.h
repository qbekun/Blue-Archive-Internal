#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATARELATIONCOLLECTION_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x973B6E0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x973B6F0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x973BA20)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x973BD00)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x973BE30)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x973BF60)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x973C020)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x973C2A0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_INTERNALINDEXOF_OFFSET UNITYSDK_OFFSET(0x973C2C0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_GETDATASET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x973BF80)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x973C4A0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x973C560)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REGISTERNAME_OFFSET UNITYSDK_OFFSET(0x973C620)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x973C810)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x973CA80)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x973CB00)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x973CD10)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x973CE50)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationCollection_TypeDefinitionIndex = 32211;

	class DataRelationCollection : public Il2CppObject
	{
	public:
		::System::Data::DataRelation* _inTransition; // 0x10
		::System::Int32 _defaultNameIndex; // 0x18
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate; // 0x20
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate; // 0x28
		::System::Int32 s_objectTypeCount; // 0x0
		::System::Int32 _objectID; // 0x30

		::System::Int32 get_ObjectID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_GET_OBJECTID_OFFSET))(nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataRelation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::String* str)
		{
			return (return (::System::Data::DataRelation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADDCORE_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::String* AssignName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ASSIGNNAME_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Int32 InternalIndexOf(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_INTERNALINDEXOF_OFFSET))(str, nullptr);
		}

		::System::Data::DataSet* GetDataSet()
		{
			return (return (::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_GETDATASET_OFFSET))(nullptr);
		}

		::System::String* MakeName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_MAKENAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REGISTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void Remove(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVECORE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_UNREGISTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

