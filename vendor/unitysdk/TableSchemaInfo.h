#pragma once
#include "unitysdk.h"

#define TABLESCHEMAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9797150)

	inline static constexpr unsigned int TableSchemaInfo_TypeDefinitionIndex = 32314;

	class TableSchemaInfo : public Il2CppObject
	{
	public:
		::System::Data::DataTable* TableSchema; // 0x10
		XmlNodeIdHashtable* ColumnsSchemaMap; // 0x18

		::System::Void .ctor(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + TABLESCHEMAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

