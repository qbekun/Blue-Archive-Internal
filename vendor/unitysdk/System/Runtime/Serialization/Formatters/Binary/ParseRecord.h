#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x921B320)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET UNITYSDK_OFFSET(0x921EF80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9220D70)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ParseRecord_TypeDefinitionIndex = 24667;

	class ParseRecord : public Il2CppObject
	{
	public:
		::System::Int32 parseRecordIdCount; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE* PRparseTypeEnum; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE* PRobjectTypeEnum; // 0x14
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE* PRarrayTypeEnum; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE* PRmemberTypeEnum; // 0x1C
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE* PRmemberValueEnum; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE* PRobjectPositionEnum; // 0x24
		::System::String* PRname; // 0x28
		::System::String* PRvalue; // 0x30
		::System::Object* PRvarValue; // 0x38
		::System::String* PRkeyDt; // 0x40
		::System::Type* PRdtType; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* PRdtTypeCode; // 0x50
		::System::Boolean PRisEnum; // 0x54
		::System::Int64 PRobjectId; // 0x58
		::System::Int64 PRidRef; // 0x60
		::System::String* PRarrayElementTypeString; // 0x68
		::System::Type* PRarrayElementType; // 0x70
		::System::Boolean PRisArrayVariant; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* PRarrayElementTypeCode; // 0x7C
		::System::Int32 PRrank; // 0x80
		::Il2CppArray<::System::Object*>* PRlengthA; // 0x88
		::Il2CppArray<::System::Object*>* PRpositionA; // 0x90
		::Il2CppArray<::System::Object*>* PRlowerBoundA; // 0x98
		::Il2CppArray<::System::Object*>* PRupperBoundA; // 0xA0
		::Il2CppArray<::System::Object*>* PRindexMap; // 0xA8
		::System::Int32 PRmemberIndex; // 0xB0
		::System::Int32 PRlinearlength; // 0xB4
		::Il2CppArray<::System::Object*>* PRrectangularMap; // 0xB8
		::System::Boolean PRisLowerBound; // 0xC0
		::System::Int64 PRtopId; // 0xC8
		::System::Int64 PRheaderId; // 0xD0
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo; // 0xD8
		::System::Boolean PRisValueTypeFixup; // 0xE0
		::System::Object* PRnewObj; // 0xE8
		::Il2CppArray<::System::Object*>* PRobjectA; // 0xF0
		::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray; // 0xF8
		::System::Boolean PRisRegistered; // 0x100
		::Il2CppArray<::System::Object*>* PRmemberData; // 0x108
		::System::Runtime::Serialization::SerializationInfo* PRsi; // 0x110
		::System::Int32 PRnullCount; // 0x118

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_.CCTOR_OFFSET))(nullptr);
		}

	};
}

