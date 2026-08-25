#pragma once
#include "unitysdk.h"

#define CATALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AF670)

	inline static constexpr unsigned int Catalog_TypeDefinitionIndex = 6887;

	class Catalog : public Il2CppObject
	{
	public:
		::System::String* OriginalName; // 0x10
		::System::String* SearchKey; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CATALOG_.CTOR_OFFSET))(str, nullptr);
		}

	};

