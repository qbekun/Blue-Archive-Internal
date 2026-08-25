#pragma once
#include "../../../../../unitysdk.h"

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryHeaderEnum_TypeDefinitionIndex = 24619;

	class BinaryHeaderEnum : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* SerializedStreamHeader; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* Object; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectWithMap; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectWithMapAssemId; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectWithMapTyped; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectWithMapTypedAssemId; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectString; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* Array; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* MemberPrimitiveTyped; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* MemberReference; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectNull; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* MessageEnd; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* Assembly; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectNullMultiple256; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ObjectNullMultiple; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ArraySinglePrimitive; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ArraySingleObject; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* ArraySingleString; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* CrossAppDomainMap; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* CrossAppDomainString; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* CrossAppDomainAssembly; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* MethodCall; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum* MethodReturn; // 0x0

	};
}

