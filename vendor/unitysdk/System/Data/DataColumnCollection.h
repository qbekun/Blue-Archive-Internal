#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATACOLUMNCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x97327F0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x9732980)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGICHANGETRACKING_OFFSET UNITYSDK_OFFSET(0x9732990)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGICHANGETRACKINGCOUNT_OFFSET UNITYSDK_OFFSET(0x97329A0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGIREVERTIBLECHANGETRACKINGCOUNT_OFFSET UNITYSDK_OFFSET(0x97329B0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x97329C0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9730F10)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9732CC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9732D60)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDAT_OFFSET UNITYSDK_OFFSET(0x9732D70)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x97335F0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9733670)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9733710)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x97337B0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9733850)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x97334C0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x9733450)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYREMOVE_OFFSET UNITYSDK_OFFSET(0x9733940)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x9733BC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEADD_OFFSET UNITYSDK_OFFSET(0x9733090)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEGROUPSWITCH_OFFSET UNITYSDK_OFFSET(0x9734090)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x97342A0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREMOVE_OFFSET UNITYSDK_OFFSET(0x9734400)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CHECKICHANGETRACKING_OFFSET UNITYSDK_OFFSET(0x97338F0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x9734DF0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9735170)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9735200)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x97352A0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOFCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x9732B00)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_FINISHINITCOLLECTION_OFFSET UNITYSDK_OFFSET(0x97353B0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x9733C40)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9733550)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x9733070)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9735480)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REGISTERCOLUMNNAME_OFFSET UNITYSDK_OFFSET(0x9733CE0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x97354D0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9735520)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x9733F60)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDCOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET UNITYSDK_OFFSET(0x9734D20)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVECOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET UNITYSDK_OFFSET(0x9733A70)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnCollection_TypeDefinitionIndex = 32203;

	class DataColumnCollection : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Collections::ArrayList* _list; // 0x18
		::System::Int32 _defaultNameIndex; // 0x20
		::Il2CppArray<::System::Object*>* _delayedAddRangeColumns; // 0x28
		Il2CppObject* _columnFromName; // 0x30
		::System::Boolean _fInClear; // 0x38
		::Il2CppArray<::System::Object*>* _columnsImplementingIChangeTracking; // 0x40
		::System::Int32 _nColumnsImplementingIChangeTracking; // 0x48
		::System::Int32 _nColumnsImplementingIRevertibleChangeTracking; // 0x4C
		::System::ComponentModel::CollectionChangeEventHandler* CollectionChanged; // 0x50
		::System::ComponentModel::CollectionChangeEventHandler* CollectionChanging; // 0x58
		::System::ComponentModel::CollectionChangeEventHandler* ColumnPropertyChanged; // 0x60

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_List()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_LIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ColumnsImplementingIChangeTracking()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGICHANGETRACKING_OFFSET))(nullptr);
		}

		::System::Int32 get_ColumnsImplementingIChangeTrackingCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGICHANGETRACKINGCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_ColumnsImplementingIRevertibleChangeTrackingCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_COLUMNSIMPLEMENTINGIREVERTIBLECHANGETRACKINGCOUNT_OFFSET))(nullptr);
		}

		::System::Data::DataColumn* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataColumn*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Data::DataColumn* get_Item(::System::String* str)
		{
			return (return (::System::Data::DataColumn*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Data::DataColumn* get_Item(::System::String* str, ::System::String* str)
		{
			return (return (::System::Data::DataColumn*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET))(str, str, nullptr);
		}

		::System::Void Add(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddAt(::System::Int32 arg, ::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataColumn* Add(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Data::DataColumn*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLUMNPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLUMNPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ArrayAdd(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET))(arg, nullptr);
		}

		::System::Void ArrayAdd(::System::Int32 arg, ::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ArrayRemove(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYREMOVE_OFFSET))(arg, nullptr);
		}

		::System::String* AssignName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ASSIGNNAME_OFFSET))(nullptr);
		}

		::System::Void BaseAdd(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEADD_OFFSET))(arg, nullptr);
		}

		::System::Void BaseGroupSwitch(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEGROUPSWITCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BaseRemove(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanRemove(::System::Data::DataColumn* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckIChangeTracking(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CHECKICHANGETRACKING_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Boolean Contains(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOF_OFFSET))(str, nullptr);
		}

		::System::Int32 IndexOfCaseInsensitive(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOFCASEINSENSITIVE_OFFSET))(str, nullptr);
		}

		::System::Void FinishInitCollection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_FINISHINITCOLLECTION_OFFSET))(nullptr);
		}

		::System::String* MakeName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_MAKENAME_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void OnColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLUMNPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterColumnName(::System::String* str, ::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REGISTERCOLUMNNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CanRegisterName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREGISTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void Remove(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_UNREGISTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDCOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVECOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET))(arg, nullptr);
		}

	};
}

