#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9209610)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET UNITYSDK_OFFSET(0x9209690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET UNITYSDK_OFFSET(0x9209790)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET UNITYSDK_OFFSET(0x92097A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92098D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectProgress_TypeDefinitionIndex = 24652;

	class ObjectProgress : public Il2CppObject
	{
	public:
		::System::Int32 opRecordIdCount; // 0x0
		::System::Boolean isInitial; // 0x10
		::System::Int32 count; // 0x14
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* expectedType; // 0x18
		::System::Object* expectedTypeInformation; // 0x20
		::System::String* name; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE* objectTypeEnum; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE* memberTypeEnum; // 0x34
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE* memberValueEnum; // 0x38
		::System::Type* dtType; // 0x40
		::System::Int32 numItems; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum* binaryTypeEnum; // 0x4C
		::System::Object* typeInformation; // 0x50
		::System::Int32 nullCount; // 0x58
		::System::Int32 memberLength; // 0x5C
		::Il2CppArray<::System::Object*>* binaryTypeEnumA; // 0x60
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x68
		::Il2CppArray<::System::Object*>* memberNames; // 0x70
		::Il2CppArray<::System::Object*>* memberTypes; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_INIT_OFFSET))(nullptr);
		}

		::System::Void ArrayCountIncrement(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_ARRAYCOUNTINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetNext(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum&* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_GETNEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTPROGRESS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

