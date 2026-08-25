#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9744580)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x97446F0)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x9744700)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9744710)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9731050)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9731140)
#define SYSTEM_DATA_DATATABLECOLLECTION_GETTABLE_OFFSET UNITYSDK_OFFSET(0x9744CF0)
#define SYSTEM_DATA_DATATABLECOLLECTION_GETTABLESMART_OFFSET UNITYSDK_OFFSET(0x9744E20)
#define SYSTEM_DATA_DATATABLECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9744F70)
#define SYSTEM_DATA_DATATABLECOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x97455A0)
#define SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x97456D0)
#define SYSTEM_DATA_DATATABLECOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x97454B0)
#define SYSTEM_DATA_DATATABLECOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x9745800)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEADD_OFFSET UNITYSDK_OFFSET(0x9745300)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEGROUPSWITCH_OFFSET UNITYSDK_OFFSET(0x9745B90)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x9745D80)
#define SYSTEM_DATA_DATATABLECOLLECTION_CANREMOVE_OFFSET UNITYSDK_OFFSET(0x9745E00)
#define SYSTEM_DATA_DATATABLECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x97464B0)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x97458E0)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9746800)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x97469A0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9746AD0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9746BC0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9746BE0)
#define SYSTEM_DATA_DATATABLECOLLECTION_REPLACEFROMINFERENCE_OFFSET UNITYSDK_OFFSET(0x9746C50)
#define SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET UNITYSDK_OFFSET(0x9744850)
#define SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET UNITYSDK_OFFSET(0x9744AF0)
#define SYSTEM_DATA_DATATABLECOLLECTION_FINISHINITCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9746CB0)
#define SYSTEM_DATA_DATATABLECOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x9745840)
#define SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x97454E0)
#define SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x9745240)
#define SYSTEM_DATA_DATATABLECOLLECTION_REGISTERNAME_OFFSET UNITYSDK_OFFSET(0x9745900)
#define SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9746D30)
#define SYSTEM_DATA_DATATABLECOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x9746380)

namespace System::Data
{
	inline static constexpr unsigned int DataTableCollection_TypeDefinitionIndex = 32229;

	class DataTableCollection : public Il2CppObject
	{
	public:
		::System::Data::DataSet* _dataSet; // 0x10
		::System::Collections::ArrayList* _list; // 0x18
		::System::Int32 _defaultNameIndex; // 0x20
		::Il2CppArray<::System::Object*>* _delayedAddRangeTables; // 0x28
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate; // 0x30
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate; // 0x38
		::System::Int32 s_objectTypeCount; // 0x0
		::System::Int32 _objectID; // 0x40

		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_List()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_LIST_OFFSET))(nullptr);
		}

		::System::Int32 get_ObjectID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_OBJECTID_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataTable*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Data::DataTable* get_Item(::System::String* str)
		{
			return (return (::System::Data::DataTable*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Data::DataTable* get_Item(::System::String* str, ::System::String* str)
		{
			return (return (::System::Data::DataTable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET))(str, str, nullptr);
		}

		::System::Data::DataTable* GetTable(::System::String* str, ::System::String* str)
		{
			return (return (::System::Data::DataTable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GETTABLE_OFFSET))(str, str, nullptr);
		}

		::System::Data::DataTable* GetTableSmart(::System::String* str, ::System::String* str)
		{
			return (return (::System::Data::DataTable*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GETTABLESMART_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ArrayAdd(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ARRAYADD_OFFSET))(arg, nullptr);
		}

		::System::String* AssignName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ASSIGNNAME_OFFSET))(nullptr);
		}

		::System::Void BaseAdd(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEADD_OFFSET))(arg, nullptr);
		}

		::System::Void BaseGroupSwitch(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEGROUPSWITCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BaseRemove(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanRemove(::System::Data::DataTable* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataTable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CANREMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Boolean Contains(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean Contains(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Data::DataTable* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET))(str, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void ReplaceFromInference(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REPLACEFROMINFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InternalIndexOf(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET))(str, nullptr);
		}

		::System::Int32 InternalIndexOf(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET))(str, str, nullptr);
		}

		::System::Void FinishInitCollection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_FINISHINITCOLLECTION_OFFSET))(nullptr);
		}

		::System::String* MakeName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_MAKENAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterName(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REGISTERNAME_OFFSET))(str, str, nullptr);
		}

		::System::Void Remove(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_UNREGISTERNAME_OFFSET))(str, nullptr);
		}

	};
}

