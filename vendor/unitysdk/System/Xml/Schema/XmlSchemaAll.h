#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x98DF400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x98DF410)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET UNITYSDK_OFFSET(0x98DF450)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DF460)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAll_TypeDefinitionIndex = 28123;

	class XmlSchemaAll : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

