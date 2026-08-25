#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_APPLYSORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_FILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_SET_FILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SORTDESCRIPTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_REMOVEFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSADVANCEDSORTING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSFILTERING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IBindingListView_TypeDefinitionIndex = 29397;

	class IBindingListView : public Il2CppObject
	{
	public:
		::System::Void ApplySort(::System::ComponentModel::ListSortDescriptionCollection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListSortDescriptionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_APPLYSORT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Filter()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_FILTER_OFFSET))(nullptr);
		}

		::System::Void set_Filter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_SET_FILTER_OFFSET))(str, nullptr);
		}

		::System::ComponentModel::ListSortDescriptionCollection* get_SortDescriptions()
		{
			return (return (::System::ComponentModel::ListSortDescriptionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SORTDESCRIPTIONS_OFFSET))(nullptr);
		}

		::System::Void RemoveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_REMOVEFILTER_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsAdvancedSorting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSADVANCEDSORTING_OFFSET))(nullptr);
		}

		::System::Boolean get_SupportsFiltering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IBINDINGLISTVIEW_GET_SUPPORTSFILTERING_OFFSET))(nullptr);
		}

	};
}

