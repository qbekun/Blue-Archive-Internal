#pragma once
#include "unitysdk.h"

#define HIERARCHY_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E9D0)

	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 35373;

	class Hierarchy : public Il2CppObject
	{
	public:
		::System::String* skin; // 0x10
		::System::String* slot; // 0x18
		::System::String* name; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HIERARCHY_.CTOR_OFFSET))(str, nullptr);
		}

	};

