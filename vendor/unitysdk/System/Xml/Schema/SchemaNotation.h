#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98B6E20)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98B6E50)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x98B6E60)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET UNITYSDK_OFFSET(0x98B6E70)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET UNITYSDK_OFFSET(0x98B6E80)
#define SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET UNITYSDK_OFFSET(0x98B6E90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNotation_TypeDefinitionIndex = 28100;

	class SchemaNotation : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* name; // 0x10
		::System::String* systemLiteral; // 0x18
		::System::String* pubid; // 0x20

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_SystemLiteral()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_SYSTEMLITERAL_OFFSET))(nullptr);
		}

		::System::Void set_SystemLiteral(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_SYSTEMLITERAL_OFFSET))(str, nullptr);
		}

		::System::String* get_Pubid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_GET_PUBID_OFFSET))(nullptr);
		}

		::System::Void set_Pubid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANOTATION_SET_PUBID_OFFSET))(str, nullptr);
		}

	};
}

