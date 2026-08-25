#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9215F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9216350)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET UNITYSDK_OFFSET(0x9215150)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ValueFixup_TypeDefinitionIndex = 24672;

	class ValueFixup : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum* valueFixupEnum; // 0x10
		::System::Array* arrayObj; // 0x18
		::Il2CppArray<::System::Object*>* indexMap; // 0x20
		::System::Object* header; // 0x28
		::System::Object* memberObject; // 0x30
		::System::Reflection::MemberInfo* valueInfo; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x38
		::System::String* memberName; // 0x40

		::System::Void .ctor(::System::Array* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Array*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::String* str, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_VALUEFIXUP_FIXUP_OFFSET))(arg, arg, nullptr);
		}

	};
}

