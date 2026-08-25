#pragma once
#include "unitysdk.h"

#define TABLEPOSITION_INCREASEROWID_OFFSET UNITYSDK_OFFSET(0x1981DA0)
#define TABLEPOSITION_GET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1981E70)
#define TABLEPOSITION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1981E80)
#define TABLEPOSITION_GET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1981F60)
#define TABLEPOSITION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1981E20)
#define TABLEPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x197FF20)
#define TABLEPOSITION_SET_ROWID_OFFSET UNITYSDK_OFFSET(0x1981F70)
#define TABLEPOSITION_SET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1981F80)
#define TABLEPOSITION_GET_ROWID_OFFSET UNITYSDK_OFFSET(0x1981F90)
#define TABLEPOSITION_SET_OFFSET UNITYSDK_OFFSET(0x1981FA0)
#define TABLEPOSITION_SET_COLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x1981FF0)
#define TABLEPOSITION_GET_COLUMNVALUE_OFFSET UNITYSDK_OFFSET(0x1982000)
#define TABLEPOSITION_SET_TABLENAME_OFFSET UNITYSDK_OFFSET(0x1982010)

	inline static constexpr unsigned int TablePosition_TypeDefinitionIndex = 16515;

	class TablePosition : public Il2CppObject
	{
	public:
		::System::String* _TableName_k__BackingField; // 0x10
		::System::String* _ColumnName_k__BackingField; // 0x18
		::System::Object* _ColumnValue_k__BackingField; // 0x20
		::System::Int64 _RowId_k__BackingField; // 0x28

		::System::Void IncreaseRowId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_INCREASEROWID_OFFSET))(str, nullptr);
		}

		::System::String* get_ColumnName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_GET_COLUMNNAME_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_TableName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_GET_TABLENAME_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RowId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_SET_ROWID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ColumnName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_SET_COLUMNNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_RowId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_GET_ROWID_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_SET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void set_ColumnValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_SET_COLUMNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_ColumnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_GET_COLUMNVALUE_OFFSET))(nullptr);
		}

		::System::Void set_TableName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEPOSITION_SET_TABLENAME_OFFSET))(str, nullptr);
		}

	};

