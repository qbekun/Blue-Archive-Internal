#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9742F10)
#define SYSTEM_DATA_DATAROWCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9743020)
#define SYSTEM_DATA_DATAROWCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9734BD0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9743070)
#define SYSTEM_DATA_DATAROWCOLLECTION_DIFFINSERTAT_OFFSET UNITYSDK_OFFSET(0x97430A0)
#define SYSTEM_DATA_DATAROWCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x97432B0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ADDWITHCOLUMNEVENTS_OFFSET UNITYSDK_OFFSET(0x9743330)
#define SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x97433A0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x9743400)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYINSERT_OFFSET UNITYSDK_OFFSET(0x9743460)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYCLEAR_OFFSET UNITYSDK_OFFSET(0x97434D0)
#define SYSTEM_DATA_DATAROWCOLLECTION_ARRAYREMOVE_OFFSET UNITYSDK_OFFSET(0x9743520)
#define SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x97435B0)
#define SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9743610)
#define SYSTEM_DATA_DATAROWCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9743670)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCollection_TypeDefinitionIndex = 32219;

	class DataRowCollection : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		DataRowTree* _list; // 0x18
		::System::Int32 _nullInList; // 0x20

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Data::DataRow* get_Item(::System::Int32 arg)
		{
			return (return (::System::Data::DataRow*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void DiffInsertAt(::System::Data::DataRow* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DIFFINSERTAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Data::DataRow* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRow* AddWithColumnEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Data::DataRow*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ADDWITHCOLUMNEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Data::DataRow* Add(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Data::DataRow*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void ArrayAdd(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYADD_OFFSET))(arg, nullptr);
		}

		::System::Void ArrayInsert(::System::Data::DataRow* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYINSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ArrayClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYCLEAR_OFFSET))(nullptr);
		}

		::System::Void ArrayRemove(::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_ARRAYREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

