#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9208580)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_SETNULLCOUNT_OFFSET UNITYSDK_OFFSET(0x9208590)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_WRITE_OFFSET UNITYSDK_OFFSET(0x92085A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_READ_OFFSET UNITYSDK_OFFSET(0x9208680)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_DUMP_OFFSET UNITYSDK_OFFSET(0x92086E0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectNull_TypeDefinitionIndex = 24649;

	class ObjectNull : public Il2CppObject
	{
	public:
		::System::Int32 nullCount; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNullCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_SETNULLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_READ_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTNULL_DUMP_OFFSET))(nullptr);
		}

	};
}

