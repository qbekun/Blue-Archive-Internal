#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1E20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaContentModel_TypeDefinitionIndex = 28142;

	class XmlSchemaContentModel : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaContent* get_Content()
		{
			return (return (::System::Xml::Schema::XmlSchemaContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void set_Content(::System::Xml::Schema::XmlSchemaContent* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACONTENTMODEL_.CTOR_OFFSET))(nullptr);
		}

	};
}

