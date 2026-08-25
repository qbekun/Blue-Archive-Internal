#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9736680)
#define SYSTEM_DATA_DATAKEY_GET_COLUMNSREFERENCE_OFFSET UNITYSDK_OFFSET(0x9736930)
#define SYSTEM_DATA_DATAKEY_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x9736940)
#define SYSTEM_DATA_DATAKEY_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x9731D80)
#define SYSTEM_DATA_DATAKEY_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x9736890)
#define SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET UNITYSDK_OFFSET(0x9736950)
#define SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET UNITYSDK_OFFSET(0x9736A00)
#define SYSTEM_DATA_DATAKEY_CONTAINSCOLUMN_OFFSET UNITYSDK_OFFSET(0x9734C80)
#define SYSTEM_DATA_DATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9736AC0)
#define SYSTEM_DATA_DATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9736B10)
#define SYSTEM_DATA_DATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9736C00)
#define SYSTEM_DATA_DATAKEY_GETCOLUMNNAMES_OFFSET UNITYSDK_OFFSET(0x9736C90)
#define SYSTEM_DATA_DATAKEY_GETINDEXDESC_OFFSET UNITYSDK_OFFSET(0x9736D80)
#define SYSTEM_DATA_DATAKEY_GETKEYVALUES_OFFSET UNITYSDK_OFFSET(0x9736E80)
#define SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET UNITYSDK_OFFSET(0x9736FA0)
#define SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET UNITYSDK_OFFSET(0x9737000)
#define SYSTEM_DATA_DATAKEY_RECORDSEQUAL_OFFSET UNITYSDK_OFFSET(0x9737060)
#define SYSTEM_DATA_DATAKEY_TOARRAY_OFFSET UNITYSDK_OFFSET(0x97370E0)

namespace System::Data
{
	inline static constexpr unsigned int DataKey_TypeDefinitionIndex = 32207;

	class DataKey : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _columns; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ColumnsReference()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GET_COLUMNSREFERENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GET_HASVALUE_OFFSET))(nullptr);
		}

		::System::Data::DataTable* get_Table()
		{
			return (return (::System::Data::DataTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GET_TABLE_OFFSET))(nullptr);
		}

		::System::Void CheckState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_CHECKSTATE_OFFSET))(nullptr);
		}

		::System::Boolean ColumnsEqual(::System::Data::DataKey* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataKey*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ColumnsEqual(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_COLUMNSEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsColumn(::System::Data::DataColumn* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataColumn*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_CONTAINSCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Data::DataKey* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataKey*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetColumnNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETCOLUMNNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIndexDesc()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETINDEXDESC_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetKeyValues(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETKEYVALUES_OFFSET))(arg, nullptr);
		}

		::System::Data::Index* GetSortIndex()
		{
			return (return (::System::Data::Index*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET))(nullptr);
		}

		::System::Data::Index* GetSortIndex(::System::Data::DataViewRowState* arg)
		{
			return (return (::System::Data::Index*(*)(::System::Data::DataViewRowState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_GETSORTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean RecordsEqual(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_RECORDSEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAKEY_TOARRAY_OFFSET))(nullptr);
		}

	};
}

