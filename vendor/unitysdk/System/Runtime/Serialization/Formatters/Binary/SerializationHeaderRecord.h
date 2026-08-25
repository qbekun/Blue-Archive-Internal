#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x92066A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x92066B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET UNITYSDK_OFFSET(0x9206710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET UNITYSDK_OFFSET(0x92067D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET UNITYSDK_OFFSET(0x9206840)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_DUMP_OFFSET UNITYSDK_OFFSET(0x9206A70)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerializationHeaderRecord_TypeDefinitionIndex = 24634;

	class SerializationHeaderRecord : public Il2CppObject
	{
	public:
		::System::Int32 binaryFormatterMajorVersion; // 0x10
		::System::Int32 binaryFormatterMinorVersion; // 0x14
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* binaryHeaderEnum; // 0x18
		::System::Int32 topId; // 0x1C
		::System::Int32 headerId; // 0x20
		::System::Int32 majorVersion; // 0x24
		::System::Int32 minorVersion; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_GETINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SERIALIZATIONHEADERRECORD_DUMP_OFFSET))(nullptr);
		}

	};
}

