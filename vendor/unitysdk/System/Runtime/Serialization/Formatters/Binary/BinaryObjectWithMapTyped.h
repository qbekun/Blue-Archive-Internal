#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207630)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9207640)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET UNITYSDK_OFFSET(0x9207660)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET UNITYSDK_OFFSET(0x9207720)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET UNITYSDK_OFFSET(0x9207900)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObjectWithMapTyped_TypeDefinitionIndex = 24645;

	class BinaryObjectWithMapTyped : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* binaryHeaderEnum; // 0x10
		::System::Int32 objectId; // 0x14
		::System::String* name; // 0x18
		::System::Int32 numMembers; // 0x20
		::Il2CppArray<::System::Object*>* memberNames; // 0x28
		::Il2CppArray<::System::Object*>* binaryTypeEnumA; // 0x30
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x38
		::Il2CppArray<::System::Object*>* memberAssemIds; // 0x40
		::System::Int32 assemId; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Int32 arg, ::System::String* str, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_SET_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAPTYPED_READ_OFFSET))(arg, nullptr);
		}

	};
}

