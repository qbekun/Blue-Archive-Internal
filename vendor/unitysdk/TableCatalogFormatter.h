#pragma once
#include "unitysdk.h"

#define TABLECATALOGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5BA90)
#define TABLECATALOGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC5B7F0)
#define TABLECATALOGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5BAE0)

	inline static constexpr unsigned int TableCatalogFormatter_TypeDefinitionIndex = 8954;

	class TableCatalogFormatter : public __StaticArrayInitTypeSize=38
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, TableCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, TableCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOGFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, TableCatalog&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, TableCatalog&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLECATALOGFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

