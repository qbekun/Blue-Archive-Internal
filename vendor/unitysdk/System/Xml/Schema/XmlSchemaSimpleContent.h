#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98F3080)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x98F3090)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F30A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleContent_TypeDefinitionIndex = 28194;

	class XmlSchemaSimpleContent : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaContent* content; // 0x50

		::System::Xml::Schema::XmlSchemaContent* get_Content()
		{
			return (return (::System::Xml::Schema::XmlSchemaContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Xml::Schema::XmlSchemaContent* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLECONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

