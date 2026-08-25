#pragma once
#include "unitysdk.h"

#define DATATABLERELATIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x973CED0)
#define DATATABLERELATIONCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x973CFE0)
#define DATATABLERELATIONCOLLECTION_ENSUREDATASET_OFFSET UNITYSDK_OFFSET(0x973CFF0)
#define DATATABLERELATIONCOLLECTION_GETDATASET_OFFSET UNITYSDK_OFFSET(0x973D040)
#define DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x973D090)
#define DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x973D190)
#define DATATABLERELATIONCOLLECTION_ADD_RELATIONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x973D280)
#define DATATABLERELATIONCOLLECTION_REMOVE_RELATIONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x973D320)
#define DATATABLERELATIONCOLLECTION_ADDCACHE_OFFSET UNITYSDK_OFFSET(0x973D3C0)
#define DATATABLERELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x973D410)
#define DATATABLERELATIONCOLLECTION_REMOVECACHE_OFFSET UNITYSDK_OFFSET(0x973D510)
#define DATATABLERELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x973D5E0)

	inline static constexpr unsigned int DataTableRelationCollection_TypeDefinitionIndex = 32209;

	class DataTableRelationCollection : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x38
		::System::Collections::ArrayList* _relations; // 0x40
		::System::Boolean _fParentCollection; // 0x48
		::System::ComponentModel::CollectionChangeEventHandler* RelationPropertyChanged; // 0x50

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ArrayList* get_List()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_GET_LIST_OFFSET))(nullptr);
		}

		::System::Void EnsureDataSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_ENSUREDATASET_OFFSET))(nullptr);
		}

		::System::Data::DataSet* GetDataSet()
		{
			return (return (::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_GETDATASET_OFFSET))(nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataRelation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRelation* get_Item(::System::String* str)
		{
			return (return (::System::Data::DataRelation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void add_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_ADD_RELATIONPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RelationPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_REMOVE_RELATIONPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void AddCache(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_ADDCACHE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_ADDCORE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCache(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_REMOVECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* arg)
		{
			((::System::Void(*)(::System::Data::DataRelation*, ::PVOID))((::PBYTE)hIl2Cpp + DATATABLERELATIONCOLLECTION_REMOVECORE_OFFSET))(arg, nullptr);
		}

	};

