#pragma once
#include "unitysdk.h"

#define TABLEBUNDLEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC59AB0)
#define TABLEBUNDLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5B110)
#define TABLEBUNDLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xC5B160)

	inline static constexpr unsigned int TableBundleFormatter_TypeDefinitionIndex = 8952;

	class TableBundleFormatter : public __StaticArrayInitTypeSize=36
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, TableBundle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, TableBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, TableBundle&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, TableBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + TABLEBUNDLEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

