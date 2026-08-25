#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x9204650)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x9204DA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET UNITYSDK_OFFSET(0x9205110)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET UNITYSDK_OFFSET(0x92053E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET UNITYSDK_OFFSET(0x9205570)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 24631;

	class BinaryConverter : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* GetBinaryTypeInfo(::System::Type* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::String* str, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* arg, ::System::Object&* arg, int32_t&* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Object&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* GetParserBinaryTypeInfo(::System::Type* arg, ::System::Object&* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*(*)(::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*, ::System::Object*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* arg, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* arg, ::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&* arg, ::System::String&* arg, ::System::Type&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&*, ::System::String&*, ::System::Type&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

