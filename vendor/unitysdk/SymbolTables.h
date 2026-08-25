#pragma once
#include "unitysdk.h"

#define SYMBOLTABLES_INIT_OFFSET UNITYSDK_OFFSET(0x9842E20)

	inline static constexpr unsigned int SymbolTables_TypeDefinitionIndex = 27621;

	class SymbolTables : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* symtable; // 0x10
		::System::Int32 symCount; // 0x18
		::Il2CppArray<::System::Object*>* qnametable; // 0x20
		::System::Int32 qnameCount; // 0x28

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYMBOLTABLES_INIT_OFFSET))(nullptr);
		}

	};

