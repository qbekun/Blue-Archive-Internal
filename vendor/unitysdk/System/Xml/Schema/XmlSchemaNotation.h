#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98E6CC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98E6CD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x98E6CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x98E6CF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x98E6D00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x98E6D10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E6D20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x98E6D30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6D40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6D50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E6D60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaNotation_TypeDefinitionIndex = 28178;

	class XmlSchemaNotation : public Il2CppObject
	{
	public:
		::System::String* name; // 0x50
		::System::String* publicId; // 0x58
		::System::String* systemId; // 0x60
		::System::Xml::XmlQualifiedName* qname; // 0x68

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Public()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_PUBLIC_OFFSET))(nullptr);
		}

		::System::Void set_Public(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_PUBLIC_OFFSET))(str, nullptr);
		}

		::System::String* get_System()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_SYSTEM_OFFSET))(nullptr);
		}

		::System::Void set_System(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_SYSTEM_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlQualifiedName* get_QualifiedName()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_QUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Void set_QualifiedName(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_QUALIFIEDNAME_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

