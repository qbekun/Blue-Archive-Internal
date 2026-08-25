#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207230)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_SET_OFFSET UNITYSDK_OFFSET(0x9207240)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x9207260)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_READ_OFFSET UNITYSDK_OFFSET(0x92072D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_DUMP_OFFSET UNITYSDK_OFFSET(0x9207320)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberPrimitiveTyped_TypeDefinitionIndex = 24643;

	class MemberPrimitiveTyped : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* primitiveTypeEnum; // 0x10
		::System::Object* value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVETYPED_DUMP_OFFSET))(nullptr);
		}

	};
}

