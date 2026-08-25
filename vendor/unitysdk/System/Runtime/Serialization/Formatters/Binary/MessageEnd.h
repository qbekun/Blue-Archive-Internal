#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x92086F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET UNITYSDK_OFFSET(0x9208700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET UNITYSDK_OFFSET(0x9208740)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET UNITYSDK_OFFSET(0x9208750)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET UNITYSDK_OFFSET(0x9208760)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MessageEnd_TypeDefinitionIndex = 24650;

	class MessageEnd : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET))(nullptr);
		}

		::System::Void Dump(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_DUMP_OFFSET))(arg, nullptr);
		}

	};
}

