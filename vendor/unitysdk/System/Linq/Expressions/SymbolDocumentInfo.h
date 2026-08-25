#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x9666770)
#define SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9666780)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SymbolDocumentInfo_TypeDefinitionIndex = 33115;

	class SymbolDocumentInfo : public Il2CppObject
	{
	public:
		::System::String* _FileName_k__BackingField; // 0x10
		::System::Guid* DocumentType_Text; // 0x0

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SYMBOLDOCUMENTINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

