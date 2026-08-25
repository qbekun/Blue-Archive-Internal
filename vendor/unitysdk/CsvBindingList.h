#pragma once
#include "unitysdk.h"

namespace MX::Core::IO::Csv { class CachedCsvReader; }
class CsvPropertyDescriptor;

#define CSVBINDINGLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1036A80)
#define CSVBINDINGLIST_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x1036AC0)
#define CSVBINDINGLIST_GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x1036AD0)
#define CSVBINDINGLIST_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x1036AE0)
#define CSVBINDINGLIST_GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1036D50)
#define CSVBINDINGLIST_FIND_OFFSET UNITYSDK_OFFSET(0x1036D60)
#define CSVBINDINGLIST_GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x1037030)
#define CSVBINDINGLIST_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x1037040)
#define CSVBINDINGLIST_GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x1037050)
#define CSVBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x1037060)
#define CSVBINDINGLIST_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1037070)
#define CSVBINDINGLIST_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1037080)
#define CSVBINDINGLIST_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1037090)
#define CSVBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x10370A0)
#define CSVBINDINGLIST_REMOVESORT_OFFSET UNITYSDK_OFFSET(0x10370B0)
#define CSVBINDINGLIST_ADDNEW_OFFSET UNITYSDK_OFFSET(0x10370E0)
#define CSVBINDINGLIST_GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x1037130)
#define CSVBINDINGLIST_REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1037140)
#define CSVBINDINGLIST_GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1037150)
#define CSVBINDINGLIST_GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x1037380)
#define CSVBINDINGLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x10373C0)
#define CSVBINDINGLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1037410)
#define CSVBINDINGLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1037460)
#define CSVBINDINGLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x10374B0)
#define CSVBINDINGLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1037530)
#define CSVBINDINGLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1037580)
#define CSVBINDINGLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x10375D0)
#define CSVBINDINGLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1037620)
#define CSVBINDINGLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1037670)
#define CSVBINDINGLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1036EE0)
#define CSVBINDINGLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1037720)
#define CSVBINDINGLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1037730)
#define CSVBINDINGLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1037780)
#define CSVBINDINGLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1037830)
#define CSVBINDINGLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1037880)
#define CSVBINDINGLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x10378D0)
#define CSVBINDINGLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1037920)
#define CSVBINDINGLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1037970)
#define CSVBINDINGLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1037980)
#define CSVBINDINGLIST_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x10379D0)
#define CSVBINDINGLIST_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1037A50)
#define CSVBINDINGLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1037AA0)
#define CSVBINDINGLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1037BB0)
#define CSVBINDINGLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1037BC0)
#define CSVBINDINGLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1037BD0)

	inline static constexpr unsigned int CsvBindingList_TypeDefinitionIndex = 12834;

	class CsvBindingList : public Il2CppObject
	{
	public:
		::MX::Core::IO::Csv::CachedCsvReader* _csv; // 0x10
		::System::Int32 _count; // 0x18
		::System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x20
		CsvPropertyDescriptor* _sort; // 0x28
		::System::ComponentModel::ListSortDirection* _direction; // 0x30

		::System::Void .ctor(::MX::Core::IO::Csv::CachedCsvReader* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::CachedCsvReader*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void AddIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_ADDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ALLOWNEW_OFFSET))(nullptr);
		}

		::System::Void ApplySort(::System::ComponentModel::PropertyDescriptor* arg, ::System::ComponentModel::ListSortDirection* arg2)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_APPLYSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_SortProperty()
		{
			return ((::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SORTPROPERTY_OFFSET))(nullptr);
		}

		::System::Int32 Find(::System::ComponentModel::PropertyDescriptor* arg, ::System::Object* arg2)
		{
			return ((::System::Int32(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_FIND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_SupportsSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SUPPORTSSORTING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSorted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ISSORTED_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ALLOWREMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSearching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET))(nullptr);
		}

		::System::ComponentModel::ListSortDirection* get_SortDirection()
		{
			return ((::System::ComponentModel::ListSortDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SORTDIRECTION_OFFSET))(nullptr);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_ADD_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVE_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SupportsChangeNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(nullptr);
		}

		::System::Void RemoveSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVESORT_OFFSET))(nullptr);
		}

		::System::Object* AddNew()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_ADDNEW_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ALLOWEDIT_OFFSET))(nullptr);
		}

		::System::Void RemoveIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVEINDEX_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetItemProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GETITEMPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::String* GetListName(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GETLISTNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_INSERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Item(::System::Int32 arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Object* arg)
		{
			return ((::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_INSERT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return ((::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_COPYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CSVBINDINGLIST_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

