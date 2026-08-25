#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET UNITYSDK_OFFSET(0x9204FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x92099E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET UNITYSDK_OFFSET(0x9209A00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x9205AE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET UNITYSDK_OFFSET(0x9209F70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET UNITYSDK_OFFSET(0x9209A20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x9205A00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x920A4B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x92049F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET UNITYSDK_OFFSET(0x920A5C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET UNITYSDK_OFFSET(0x9205920)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET UNITYSDK_OFFSET(0x920ABC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET UNITYSDK_OFFSET(0x920AD50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET UNITYSDK_OFFSET(0x920AE20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET UNITYSDK_OFFSET(0x9209910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x920AFE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x920B0A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int Converter_TypeDefinitionIndex = 24653;

	class Converter : public Il2CppObject
	{
	public:
		::System::Int32 primitiveTypeEnumLength; // 0x0
		::Il2CppArray<::System::Object*>* typeA; // 0x8
		::Il2CppArray<::System::Object*>* arrayTypeA; // 0x10
		::Il2CppArray<::System::Object*>* valueA; // 0x18
		::Il2CppArray<::System::Object*>* typeCodeA; // 0x20
		::Il2CppArray<::System::Object*>* codeA; // 0x28
		::System::Type* typeofISerializable; // 0x30
		::System::Type* typeofString; // 0x38
		::System::Type* typeofConverter; // 0x40
		::System::Type* typeofBoolean; // 0x48
		::System::Type* typeofByte; // 0x50
		::System::Type* typeofChar; // 0x58
		::System::Type* typeofDecimal; // 0x60
		::System::Type* typeofDouble; // 0x68
		::System::Type* typeofInt16; // 0x70
		::System::Type* typeofInt32; // 0x78
		::System::Type* typeofInt64; // 0x80
		::System::Type* typeofSByte; // 0x88
		::System::Type* typeofSingle; // 0x90
		::System::Type* typeofTimeSpan; // 0x98
		::System::Type* typeofDateTime; // 0xA0
		::System::Type* typeofUInt16; // 0xA8
		::System::Type* typeofUInt32; // 0xB0
		::System::Type* typeofUInt64; // 0xB8
		::System::Type* typeofObject; // 0xC0
		::System::Type* typeofSystemVoid; // 0xC8
		::System::Reflection::Assembly* urtAssembly; // 0xD0
		::System::String* urtAssemblyString; // 0xD8
		::System::Type* typeofTypeArray; // 0xE0
		::System::Type* typeofObjectArray; // 0xE8
		::System::Type* typeofStringArray; // 0xF0
		::System::Type* typeofBooleanArray; // 0xF8
		::System::Type* typeofByteArray; // 0x100
		::System::Type* typeofCharArray; // 0x108
		::System::Type* typeofDecimalArray; // 0x110
		::System::Type* typeofDoubleArray; // 0x118
		::System::Type* typeofInt16Array; // 0x120
		::System::Type* typeofInt32Array; // 0x128
		::System::Type* typeofInt64Array; // 0x130
		::System::Type* typeofSByteArray; // 0x138
		::System::Type* typeofSingleArray; // 0x140
		::System::Type* typeofTimeSpanArray; // 0x148
		::System::Type* typeofDateTimeArray; // 0x150
		::System::Type* typeofUInt16Array; // 0x158
		::System::Type* typeofUInt32Array; // 0x160
		::System::Type* typeofUInt64Array; // 0x168
		::System::Type* typeofMarshalByRefObject; // 0x170

		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* ToCode(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InitTypeA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET))(nullptr);
		}

		::System::Void InitArrayTypeA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET))(nullptr);
		}

		::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET))(arg, nullptr);
		}

		::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Int32 arg)
		{
			return (return (::System::Array*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPrimitiveArray(::System::Type* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitValueA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET))(nullptr);
		}

		::System::String* ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::String*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InitTypeCodeA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET))(nullptr);
		}

		::System::TypeCode* ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::TypeCode*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET))(arg, nullptr);
		}

		::System::Void InitCodeA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* ToPrimitiveTypeEnum(::System::TypeCode* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*(*)(::System::TypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET))(arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

