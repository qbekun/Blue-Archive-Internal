#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAVIEWSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x974F600)
#define SYSTEM_DATA_DATAVIEWSETTING_GET_APPLYDEFAULTSORT_OFFSET UNITYSDK_OFFSET(0x974F680)
#define SYSTEM_DATA_DATAVIEWSETTING_SETDATAVIEWMANAGER_OFFSET UNITYSDK_OFFSET(0x974F690)
#define SYSTEM_DATA_DATAVIEWSETTING_SETDATATABLE_OFFSET UNITYSDK_OFFSET(0x974F6B0)
#define SYSTEM_DATA_DATAVIEWSETTING_GET_ROWFILTER_OFFSET UNITYSDK_OFFSET(0x974F6D0)
#define SYSTEM_DATA_DATAVIEWSETTING_GET_ROWSTATEFILTER_OFFSET UNITYSDK_OFFSET(0x974F6E0)
#define SYSTEM_DATA_DATAVIEWSETTING_GET_SORT_OFFSET UNITYSDK_OFFSET(0x974F6F0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewSetting_TypeDefinitionIndex = 32240;

	class DataViewSetting : public Il2CppObject
	{
	public:
		::System::Data::DataViewManager* _dataViewManager; // 0x10
		::System::Data::DataTable* _table; // 0x18
		::System::String* _sort; // 0x20
		::System::String* _rowFilter; // 0x28
		::System::Data::DataViewRowState* _rowStateFilter; // 0x30
		::System::Boolean _applyDefaultSort; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefaultSort()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_GET_APPLYDEFAULTSORT_OFFSET))(nullptr);
		}

		::System::Void SetDataViewManager(::System::Data::DataViewManager* arg)
		{
			((::System::Void(*)(::System::Data::DataViewManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_SETDATAVIEWMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataTable(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_SETDATATABLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_RowFilter()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_GET_ROWFILTER_OFFSET))(nullptr);
		}

		::System::Data::DataViewRowState* get_RowStateFilter()
		{
			return (return (::System::Data::DataViewRowState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_GET_ROWSTATEFILTER_OFFSET))(nullptr);
		}

		::System::String* get_Sort()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTING_GET_SORT_OFFSET))(nullptr);
		}

	};
}

