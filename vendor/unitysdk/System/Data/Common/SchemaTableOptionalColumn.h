#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_SCHEMATABLEOPTIONALCOLUMN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97FC950)

namespace System::Data::Common
{
	inline static constexpr unsigned int SchemaTableOptionalColumn_TypeDefinitionIndex = 32384;

	class SchemaTableOptionalColumn : public Il2CppObject
	{
	public:
		::System::String* ProviderSpecificDataType; // 0x0
		::System::String* IsAutoIncrement; // 0x8
		::System::String* IsHidden; // 0x10
		::System::String* IsReadOnly; // 0x18
		::System::String* IsRowVersion; // 0x20
		::System::String* BaseServerName; // 0x28
		::System::String* BaseCatalogName; // 0x30
		::System::String* AutoIncrementSeed; // 0x38
		::System::String* AutoIncrementStep; // 0x40
		::System::String* DefaultValue; // 0x48
		::System::String* Expression; // 0x50
		::System::String* BaseTableNamespace; // 0x58
		::System::String* BaseColumnNamespace; // 0x60
		::System::String* ColumnMapping; // 0x68

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SCHEMATABLEOPTIONALCOLUMN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

