#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3470)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98F3570)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98F3580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x98F35A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleType_TypeDefinitionIndex = 28197;

	class XmlSchemaSimpleType : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaSimpleTypeContent* content; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleTypeContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleTypeContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPE_CLONE_OFFSET))(nullptr);
		}

	};
}

