#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x974E020)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x974F700)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x974F870)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x974F920)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x974FAF0)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x974FA90)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x974FC80)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x974FC90)
#define SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x974FCA0)

namespace System::Data
{
	inline static constexpr unsigned int DataViewSettingCollection_TypeDefinitionIndex = 32242;

	class DataViewSettingCollection : public Il2CppObject
	{
	public:
		::System::Data::DataViewManager* _dataViewManager; // 0x10
		::System::Collections::Hashtable* _list; // 0x18

		::System::Void .ctor(::System::Data::DataViewManager* arg)
		{
			((::System::Void(*)(::System::Data::DataViewManager*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Data::DataViewSetting* get_Item(::System::Data::DataTable* arg)
		{
			return (return (::System::Data::DataViewSetting*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Data::DataTable* arg, ::System::Data::DataViewSetting* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::DataViewSetting*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAVIEWSETTINGCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

