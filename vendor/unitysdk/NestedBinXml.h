#pragma once
#include "unitysdk.h"

#define NESTEDBINXML_.CTOR_OFFSET UNITYSDK_OFFSET(0x984C2E0)

	inline static constexpr unsigned int NestedBinXml_TypeDefinitionIndex = 27622;

	class NestedBinXml : public Il2CppObject
	{
	public:
		SymbolTables* symbolTables; // 0x10
		::System::Int32 docState; // 0x30
		NestedBinXml* next; // 0x38

		::System::Void .ctor(SymbolTables* arg, ::System::Int32 arg, NestedBinXml* arg)
		{
			((::System::Void(*)(SymbolTables*, ::System::Int32, NestedBinXml*, ::PVOID))((::PBYTE)hIl2Cpp + NESTEDBINXML_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

