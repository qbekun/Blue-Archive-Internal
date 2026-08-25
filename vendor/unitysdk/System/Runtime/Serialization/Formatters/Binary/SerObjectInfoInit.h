#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x92115C0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerObjectInfoInit_TypeDefinitionIndex = 24659;

	class SerObjectInfoInit : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* seenBeforeTable; // 0x10
		::System::Int32 objectInfoIdCount; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT_.CTOR_OFFSET))(nullptr);
		}

	};
}

