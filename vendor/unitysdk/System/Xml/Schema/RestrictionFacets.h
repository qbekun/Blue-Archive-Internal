#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_RESTRICTIONFACETS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A16CA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RestrictionFacets_TypeDefinitionIndex = 27994;

	class RestrictionFacets : public Il2CppObject
	{
	public:
		::System::Int32 Length; // 0x10
		::System::Int32 MinLength; // 0x14
		::System::Int32 MaxLength; // 0x18
		::System::Collections::ArrayList* Patterns; // 0x20
		::System::Collections::ArrayList* Enumeration; // 0x28
		::System::Xml::Schema::XmlSchemaWhiteSpace* WhiteSpace; // 0x30
		::System::Object* MaxInclusive; // 0x38
		::System::Object* MaxExclusive; // 0x40
		::System::Object* MinInclusive; // 0x48
		::System::Object* MinExclusive; // 0x50
		::System::Int32 TotalDigits; // 0x58
		::System::Int32 FractionDigits; // 0x5C
		::System::Xml::Schema::RestrictionFlags* Flags; // 0x60
		::System::Xml::Schema::RestrictionFlags* FixedFlags; // 0x64

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RESTRICTIONFACETS_.CTOR_OFFSET))(nullptr);
		}

	};
}

