#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207180)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_READ_OFFSET UNITYSDK_OFFSET(0x9207190)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_DUMP_OFFSET UNITYSDK_OFFSET(0x92071D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryCrossAppDomainString_TypeDefinitionIndex = 24641;

	class BinaryCrossAppDomainString : public Il2CppObject
	{
	public:
		::System::Int32 objectId; // 0x10
		::System::Int32 value; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCROSSAPPDOMAINSTRING_DUMP_OFFSET))(nullptr);
		}

	};
}

