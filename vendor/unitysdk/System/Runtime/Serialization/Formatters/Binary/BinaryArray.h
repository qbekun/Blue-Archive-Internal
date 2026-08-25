#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207C30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207C40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_SET_OFFSET UNITYSDK_OFFSET(0x9207C60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_WRITE_OFFSET UNITYSDK_OFFSET(0x9207D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_READ_OFFSET UNITYSDK_OFFSET(0x9208040)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryArray_TypeDefinitionIndex = 24646;

	class BinaryArray : public Il2CppObject
	{
	public:
		::System::Int32 objectId; // 0x10
		::System::Int32 rank; // 0x14
		::Il2CppArray<::System::Object*>* lengthA; // 0x18
		::Il2CppArray<::System::Object*>* lowerBoundA; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* binaryTypeEnum; // 0x28
		::System::Object* typeInformation; // 0x30
		::System::Int32 assemId; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* binaryHeaderEnum; // 0x3C
		::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum* binaryArrayTypeEnum; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* arg, ::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_SET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYARRAY_READ_OFFSET))(arg, nullptr);
		}

	};
}

