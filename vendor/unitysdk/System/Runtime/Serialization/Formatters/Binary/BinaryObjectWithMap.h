#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207330)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207340)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_SET_OFFSET UNITYSDK_OFFSET(0x9207360)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_WRITE_OFFSET UNITYSDK_OFFSET(0x92073C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_READ_OFFSET UNITYSDK_OFFSET(0x92074E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_DUMP_OFFSET UNITYSDK_OFFSET(0x9207620)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObjectWithMap_TypeDefinitionIndex = 24644;

	class BinaryObjectWithMap : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* binaryHeaderEnum; // 0x10
		::System::Int32 objectId; // 0x14
		::System::String* name; // 0x18
		::System::Int32 numMembers; // 0x20
		::Il2CppArray<::System::Object*>* memberNames; // 0x28
		::System::Int32 assemId; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_SET_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_DUMP_OFFSET))(nullptr);
		}

	};
}

