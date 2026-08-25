#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SCHEMATABLECOLUMN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97FC590)

namespace System::Data::Common
{
	inline static constexpr unsigned int SchemaTableColumn_TypeDefinitionIndex = 32383;

	class SchemaTableColumn : public Il2CppObject
	{
	public:
		::System::String* ColumnName; // 0x0
		::System::String* ColumnOrdinal; // 0x8
		::System::String* ColumnSize; // 0x10
		::System::String* NumericPrecision; // 0x18
		::System::String* NumericScale; // 0x20
		::System::String* DataType; // 0x28
		::System::String* ProviderType; // 0x30
		::System::String* NonVersionedProviderType; // 0x38
		::System::String* IsLong; // 0x40
		::System::String* AllowDBNull; // 0x48
		::System::String* IsAliased; // 0x50
		::System::String* IsExpression; // 0x58
		::System::String* IsKey; // 0x60
		::System::String* IsUnique; // 0x68
		::System::String* BaseSchemaName; // 0x70
		::System::String* BaseTableName; // 0x78
		::System::String* BaseColumnName; // 0x80

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SCHEMATABLECOLUMN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

