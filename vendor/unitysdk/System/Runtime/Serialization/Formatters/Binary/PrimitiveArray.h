#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9215480)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET UNITYSDK_OFFSET(0x9221690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9215F90)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int PrimitiveArray_TypeDefinitionIndex = 24675;

	class PrimitiveArray : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* code; // 0x10
		::Il2CppArray<::System::Object*>* booleanA; // 0x18
		::Il2CppArray<::System::Object*>* charA; // 0x20
		::Il2CppArray<::System::Object*>* doubleA; // 0x28
		::Il2CppArray<::System::Object*>* int16A; // 0x30
		::Il2CppArray<::System::Object*>* int32A; // 0x38
		::Il2CppArray<::System::Object*>* int64A; // 0x40
		::Il2CppArray<::System::Object*>* sbyteA; // 0x48
		::Il2CppArray<::System::Object*>* singleA; // 0x50
		::Il2CppArray<::System::Object*>* uint16A; // 0x58
		::Il2CppArray<::System::Object*>* uint32A; // 0x60
		::Il2CppArray<::System::Object*>* uint64A; // 0x68

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Array* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Array* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PRIMITIVEARRAY_SETVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

