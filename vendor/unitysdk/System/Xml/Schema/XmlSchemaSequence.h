#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x98E9B80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x98E9B90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_SETITEMS_OFFSET UNITYSDK_OFFSET(0x98E9C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E9C40)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSequence_TypeDefinitionIndex = 28192;

	class XmlSchemaSequence : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_SETITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASEQUENCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

