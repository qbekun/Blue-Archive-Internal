#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9208400)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET UNITYSDK_OFFSET(0x9208410)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET UNITYSDK_OFFSET(0x9208430)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x9208440)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_READ_OFFSET UNITYSDK_OFFSET(0x9208470)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_DUMP_OFFSET UNITYSDK_OFFSET(0x92084B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MemberPrimitiveUnTyped_TypeDefinitionIndex = 24647;

	class MemberPrimitiveUnTyped : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* typeInformation; // 0x10
		::System::Object* value; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MEMBERPRIMITIVEUNTYPED_DUMP_OFFSET))(nullptr);
		}

	};
}

