#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IBindingList_TypeDefinitionIndex = 29396;

	class IBindingList : public Il2CppObject
	{
	public:
		::System::Boolean get_AllowNew()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWNEW_OFFSET))(nullptr);
		}

		::System::Object* AddNew()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDNEW_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowEdit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWEDIT_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowRemove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ALLOWREMOVE_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsChangeNotification()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSearching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSEARCHING_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsSorting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SUPPORTSSORTING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSorted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_ISSORTED_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_SortProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTPROPERTY_OFFSET))(nullptr);
		}

		::System::ComponentModel::ListSortDirection* get_SortDirection()
		{
			return (return (::System::ComponentModel::ListSortDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_GET_SORTDIRECTION_OFFSET))(nullptr);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADD_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVE_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void AddIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_ADDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ApplySort(::System::ComponentModel::PropertyDescriptor* arg, ::System::ComponentModel::ListSortDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_APPLYSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Find(::System::ComponentModel::PropertyDescriptor* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_FIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLIST_REMOVESORT_OFFSET))(nullptr);
		}

	};
}

