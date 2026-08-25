#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A292D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A292E0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A292F0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1F780)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_normalizedString_TypeDefinitionIndex = 28027;

	class Datatype_normalizedString : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NORMALIZEDSTRING_.CTOR_OFFSET))(nullptr);
		}

	};
}

