#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A29320)
#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A29330)
#define SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A1FF50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_token_TypeDefinitionIndex = 28029;

	class Datatype_token : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_TOKEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

