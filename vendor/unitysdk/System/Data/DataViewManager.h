#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAVIEWMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x974DE00)
#define SYSTEM_DATA_DATAVIEWMANAGER_GET_DATASET_OFFSET UNITYSDK_OFFSET(0x974E0E0)
#define SYSTEM_DATA_DATAVIEWMANAGER_GET_DATAVIEWSETTINGS_OFFSET UNITYSDK_OFFSET(0x974E0F0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x974E100)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x974E1D0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x974E1E0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x974E1F0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x974E200)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x974E210)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x974E220)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x974E2B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x974E2C0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x974E2F0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET UNITYSDK_OFFSET(0x974E320)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x974E350)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x974E360)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x974E380)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x974E3B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x974E3E0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x974E410)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDNEW_OFFSET UNITYSDK_OFFSET(0x974E420)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x974E470)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x974E480)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x974E490)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x974E4A0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x974E4B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x974E4C0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x974E510)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x974E560)
#define SYSTEM_DATA_DATAVIEWMANAGER_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x974E5B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x974E650)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDINDEX_OFFSET UNITYSDK_OFFSET(0x974E6F0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.APPLYSORT_OFFSET UNITYSDK_OFFSET(0x974E700)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.FIND_OFFSET UNITYSDK_OFFSET(0x974E750)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x974E7A0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVESORT_OFFSET UNITYSDK_OFFSET(0x974E7B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x974E800)
#define SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x974E8B0)
#define SYSTEM_DATA_DATAVIEWMANAGER_CREATEDATAVIEW_OFFSET UNITYSDK_OFFSET(0x974EA30)
#define SYSTEM_DATA_DATAVIEWMANAGER_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x974EB00)
#define SYSTEM_DATA_DATAVIEWMANAGER_TABLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x974EC40)
#define SYSTEM_DATA_DATAVIEWMANAGER_RELATIONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x974EED0)
#define SYSTEM_DATA_DATAVIEWMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x974F120)

namespace System::Data
{
	inline static constexpr unsigned int DataViewManager_TypeDefinitionIndex = 32237;

	class DataViewManager : public Il2CppObject
	{
	public:
		::System::Data::DataViewSettingCollection* _dataViewSettingsCollection; // 0x20
		::System::Data::DataSet* _dataSet; // 0x28
		::System::Data::DataViewManagerListItemTypeDescriptor* _item; // 0x30
		::System::Boolean _locked; // 0x38
		::System::Int32 _nViews; // 0x3C
		::System::NotSupportedException* s_notSupported; // 0x0
		::System::ComponentModel::ListChangedEventHandler* ListChanged; // 0x40

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::DataSet* get_DataSet()
		{
			return (return (::System::Data::DataSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_GET_DATASET_OFFSET))(nullptr);
		}

		::System::Data::DataViewSettingCollection* get_DataViewSettings()
		{
			return (return (::System::Data::DataViewSettingCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_GET_DATAVIEWSETTINGS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowNew()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWNEW_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.IBindingList.AddNew()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDNEW_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowEdit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWEDIT_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowRemove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWREMOVE_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsChangeNotification()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsSearching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSEARCHING_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsSorting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSORTING_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_IsSorted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ISSORTED_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.IBindingList.get_SortProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTPROPERTY_OFFSET))(nullptr);
		}

		::System::ComponentModel::ListSortDirection* System.ComponentModel.IBindingList.get_SortDirection()
		{
			return (return (::System::ComponentModel::ListSortDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTDIRECTION_OFFSET))(nullptr);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_ADD_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_REMOVE_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.AddIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.ApplySort(::System::ComponentModel::PropertyDescriptor* arg, ::System::ComponentModel::ListSortDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.APPLYSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.ComponentModel.IBindingList.Find(::System::ComponentModel::PropertyDescriptor* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.FIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.RemoveIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.RemoveSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVESORT_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ITypedList.GetListName(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETLISTNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ITypedList.GetItemProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETITEMPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Data::DataView* CreateDataView(::System::Data::DataTable* arg)
		{
			return (return (::System::Data::DataView*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_CREATEDATAVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_ONLISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void TableCollectionChanged(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_TABLECOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RelationCollectionChanged(::System::Object* arg, ::System::ComponentModel::CollectionChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CollectionChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_RELATIONCOLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

