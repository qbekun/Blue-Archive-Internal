#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9206E50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9206F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET UNITYSDK_OFFSET(0x9206F10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_DUMP_OFFSET UNITYSDK_OFFSET(0x9207060)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryMethodReturn_TypeDefinitionIndex = 24639;

	class BinaryMethodReturn : public Il2CppObject
	{
	public:
		::System::Object* returnValue; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18
		::System::Object* callContext; // 0x20
		::Il2CppArray<::System::Object*>* argTypes; // 0x28
		::System::Boolean bArgsPrimitive; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::MessageEnum* messageEnum; // 0x34
		::System::Type* returnType; // 0x38
		::System::Object* instanceOfVoid; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Dump()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_DUMP_OFFSET))(nullptr);
		}

	};
}

