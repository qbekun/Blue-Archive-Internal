#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_SETITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DF500)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaGroupBase_TypeDefinitionIndex = 28168;

	class XmlSchemaGroupBase : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_SETITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAGROUPBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

